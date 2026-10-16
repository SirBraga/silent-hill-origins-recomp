#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002E1798
// Address: 0x2e1798 - 0x2e1850
void sub_002E1798_0x2e1798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E1798_0x2e1798");
#endif

    switch (ctx->pc) {
        case 0x2e17bcu: goto label_2e17bc;
        default: break;
    }

    ctx->pc = 0x2e1798u;

    // 0x2e1798: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2e1798u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2e179c: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x2e179cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2e17a0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2e17a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2e17a4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2e17a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2e17a8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2e17a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e17ac: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2e17acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e17b0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2e17b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2e17b4: 0xc093546  jal         func_24D518
    ctx->pc = 0x2E17B4u;
    SET_GPR_U32(ctx, 31, 0x2E17BCu);
    ctx->pc = 0x2E17B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E17B4u;
    // 0x2e17b8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D518u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D518u, 0x2E17B4u, 0x2E17BCu)) {
        return;
    }
    ctx->pc = 0x2E17BCu;
label_2e17bc:
    // 0x2e17bc: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x2e17bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2e17c0: 0x1443001b  bne         $v0, $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x2E17C0u;
    {
        const bool branch_taken_0x2e17c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2E17C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E17C0u;
        // 0x2e17c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e17c0) {
            ctx->pc = 0x2E1830u;
            goto label_2e1830;
        }
    }
    ctx->pc = 0x2E17C8u;
    // 0x2e17c8: 0x8fa60008  lw          $a2, 0x8($sp)
    ctx->pc = 0x2e17c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2e17cc: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x2e17ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x2e17d0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2e17d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e17d4: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x2e17d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2e17d8: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x2e17d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x2e17dc: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2e17dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2e17e0: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E17E0u;
    {
        const bool branch_taken_0x2e17e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E17E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E17E0u;
        // 0x2e17e4: 0xae040004  sw          $a0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e17e0) {
            ctx->pc = 0x2E17F8u;
            goto label_2e17f8;
        }
    }
    ctx->pc = 0x2E17E8u;
    // 0x2e17e8: 0x61200  sll         $v0, $a2, 8
    ctx->pc = 0x2e17e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
    // 0x2e17ec: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x2e17ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x2e17f0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2E17F0u;
    {
        const bool branch_taken_0x2e17f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E17F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E17F0u;
        // 0x2e17f4: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e17f0) {
            ctx->pc = 0x2E1828u;
            goto label_2e1828;
        }
    }
    ctx->pc = 0x2E17F8u;
label_2e17f8:
    // 0x2e17f8: 0x3c040003  lui         $a0, 0x3
    ctx->pc = 0x2e17f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)3 << 16));
    // 0x2e17fc: 0x61382  srl         $v0, $a2, 14
    ctx->pc = 0x2e17fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 6), 14));
    // 0x2e1800: 0x3484ff00  ori         $a0, $a0, 0xFF00
    ctx->pc = 0x2e1800u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65280);
    // 0x2e1804: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x2e1804u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
    // 0x2e1808: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2e1808u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x2e180c: 0x61c02  srl         $v1, $a2, 16
    ctx->pc = 0x2e180cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 6), 16));
    // 0x2e1810: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2e1810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2e1814: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x2e1814u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x2e1818: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2e1818u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2e181c: 0x30c4ffff  andi        $a0, $a2, 0xFFFF
    ctx->pc = 0x2e181cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x2e1820: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x2e1820u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x2e1824: 0xae04000c  sw          $a0, 0xC($s0)
    ctx->pc = 0x2e1824u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 4));
label_2e1828:
    // 0x2e1828: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x2e1828u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x2e182c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2e182cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2e1830:
    // 0x2e1830: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2e1830u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e1834: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2e1834u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e1838: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2e1838u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e183c: 0x3e00008  jr          $ra
    ctx->pc = 0x2E183Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E1840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E183Cu;
        // 0x2e1840: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E183Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E1844u;
    // 0x2e1844: 0x0  nop
    ctx->pc = 0x2e1844u;
    // NOP
    // 0x2e1848: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2e1848u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2e184c: 0x0  nop
    ctx->pc = 0x2e184cu;
    // NOP
    ctx->pc = 0x2e1850u;
}
