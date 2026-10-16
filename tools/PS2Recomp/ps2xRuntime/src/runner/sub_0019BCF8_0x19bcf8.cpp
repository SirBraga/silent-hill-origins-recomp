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

// Function: sub_0019BCF8
// Address: 0x19bcf8 - 0x19bd80
void sub_0019BCF8_0x19bcf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019BCF8_0x19bcf8");
#endif

    switch (ctx->pc) {
        case 0x19bd24u: goto label_19bd24;
        case 0x19bd54u: goto label_19bd54;
        case 0x19bd5cu: goto label_19bd5c;
        case 0x19bd68u: goto label_19bd68;
        default: break;
    }

    ctx->pc = 0x19bcf8u;

    // 0x19bcf8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x19bcf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x19bcfc: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x19bcfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x19bd00: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x19bd00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x19bd04: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19bd04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bd08: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x19bd08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x19bd0c: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x19bd0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x19bd10: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x19BD10u;
    {
        const bool branch_taken_0x19bd10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19BD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BD10u;
        // 0x19bd14: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19bd10) {
            ctx->pc = 0x19BD54u;
            goto label_19bd54;
        }
    }
    ctx->pc = 0x19BD18u;
    // 0x19bd18: 0x8e040040  lw          $a0, 0x40($s0)
    ctx->pc = 0x19bd18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x19bd1c: 0xc0b879c  jal         func_2E1E70
    ctx->pc = 0x19BD1Cu;
    SET_GPR_U32(ctx, 31, 0x19BD24u);
    ctx->pc = 0x19BD20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19BD1Cu;
    // 0x19bd20: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1E70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E1E70u, 0x19BD1Cu, 0x19BD24u)) {
        return;
    }
    ctx->pc = 0x19BD24u;
label_19bd24:
    // 0x19bd24: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x19bd24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x19bd28: 0x8e04005c  lw          $a0, 0x5C($s0)
    ctx->pc = 0x19bd28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x19bd2c: 0x8c431a70  lw          $v1, 0x1A70($v0)
    ctx->pc = 0x19bd2cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x701A70u));
    // 0x19bd30: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x19BD30u;
    {
        const bool branch_taken_0x19bd30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x19bd30) {
            ctx->pc = 0x19BD54u;
            goto label_19bd54;
        }
    }
    ctx->pc = 0x19BD38u;
    // 0x19bd38: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x19bd38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x19bd3c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x19BD3Cu;
    {
        const bool branch_taken_0x19bd3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19bd3c) {
            ctx->pc = 0x19BD54u;
            goto label_19bd54;
        }
    }
    ctx->pc = 0x19BD44u;
    // 0x19bd44: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x19bd44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x19bd48: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x19bd48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bd4c: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x19BD4Cu;
    SET_GPR_U32(ctx, 31, 0x19BD54u);
    ctx->pc = 0x19BD50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19BD4Cu;
    // 0x19bd50: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x19BD4Cu, 0x19BD54u)) {
        return;
    }
    ctx->pc = 0x19BD54u;
label_19bd54:
    // 0x19bd54: 0xc07658e  jal         func_1D9638
    ctx->pc = 0x19BD54u;
    SET_GPR_U32(ctx, 31, 0x19BD5Cu);
    ctx->pc = 0x19BD58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19BD54u;
    // 0x19bd58: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9638u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D9638u, 0x19BD54u, 0x19BD5Cu)) {
        return;
    }
    ctx->pc = 0x19BD5Cu;
label_19bd5c:
    // 0x19bd5c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19bd5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bd60: 0xc0765ae  jal         func_1D96B8
    ctx->pc = 0x19BD60u;
    SET_GPR_U32(ctx, 31, 0x19BD68u);
    ctx->pc = 0x19BD64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19BD60u;
    // 0x19bd64: 0xae020038  sw          $v0, 0x38($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D96B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D96B8u, 0x19BD60u, 0x19BD68u)) {
        return;
    }
    ctx->pc = 0x19BD68u;
label_19bd68:
    // 0x19bd68: 0xae020094  sw          $v0, 0x94($s0)
    ctx->pc = 0x19bd68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 2));
    // 0x19bd6c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x19bd6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19bd70: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x19bd70u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19bd74: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19bd74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19bd78: 0x3e00008  jr          $ra
    ctx->pc = 0x19BD78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19BD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BD78u;
        // 0x19bd7c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19BD78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19BD80u;
}
