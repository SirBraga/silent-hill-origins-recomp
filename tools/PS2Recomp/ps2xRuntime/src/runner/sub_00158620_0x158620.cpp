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

// Function: sub_00158620
// Address: 0x158620 - 0x158698
void sub_00158620_0x158620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00158620_0x158620");
#endif

    switch (ctx->pc) {
        case 0x158650u: goto label_158650;
        case 0x158660u: goto label_158660;
        case 0x158674u: goto label_158674;
        case 0x158688u: goto label_158688;
        default: break;
    }

    ctx->pc = 0x158620u;

    // 0x158620: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x158620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x158624: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x158624u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x158628: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x158628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x15862c: 0x14a20016  bne         $a1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x15862Cu;
    {
        const bool branch_taken_0x15862c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x158630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15862Cu;
        // 0x158630: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15862c) {
            ctx->pc = 0x158688u;
            goto label_158688;
        }
    }
    ctx->pc = 0x158634u;
    // 0x158634: 0x50800011  beql        $a0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x158634u;
    {
        const bool branch_taken_0x158634 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x158634) {
            ctx->pc = 0x158638u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x158634u;
            // 0x158638: 0x3c04006c  lui         $a0, 0x6C (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15867Cu;
            goto label_15867c;
        }
    }
    ctx->pc = 0x15863Cu;
    // 0x15863c: 0x3c013f49  lui         $at, 0x3F49
    ctx->pc = 0x15863cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16201 << 16));
    // 0x158640: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x158640u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x158644: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x158644u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x158648: 0xc09b1a0  jal         func_26C680
    ctx->pc = 0x158648u;
    SET_GPR_U32(ctx, 31, 0x158650u);
    ctx->pc = 0x15864Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158648u;
    // 0x15864c: 0x3c10006c  lui         $s0, 0x6C (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)108 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C680u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26C680u, 0x158648u, 0x158650u)) {
        return;
    }
    ctx->pc = 0x158650u;
label_158650:
    // 0x158650: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x158650u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x158654: 0xe600f078  swc1        $f0, -0xF88($s0)
    ctx->pc = 0x158654u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4294963320), bits); }
    // 0x158658: 0xc07f26a  jal         func_1FC9A8
    ctx->pc = 0x158658u;
    SET_GPR_U32(ctx, 31, 0x158660u);
    ctx->pc = 0x15865Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158658u;
    // 0x15865c: 0x24842c50  addiu       $a0, $a0, 0x2C50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11344));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC9A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC9A8u, 0x158658u, 0x158660u)) {
        return;
    }
    ctx->pc = 0x158660u;
label_158660:
    // 0x158660: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x158660u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x158664: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x158664u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x158668: 0xac62f07c  sw          $v0, -0xF84($v1)
    ctx->pc = 0x158668u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6BF07Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BF07Cu, _value); } while (0);
    // 0x15866c: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x15866Cu;
    SET_GPR_U32(ctx, 31, 0x158674u);
    ctx->pc = 0x158670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15866Cu;
    // 0x158670: 0x2484f080  addiu       $a0, $a0, -0xF80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963328));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x15866Cu, 0x158674u)) {
        return;
    }
    ctx->pc = 0x158674u;
label_158674:
    // 0x158674: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x158674u;
    {
        const bool branch_taken_0x158674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x158678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158674u;
        // 0x158678: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158674) {
            ctx->pc = 0x15868Cu;
            goto label_15868c;
        }
    }
    ctx->pc = 0x15867Cu;
label_15867c:
    // 0x15867c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x15867cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x158680: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x158680u;
    SET_GPR_U32(ctx, 31, 0x158688u);
    ctx->pc = 0x158684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158680u;
    // 0x158684: 0x2484f080  addiu       $a0, $a0, -0xF80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963328));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x158680u, 0x158688u)) {
        return;
    }
    ctx->pc = 0x158688u;
label_158688:
    // 0x158688: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x158688u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_15868c:
    // 0x15868c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15868cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x158690: 0x3e00008  jr          $ra
    ctx->pc = 0x158690u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x158694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158690u;
        // 0x158694: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x158690u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x158698u;
}
