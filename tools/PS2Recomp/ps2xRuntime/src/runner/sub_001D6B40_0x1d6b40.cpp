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

// Function: sub_001D6B40
// Address: 0x1d6b40 - 0x1d6c08
void sub_001D6B40_0x1d6b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D6B40_0x1d6b40");
#endif

    switch (ctx->pc) {
        case 0x1d6b80u: goto label_1d6b80;
        case 0x1d6bb0u: goto label_1d6bb0;
        default: break;
    }

    ctx->pc = 0x1d6b40u;

    // 0x1d6b40: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x1d6b40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
    // 0x1d6b44: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d6b44u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d6b48: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x1d6b48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x1d6b4c: 0x8c648868  lw          $a0, -0x7798($v1)
    ctx->pc = 0x1d6b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6F8868u));
    // 0x1d6b50: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1d6b50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1d6b54: 0x8c431a70  lw          $v1, 0x1A70($v0)
    ctx->pc = 0x1d6b54u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x701A70u));
    // 0x1d6b58: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1d6b58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6b5c: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D6B5Cu;
    {
        const bool branch_taken_0x1d6b5c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1D6B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6B5Cu;
        // 0x1d6b60: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6b5c) {
            ctx->pc = 0x1D6B80u;
            goto label_1d6b80;
        }
    }
    ctx->pc = 0x1D6B64u;
    // 0x1d6b64: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1d6b64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1d6b68: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D6B68u;
    {
        const bool branch_taken_0x1d6b68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6B68u;
        // 0x1d6b6c: 0x3c02006d  lui         $v0, 0x6D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6b68) {
            ctx->pc = 0x1D6B84u;
            goto label_1d6b84;
        }
    }
    ctx->pc = 0x1D6B70u;
    // 0x1d6b70: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1d6b70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1d6b74: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1d6b74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6b78: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x1D6B78u;
    SET_GPR_U32(ctx, 31, 0x1D6B80u);
    ctx->pc = 0x1D6B7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6B78u;
    // 0x1d6b7c: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x1D6B78u, 0x1D6B80u)) {
        return;
    }
    ctx->pc = 0x1D6B80u;
label_1d6b80:
    // 0x1d6b80: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x1d6b80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_1d6b84:
    // 0x1d6b84: 0x8e031a70  lw          $v1, 0x1A70($s0)
    ctx->pc = 0x1d6b84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6768)));
    // 0x1d6b88: 0x8c44bde0  lw          $a0, -0x4220($v0)
    ctx->pc = 0x1d6b88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950368)));
    // 0x1d6b8c: 0x10830009  beq         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D6B8Cu;
    {
        const bool branch_taken_0x1d6b8c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1D6B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6B8Cu;
        // 0x1d6b90: 0x3c020070  lui         $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6b8c) {
            ctx->pc = 0x1D6BB4u;
            goto label_1d6bb4;
        }
    }
    ctx->pc = 0x1D6B94u;
    // 0x1d6b94: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1d6b94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1d6b98: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D6B98u;
    {
        const bool branch_taken_0x1d6b98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6B98u;
        // 0x1d6b9c: 0x3c020070  lui         $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6b98) {
            ctx->pc = 0x1D6BB4u;
            goto label_1d6bb4;
        }
    }
    ctx->pc = 0x1D6BA0u;
    // 0x1d6ba0: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1d6ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1d6ba4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1d6ba4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6ba8: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x1D6BA8u;
    SET_GPR_U32(ctx, 31, 0x1D6BB0u);
    ctx->pc = 0x1D6BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6BA8u;
    // 0x1d6bac: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x1D6BA8u, 0x1D6BB0u)) {
        return;
    }
    ctx->pc = 0x1D6BB0u;
label_1d6bb0:
    // 0x1d6bb0: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x1d6bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
label_1d6bb4:
    // 0x1d6bb4: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x1d6bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
    // 0x1d6bb8: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1d6bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1d6bbc: 0x8c498890  lw          $t1, -0x7770($v0)
    ctx->pc = 0x1d6bbcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936720)));
    // 0x1d6bc0: 0x8c6a8898  lw          $t2, -0x7768($v1)
    ctx->pc = 0x1d6bc0u;
    SET_GPR_S32(ctx, 10, (int32_t)FAST_READ32(0x6F8898u));
    // 0x1d6bc4: 0x3c060070  lui         $a2, 0x70
    ctx->pc = 0x1d6bc4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)112 << 16));
    // 0x1d6bc8: 0x8c8888a0  lw          $t0, -0x7760($a0)
    ctx->pc = 0x1d6bc8u;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x6F88A0u));
    // 0x1d6bcc: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x1d6bccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x1d6bd0: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1d6bd0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1d6bd4: 0x3c070034  lui         $a3, 0x34
    ctx->pc = 0x1d6bd4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)52 << 16));
    // 0x1d6bd8: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x1d6bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x1d6bdc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d6bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d6be0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1d6be0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d6be4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d6be4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d6be8: 0xacc988b8  sw          $t1, -0x7748($a2)
    ctx->pc = 0x1d6be8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 9)); ps2TraceGuestWrite(rdram, 0x6F88B8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6F88B8u, _value); } while (0);
    // 0x1d6bec: 0xacaa88c0  sw          $t2, -0x7740($a1)
    ctx->pc = 0x1d6becu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 10)); ps2TraceGuestWrite(rdram, 0x6F88C0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6F88C0u, _value); } while (0);
    // 0x1d6bf0: 0xac8888c8  sw          $t0, -0x7738($a0)
    ctx->pc = 0x1d6bf0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x6F88C8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6F88C8u, _value); } while (0);
    // 0x1d6bf4: 0xac629ce8  sw          $v0, -0x6318($v1)
    ctx->pc = 0x1d6bf4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x339CE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x339CE8u, _value); } while (0);
    // 0x1d6bf8: 0xace09ce0  sw          $zero, -0x6320($a3)
    ctx->pc = 0x1d6bf8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x339CE0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x339CE0u, _value); } while (0);
    // 0x1d6bfc: 0x3e00008  jr          $ra
    ctx->pc = 0x1D6BFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D6C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6BFCu;
        // 0x1d6c00: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D6BFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D6C04u;
    // 0x1d6c04: 0x0  nop
    ctx->pc = 0x1d6c04u;
    // NOP
    ctx->pc = 0x1d6c08u;
}
