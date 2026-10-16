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

// Function: sub_00177B88
// Address: 0x177b88 - 0x177ca0
void sub_00177B88_0x177b88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00177B88_0x177b88");
#endif

    switch (ctx->pc) {
        case 0x177bdcu: goto label_177bdc;
        case 0x177be4u: goto label_177be4;
        case 0x177becu: goto label_177bec;
        case 0x177c1cu: goto label_177c1c;
        case 0x177c34u: goto label_177c34;
        case 0x177c50u: goto label_177c50;
        case 0x177c80u: goto label_177c80;
        case 0x177c88u: goto label_177c88;
        default: break;
    }

    ctx->pc = 0x177b88u;

    // 0x177b88: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x177b88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x177b8c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x177b8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x177b90: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x177b90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x177b94: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x177b94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177b98: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x177b98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x177b9c: 0x8e0200a0  lw          $v0, 0xA0($s0)
    ctx->pc = 0x177b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
    // 0x177ba0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x177ba0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x177ba4: 0x10400038  beqz        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x177BA4u;
    {
        const bool branch_taken_0x177ba4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x177BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177BA4u;
        // 0x177ba8: 0x3c03006c  lui         $v1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177ba4) {
            ctx->pc = 0x177C88u;
            goto label_177c88;
        }
    }
    ctx->pc = 0x177BACu;
    // 0x177bac: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x177bacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x177bb0: 0x8c64f888  lw          $a0, -0x778($v1)
    ctx->pc = 0x177bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294965384)));
    // 0x177bb4: 0x8c431a70  lw          $v1, 0x1A70($v0)
    ctx->pc = 0x177bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x701A70u));
    // 0x177bb8: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x177BB8u;
    {
        const bool branch_taken_0x177bb8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x177BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177BB8u;
        // 0x177bbc: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177bb8) {
            ctx->pc = 0x177BDCu;
            goto label_177bdc;
        }
    }
    ctx->pc = 0x177BC0u;
    // 0x177bc0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x177bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x177bc4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x177BC4u;
    {
        const bool branch_taken_0x177bc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x177bc4) {
            ctx->pc = 0x177BDCu;
            goto label_177bdc;
        }
    }
    ctx->pc = 0x177BCCu;
    // 0x177bcc: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x177bccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x177bd0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x177bd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177bd4: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x177BD4u;
    SET_GPR_U32(ctx, 31, 0x177BDCu);
    ctx->pc = 0x177BD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177BD4u;
    // 0x177bd8: 0xafb00004  sw          $s0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x177BD4u, 0x177BDCu)) {
        return;
    }
    ctx->pc = 0x177BDCu;
label_177bdc:
    // 0x177bdc: 0xc0810ec  jal         func_2043B0
    ctx->pc = 0x177BDCu;
    SET_GPR_U32(ctx, 31, 0x177BE4u);
    ctx->pc = 0x2043B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2043B0u, 0x177BDCu, 0x177BE4u)) {
        return;
    }
    ctx->pc = 0x177BE4u;
label_177be4:
    // 0x177be4: 0xc05df28  jal         func_177CA0
    ctx->pc = 0x177BE4u;
    SET_GPR_U32(ctx, 31, 0x177BECu);
    ctx->pc = 0x177BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177BE4u;
    // 0x177be8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177CA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x177CA0u, 0x177BE4u, 0x177BECu)) {
        return;
    }
    ctx->pc = 0x177BECu;
label_177bec:
    // 0x177bec: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x177becu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x177bf0: 0x8e231a70  lw          $v1, 0x1A70($s1)
    ctx->pc = 0x177bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6768)));
    // 0x177bf4: 0x8c44f8a0  lw          $a0, -0x760($v0)
    ctx->pc = 0x177bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6BF8A0u));
    // 0x177bf8: 0x10830009  beq         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x177BF8u;
    {
        const bool branch_taken_0x177bf8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x177BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177BF8u;
        // 0x177bfc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177bf8) {
            ctx->pc = 0x177C20u;
            goto label_177c20;
        }
    }
    ctx->pc = 0x177C00u;
    // 0x177c00: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x177c00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x177c04: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x177C04u;
    {
        const bool branch_taken_0x177c04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x177c04) {
            ctx->pc = 0x177C08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x177C04u;
            // 0x177c08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x177C24u;
            goto label_177c24;
        }
    }
    ctx->pc = 0x177C0Cu;
    // 0x177c0c: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x177c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x177c10: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x177c10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177c14: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x177C14u;
    SET_GPR_U32(ctx, 31, 0x177C1Cu);
    ctx->pc = 0x177C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177C14u;
    // 0x177c18: 0xafb00004  sw          $s0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x177C14u, 0x177C1Cu)) {
        return;
    }
    ctx->pc = 0x177C1Cu;
