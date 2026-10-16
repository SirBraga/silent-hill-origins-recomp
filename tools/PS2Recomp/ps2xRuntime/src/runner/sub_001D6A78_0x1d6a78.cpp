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

// Function: sub_001D6A78
// Address: 0x1d6a78 - 0x1d6b40
void sub_001D6A78_0x1d6a78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D6A78_0x1d6a78");
#endif

    switch (ctx->pc) {
        case 0x1d6ab8u: goto label_1d6ab8;
        case 0x1d6ae8u: goto label_1d6ae8;
        default: break;
    }

    ctx->pc = 0x1d6a78u;

    // 0x1d6a78: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x1d6a78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
    // 0x1d6a7c: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d6a7cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d6a80: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x1d6a80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x1d6a84: 0x8c648860  lw          $a0, -0x77A0($v1)
    ctx->pc = 0x1d6a84u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6F8860u));
    // 0x1d6a88: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1d6a88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1d6a8c: 0x8c431a70  lw          $v1, 0x1A70($v0)
    ctx->pc = 0x1d6a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x701A70u));
    // 0x1d6a90: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1d6a90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6a94: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D6A94u;
    {
        const bool branch_taken_0x1d6a94 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1D6A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6A94u;
        // 0x1d6a98: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6a94) {
            ctx->pc = 0x1D6AB8u;
            goto label_1d6ab8;
        }
    }
    ctx->pc = 0x1D6A9Cu;
    // 0x1d6a9c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1d6a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1d6aa0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D6AA0u;
    {
        const bool branch_taken_0x1d6aa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6AA0u;
        // 0x1d6aa4: 0x3c02006d  lui         $v0, 0x6D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6aa0) {
            ctx->pc = 0x1D6ABCu;
            goto label_1d6abc;
        }
    }
    ctx->pc = 0x1D6AA8u;
    // 0x1d6aa8: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1d6aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1d6aac: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1d6aacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6ab0: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x1D6AB0u;
    SET_GPR_U32(ctx, 31, 0x1D6AB8u);
    ctx->pc = 0x1D6AB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6AB0u;
    // 0x1d6ab4: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x1D6AB0u, 0x1D6AB8u)) {
        return;
    }
    ctx->pc = 0x1D6AB8u;
label_1d6ab8:
    // 0x1d6ab8: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x1d6ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_1d6abc:
    // 0x1d6abc: 0x8e031a70  lw          $v1, 0x1A70($s0)
    ctx->pc = 0x1d6abcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6768)));
    // 0x1d6ac0: 0x8c44bde8  lw          $a0, -0x4218($v0)
    ctx->pc = 0x1d6ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950376)));
    // 0x1d6ac4: 0x10830009  beq         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D6AC4u;
    {
        const bool branch_taken_0x1d6ac4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1D6AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6AC4u;
        // 0x1d6ac8: 0x3c020070  lui         $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6ac4) {
            ctx->pc = 0x1D6AECu;
            goto label_1d6aec;
        }
    }
    ctx->pc = 0x1D6ACCu;
    // 0x1d6acc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1d6accu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1d6ad0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D6AD0u;
    {
        const bool branch_taken_0x1d6ad0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6AD0u;
        // 0x1d6ad4: 0x3c020070  lui         $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6ad0) {
            ctx->pc = 0x1D6AECu;
            goto label_1d6aec;
        }
    }
    ctx->pc = 0x1D6AD8u;
    // 0x1d6ad8: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1d6ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1d6adc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1d6adcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6ae0: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x1D6AE0u;
    SET_GPR_U32(ctx, 31, 0x1D6AE8u);
    ctx->pc = 0x1D6AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6AE0u;
    // 0x1d6ae4: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x1D6AE0u, 0x1D6AE8u)) {
        return;
    }
    ctx->pc = 0x1D6AE8u;
label_1d6ae8:
    // 0x1d6ae8: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x1d6ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
label_1d6aec:
    // 0x1d6aec: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x1d6aecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
    // 0x1d6af0: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1d6af0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1d6af4: 0x8c498878  lw          $t1, -0x7788($v0)
    ctx->pc = 0x1d6af4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936696)));
    // 0x1d6af8: 0x8c6a8880  lw          $t2, -0x7780($v1)
    ctx->pc = 0x1d6af8u;
    SET_GPR_S32(ctx, 10, (int32_t)FAST_READ32(0x6F8880u));
    // 0x1d6afc: 0x3c070070  lui         $a3, 0x70
    ctx->pc = 0x1d6afcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)112 << 16));
    // 0x1d6b00: 0x8c888888  lw          $t0, -0x7778($a0)
    ctx->pc = 0x1d6b00u;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x6F8888u));
    // 0x1d6b04: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x1d6b04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x1d6b08: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1d6b08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1d6b0c: 0x3c060034  lui         $a2, 0x34
    ctx->pc = 0x1d6b0cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)52 << 16));
    // 0x1d6b10: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d6b10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d6b14: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x1d6b14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x1d6b18: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1d6b18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d6b1c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d6b1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d6b20: 0xace988b8  sw          $t1, -0x7748($a3)
    ctx->pc = 0x1d6b20u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 9)); ps2TraceGuestWrite(rdram, 0x6F88B8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6F88B8u, _value); } while (0);
    // 0x1d6b24: 0xacaa88c0  sw          $t2, -0x7740($a1)
    ctx->pc = 0x1d6b24u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 10)); ps2TraceGuestWrite(rdram, 0x6F88C0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6F88C0u, _value); } while (0);
    // 0x1d6b28: 0xac8888c8  sw          $t0, -0x7738($a0)
    ctx->pc = 0x1d6b28u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x6F88C8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6F88C8u, _value); } while (0);
    // 0x1d6b2c: 0xacc29ce0  sw          $v0, -0x6320($a2)
    ctx->pc = 0x1d6b2cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x339CE0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x339CE0u, _value); } while (0);
    // 0x1d6b30: 0xac609ce8  sw          $zero, -0x6318($v1)
    ctx->pc = 0x1d6b30u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x339CE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x339CE8u, _value); } while (0);
    // 0x1d6b34: 0x3e00008  jr          $ra
    ctx->pc = 0x1D6B34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D6B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6B34u;
        // 0x1d6b38: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D6B34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D6B3Cu;
    // 0x1d6b3c: 0x0  nop
    ctx->pc = 0x1d6b3cu;
    // NOP
    ctx->pc = 0x1d6b40u;
}
