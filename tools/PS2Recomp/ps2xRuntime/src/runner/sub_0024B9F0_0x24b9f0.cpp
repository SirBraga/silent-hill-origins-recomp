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

// Function: sub_0024B9F0
// Address: 0x24b9f0 - 0x24ba90
void sub_0024B9F0_0x24b9f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024B9F0_0x24b9f0");
#endif

    switch (ctx->pc) {
        case 0x24ba6cu: goto label_24ba6c;
        case 0x24ba7cu: goto label_24ba7c;
        default: break;
    }

    ctx->pc = 0x24b9f0u;

    // 0x24b9f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x24b9f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x24b9f4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x24b9f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x24b9f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x24b9f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x24b9fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x24b9fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ba00: 0x8ca6000c  lw          $a2, 0xC($a1)
    ctx->pc = 0x24ba00u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x24ba04: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x24ba04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x24ba08: 0x8c843f60  lw          $a0, 0x3F60($a0)
    ctx->pc = 0x24ba08u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6B3F60u));
    // 0x24ba0c: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x24ba0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x24ba10: 0x24420fc8  addiu       $v0, $v0, 0xFC8
    ctx->pc = 0x24ba10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4040));
    // 0x24ba14: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x24ba14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x24ba18: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x24ba18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x24ba1c: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x24ba1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x24ba20: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x24ba20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x24ba24: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x24ba24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24ba28: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x24BA28u;
    {
        const bool branch_taken_0x24ba28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24BA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BA28u;
        // 0x24ba2c: 0x30c30003  andi        $v1, $a2, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ba28) {
            ctx->pc = 0x24BA58u;
            goto label_24ba58;
        }
    }
    ctx->pc = 0x24BA30u;
    // 0x24ba30: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x24ba30u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x24ba34: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x24ba34u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x24ba38: 0x78a30010  lq          $v1, 0x10($a1)
    ctx->pc = 0x24ba38u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x24ba3c: 0x7e030010  sq          $v1, 0x10($s0)
    ctx->pc = 0x24ba3cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 3));
    // 0x24ba40: 0x78a20020  lq          $v0, 0x20($a1)
    ctx->pc = 0x24ba40u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x24ba44: 0x7e020020  sq          $v0, 0x20($s0)
    ctx->pc = 0x24ba44u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 2));
    // 0x24ba48: 0x78a30030  lq          $v1, 0x30($a1)
    ctx->pc = 0x24ba48u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x24ba4c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x24BA4Cu;
    {
        const bool branch_taken_0x24ba4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24BA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BA4Cu;
        // 0x24ba50: 0x7e030030  sq          $v1, 0x30($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 48), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ba4c) {
            ctx->pc = 0x24BA7Cu;
            goto label_24ba7c;
        }
    }
    ctx->pc = 0x24BA54u;
    // 0x24ba54: 0x0  nop
    ctx->pc = 0x24ba54u;
    // NOP
label_24ba58:
    // 0x24ba58: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x24ba58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x24ba5c: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x24BA5Cu;
    {
        const bool branch_taken_0x24ba5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x24ba5c) {
            ctx->pc = 0x24BA74u;
            goto label_24ba74;
        }
    }
    ctx->pc = 0x24BA64u;
    // 0x24ba64: 0xc092b60  jal         func_24AD80
    ctx->pc = 0x24BA64u;
    SET_GPR_U32(ctx, 31, 0x24BA6Cu);
    ctx->pc = 0x24BA68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24BA64u;
    // 0x24ba68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24AD80u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24AD80u, 0x24BA64u, 0x24BA6Cu)) {
        return;
    }
    ctx->pc = 0x24BA6Cu;
label_24ba6c:
    // 0x24ba6c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x24BA6Cu;
    {
        const bool branch_taken_0x24ba6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24BA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BA6Cu;
        // 0x24ba70: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ba6c) {
            ctx->pc = 0x24BA80u;
            goto label_24ba80;
        }
    }
    ctx->pc = 0x24BA74u;
label_24ba74:
    // 0x24ba74: 0xc092b9e  jal         func_24AE78
    ctx->pc = 0x24BA74u;
    SET_GPR_U32(ctx, 31, 0x24BA7Cu);
    ctx->pc = 0x24BA78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24BA74u;
    // 0x24ba78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24AE78u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24AE78u, 0x24BA74u, 0x24BA7Cu)) {
        return;
    }
    ctx->pc = 0x24BA7Cu;
label_24ba7c:
    // 0x24ba7c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x24ba7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_24ba80:
    // 0x24ba80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24ba80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24ba84: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x24ba84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24ba88: 0x3e00008  jr          $ra
    ctx->pc = 0x24BA88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24BA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BA88u;
        // 0x24ba8c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24BA88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24BA90u;
}