label_177c1c:
    // 0x177c1c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x177c1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_177c20:
    // 0x177c20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x177c20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_177c24:
    // 0x177c24: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x177c24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177c28: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x177c28u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177c2c: 0xc05e2e8  jal         func_178BA0
    ctx->pc = 0x177C2Cu;
    SET_GPR_U32(ctx, 31, 0x177C34u);
    ctx->pc = 0x177C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177C2Cu;
    // 0x177c30: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178BA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x178BA0u, 0x177C2Cu, 0x177C34u)) {
        return;
    }
    ctx->pc = 0x177C34u;
label_177c34:
    // 0x177c34: 0x8e0200a0  lw          $v0, 0xA0($s0)
    ctx->pc = 0x177c34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
    // 0x177c38: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x177c38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x177c3c: 0x3c050034  lui         $a1, 0x34
    ctx->pc = 0x177c3cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)52 << 16));
    // 0x177c40: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x177c40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x177c44: 0xae0200a0  sw          $v0, 0xA0($s0)
    ctx->pc = 0x177c44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 2));
    // 0x177c48: 0xc066510  jal         func_199440
    ctx->pc = 0x177C48u;
    SET_GPR_U32(ctx, 31, 0x177C50u);
    ctx->pc = 0x177C4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177C48u;
    // 0x177c4c: 0x8ca48bc4  lw          $a0, -0x743C($a1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294937540)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x199440u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x199440u, 0x177C48u, 0x177C50u)) {
        return;
    }
    ctx->pc = 0x177C50u;
label_177c50:
    // 0x177c50: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x177c50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x177c54: 0x8e231a70  lw          $v1, 0x1A70($s1)
    ctx->pc = 0x177c54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6768)));
    // 0x177c58: 0x8c44eff0  lw          $a0, -0x1010($v0)
    ctx->pc = 0x177c58u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6BEFF0u));
    // 0x177c5c: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x177C5Cu;
    {
        const bool branch_taken_0x177c5c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x177c5c) {
            ctx->pc = 0x177C80u;
            goto label_177c80;
        }
    }
    ctx->pc = 0x177C64u;
    // 0x177c64: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x177c64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x177c68: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x177C68u;
    {
        const bool branch_taken_0x177c68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x177c68) {
            ctx->pc = 0x177C80u;
            goto label_177c80;
        }
    }
    ctx->pc = 0x177C70u;
    // 0x177c70: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x177c70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x177c74: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x177c74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177c78: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x177C78u;
    SET_GPR_U32(ctx, 31, 0x177C80u);
    ctx->pc = 0x177C7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177C78u;
    // 0x177c7c: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x177C78u, 0x177C80u)) {
        return;
    }
    ctx->pc = 0x177C80u;
label_177c80:
    // 0x177c80: 0xc075d58  jal         func_1D7560
    ctx->pc = 0x177C80u;
    SET_GPR_U32(ctx, 31, 0x177C88u);
    ctx->pc = 0x1D7560u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D7560u, 0x177C80u, 0x177C88u)) {
        return;
    }
    ctx->pc = 0x177C88u;
label_177c88:
    // 0x177c88: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x177c88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x177c8c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x177c8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x177c90: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x177c90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x177c94: 0x3e00008  jr          $ra
    ctx->pc = 0x177C94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x177C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177C94u;
        // 0x177c98: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x177C94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x177C9Cu;
    // 0x177c9c: 0x0  nop
    ctx->pc = 0x177c9cu;
    // NOP
    ctx->pc = 0x177ca0u;
}
