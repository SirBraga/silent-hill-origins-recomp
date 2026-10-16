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

// Function: sub_00317258
// Address: 0x317258 - 0x3172d8
void sub_00317258_0x317258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00317258_0x317258");
#endif

    switch (ctx->pc) {
        case 0x317278u: goto label_317278;
        case 0x317290u: goto label_317290;
        case 0x31729cu: goto label_31729c;
        case 0x3172acu: goto label_3172ac;
        case 0x3172b8u: goto label_3172b8;
        default: break;
    }

    ctx->pc = 0x317258u;

    // 0x317258: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x317258u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x31725c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x31725cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x317260: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x317260u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x317264: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x317264u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317268: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x317268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x31726c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x31726cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317270: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x317270u;
    {
        const bool branch_taken_0x317270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x317274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317270u;
        // 0x317274: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317270) {
            ctx->pc = 0x31727Cu;
            goto label_31727c;
        }
    }
    ctx->pc = 0x317278u;
label_317278:
    // 0x317278: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x317278u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_31727c:
    // 0x31727c: 0x82240000  lb          $a0, 0x0($s1)
    ctx->pc = 0x31727cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x317280: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x317280u;
    {
        const bool branch_taken_0x317280 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x317280) {
            ctx->pc = 0x3172A4u;
            goto label_3172a4;
        }
    }
    ctx->pc = 0x317288u;
    // 0x317288: 0xc0c79ba  jal         func_31E6E8
    ctx->pc = 0x317288u;
    SET_GPR_U32(ctx, 31, 0x317290u);
    ctx->pc = 0x31E6E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x31E6E8u, 0x317288u, 0x317290u)) {
        return;
    }
    ctx->pc = 0x317290u;
label_317290:
    // 0x317290: 0x82440000  lb          $a0, 0x0($s2)
    ctx->pc = 0x317290u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x317294: 0xc0c79ba  jal         func_31E6E8
    ctx->pc = 0x317294u;
    SET_GPR_U32(ctx, 31, 0x31729Cu);
    ctx->pc = 0x317298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x317294u;
    // 0x317298: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E6E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x31E6E8u, 0x317294u, 0x31729Cu)) {
        return;
    }
    ctx->pc = 0x31729Cu;
label_31729c:
    // 0x31729c: 0x5202fff6  beql        $s0, $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x31729Cu;
    {
        const bool branch_taken_0x31729c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x31729c) {
            ctx->pc = 0x3172A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31729Cu;
            // 0x3172a0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x317278u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_317278;
        }
    }
    ctx->pc = 0x3172A4u;
label_3172a4:
    // 0x3172a4: 0xc0c79ba  jal         func_31E6E8
    ctx->pc = 0x3172A4u;
    SET_GPR_U32(ctx, 31, 0x3172ACu);
    ctx->pc = 0x3172A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3172A4u;
    // 0x3172a8: 0x92240000  lbu         $a0, 0x0($s1) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E6E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x31E6E8u, 0x3172A4u, 0x3172ACu)) {
        return;
    }
    ctx->pc = 0x3172ACu;
label_3172ac:
    // 0x3172ac: 0x92440000  lbu         $a0, 0x0($s2)
    ctx->pc = 0x3172acu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3172b0: 0xc0c79ba  jal         func_31E6E8
    ctx->pc = 0x3172B0u;
    SET_GPR_U32(ctx, 31, 0x3172B8u);
    ctx->pc = 0x3172B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3172B0u;
    // 0x3172b4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E6E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x31E6E8u, 0x3172B0u, 0x3172B8u)) {
        return;
    }
    ctx->pc = 0x3172B8u;
label_3172b8:
    // 0x3172b8: 0x2021023  subu        $v0, $s0, $v0
    ctx->pc = 0x3172b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x3172bc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3172bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3172c0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3172c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3172c4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x3172c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3172c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3172c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3172cc: 0x3e00008  jr          $ra
    ctx->pc = 0x3172CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3172D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3172CCu;
        // 0x3172d0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3172CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3172D4u;
    // 0x3172d4: 0x0  nop
    ctx->pc = 0x3172d4u;
    // NOP
    ctx->pc = 0x3172d8u;
}
