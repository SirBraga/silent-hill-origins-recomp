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

// Function: sub_0029A7B0
// Address: 0x29a7b0 - 0x29a850
void sub_0029A7B0_0x29a7b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029A7B0_0x29a7b0");
#endif

    switch (ctx->pc) {
        case 0x29a828u: goto label_29a828;
        case 0x29a83cu: goto label_29a83c;
        default: break;
    }

    ctx->pc = 0x29a7b0u;

    // 0x29a7b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x29a7b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x29a7b4: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x29a7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x29a7b8: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x29a7b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x29a7bc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x29a7bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x29a7c0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x29a7c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a7c4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x29a7c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x29a7c8: 0x2444d868  addiu       $a0, $v0, -0x2798
    ctx->pc = 0x29a7c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957160));
    // 0x29a7cc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x29a7ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a7d0: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x29a7d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x29a7d4: 0x1600000b  bnez        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x29A7D4u;
    {
        const bool branch_taken_0x29a7d4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x29A7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A7D4u;
        // 0x29a7d8: 0xacc40028  sw          $a0, 0x28($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 40), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a7d4) {
            ctx->pc = 0x29A804u;
            goto label_29a804;
        }
    }
    ctx->pc = 0x29A7DCu;
    // 0x29a7dc: 0xdc45d868  ld          $a1, -0x2798($v0)
    ctx->pc = 0x29a7dcu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294957160)));
    // 0x29a7e0: 0x94830008  lhu         $v1, 0x8($a0)
    ctx->pc = 0x29a7e0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x29a7e4: 0x24c2fff8  addiu       $v0, $a2, -0x8
    ctx->pc = 0x29a7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967288));
    // 0x29a7e8: 0xdc840008  ld          $a0, 0x8($a0)
    ctx->pc = 0x29a7e8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x29a7ec: 0x2221023  subu        $v0, $s1, $v0
    ctx->pc = 0x29a7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x29a7f0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x29a7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x29a7f4: 0xffa50000  sd          $a1, 0x0($sp)
    ctx->pc = 0x29a7f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 5));
    // 0x29a7f8: 0xffa40008  sd          $a0, 0x8($sp)
    ctx->pc = 0x29a7f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 4));
    // 0x29a7fc: 0xa7a30008  sh          $v1, 0x8($sp)
    ctx->pc = 0x29a7fcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x29a800: 0xacdd0028  sw          $sp, 0x28($a2)
    ctx->pc = 0x29a800u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 40), GPR_U32(ctx, 29));
label_29a804:
    // 0x29a804: 0x32020002  andi        $v0, $s0, 0x2
    ctx->pc = 0x29a804u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)2);
    // 0x29a808: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x29A808u;
    {
        const bool branch_taken_0x29a808 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29A80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A808u;
        // 0x29a80c: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a808) {
            ctx->pc = 0x29A828u;
            goto label_29a828;
        }
    }
    ctx->pc = 0x29A810u;
    // 0x29a810: 0x8cc40020  lw          $a0, 0x20($a2)
    ctx->pc = 0x29a810u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x29a814: 0x2442da40  addiu       $v0, $v0, -0x25C0
    ctx->pc = 0x29a814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957632));
    // 0x29a818: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x29A818u;
    {
        const bool branch_taken_0x29a818 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x29A81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A818u;
        // 0x29a81c: 0xacc20028  sw          $v0, 0x28($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a818) {
            ctx->pc = 0x29A828u;
            goto label_29a828;
        }
    }
    ctx->pc = 0x29A820u;
    // 0x29a820: 0xc0808d4  jal         func_202350
    ctx->pc = 0x29A820u;
    SET_GPR_U32(ctx, 31, 0x29A828u);
    ctx->pc = 0x202350u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202350u, 0x29A820u, 0x29A828u)) {
        return;
    }
    ctx->pc = 0x29A828u;
label_29a828:
    // 0x29a828: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x29a828u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x29a82c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x29A82Cu;
    {
        const bool branch_taken_0x29a82c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29A830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A82Cu;
        // 0x29a830: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a82c) {
            ctx->pc = 0x29A840u;
            goto label_29a840;
        }
    }
    ctx->pc = 0x29A834u;
    // 0x29a834: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x29A834u;
    SET_GPR_U32(ctx, 31, 0x29A83Cu);
    ctx->pc = 0x29A838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A834u;
    // 0x29a838: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x29A834u, 0x29A83Cu)) {
        return;
    }
    ctx->pc = 0x29A83Cu;
label_29a83c:
    // 0x29a83c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x29a83cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_29a840:
    // 0x29a840: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x29a840u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29a844: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x29a844u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29a848: 0x3e00008  jr          $ra
    ctx->pc = 0x29A848u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29A84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A848u;
        // 0x29a84c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29A848u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29A850u;
}
