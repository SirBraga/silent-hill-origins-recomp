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

// Function: sub_0029AC50
// Address: 0x29ac50 - 0x29acf0
void sub_0029AC50_0x29ac50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029AC50_0x29ac50");
#endif

    switch (ctx->pc) {
        case 0x29acc8u: goto label_29acc8;
        case 0x29acdcu: goto label_29acdc;
        default: break;
    }

    ctx->pc = 0x29ac50u;

    // 0x29ac50: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x29ac50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x29ac54: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x29ac54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x29ac58: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x29ac58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x29ac5c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x29ac5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x29ac60: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x29ac60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ac64: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x29ac64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x29ac68: 0x2444d878  addiu       $a0, $v0, -0x2788
    ctx->pc = 0x29ac68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957176));
    // 0x29ac6c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x29ac6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ac70: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x29ac70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x29ac74: 0x1600000b  bnez        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x29AC74u;
    {
        const bool branch_taken_0x29ac74 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x29AC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AC74u;
        // 0x29ac78: 0xacc40028  sw          $a0, 0x28($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 40), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ac74) {
            ctx->pc = 0x29ACA4u;
            goto label_29aca4;
        }
    }
    ctx->pc = 0x29AC7Cu;
    // 0x29ac7c: 0xdc45d878  ld          $a1, -0x2788($v0)
    ctx->pc = 0x29ac7cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294957176)));
    // 0x29ac80: 0x94830008  lhu         $v1, 0x8($a0)
    ctx->pc = 0x29ac80u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x29ac84: 0x24c2fff8  addiu       $v0, $a2, -0x8
    ctx->pc = 0x29ac84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967288));
    // 0x29ac88: 0xdc840008  ld          $a0, 0x8($a0)
    ctx->pc = 0x29ac88u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x29ac8c: 0x2221023  subu        $v0, $s1, $v0
    ctx->pc = 0x29ac8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x29ac90: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x29ac90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x29ac94: 0xffa50000  sd          $a1, 0x0($sp)
    ctx->pc = 0x29ac94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 5));
    // 0x29ac98: 0xffa40008  sd          $a0, 0x8($sp)
    ctx->pc = 0x29ac98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 4));
    // 0x29ac9c: 0xa7a30008  sh          $v1, 0x8($sp)
    ctx->pc = 0x29ac9cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x29aca0: 0xacdd0028  sw          $sp, 0x28($a2)
    ctx->pc = 0x29aca0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 40), GPR_U32(ctx, 29));
label_29aca4:
    // 0x29aca4: 0x32020002  andi        $v0, $s0, 0x2
    ctx->pc = 0x29aca4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)2);
    // 0x29aca8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x29ACA8u;
    {
        const bool branch_taken_0x29aca8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29ACACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29ACA8u;
        // 0x29acac: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29aca8) {
            ctx->pc = 0x29ACC8u;
            goto label_29acc8;
        }
    }
    ctx->pc = 0x29ACB0u;
    // 0x29acb0: 0x8cc40020  lw          $a0, 0x20($a2)
    ctx->pc = 0x29acb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x29acb4: 0x2442da40  addiu       $v0, $v0, -0x25C0
    ctx->pc = 0x29acb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957632));
    // 0x29acb8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x29ACB8u;
    {
        const bool branch_taken_0x29acb8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x29ACBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29ACB8u;
        // 0x29acbc: 0xacc20028  sw          $v0, 0x28($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29acb8) {
            ctx->pc = 0x29ACC8u;
            goto label_29acc8;
        }
    }
    ctx->pc = 0x29ACC0u;
    // 0x29acc0: 0xc0808d4  jal         func_202350
    ctx->pc = 0x29ACC0u;
    SET_GPR_U32(ctx, 31, 0x29ACC8u);
    ctx->pc = 0x202350u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202350u, 0x29ACC0u, 0x29ACC8u)) {
        return;
    }
    ctx->pc = 0x29ACC8u;
label_29acc8:
    // 0x29acc8: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x29acc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x29accc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x29ACCCu;
    {
        const bool branch_taken_0x29accc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29ACD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29ACCCu;
        // 0x29acd0: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29accc) {
            ctx->pc = 0x29ACE0u;
            goto label_29ace0;
        }
    }
    ctx->pc = 0x29ACD4u;
    // 0x29acd4: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x29ACD4u;
    SET_GPR_U32(ctx, 31, 0x29ACDCu);
    ctx->pc = 0x29ACD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29ACD4u;
    // 0x29acd8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x29ACD4u, 0x29ACDCu)) {
        return;
    }
    ctx->pc = 0x29ACDCu;
label_29acdc:
    // 0x29acdc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x29acdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_29ace0:
    // 0x29ace0: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x29ace0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29ace4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x29ace4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29ace8: 0x3e00008  jr          $ra
    ctx->pc = 0x29ACE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29ACECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29ACE8u;
        // 0x29acec: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29ACE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29ACF0u;
}
