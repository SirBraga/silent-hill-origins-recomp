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

// Function: sub_00257550
// Address: 0x257550 - 0x2575c8
void sub_00257550_0x257550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00257550_0x257550");
#endif

    switch (ctx->pc) {
        case 0x25759cu: goto label_25759c;
        case 0x2575a4u: goto label_2575a4;
        case 0x2575acu: goto label_2575ac;
        default: break;
    }

    ctx->pc = 0x257550u;

    // 0x257550: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x257550u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x257554: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x257554u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x257558: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x257558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x25755c: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x25755cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x257560: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x257560u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x257564: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x257564u;
    {
        const bool branch_taken_0x257564 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x257568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257564u;
        // 0x257568: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257564) {
            ctx->pc = 0x25758Cu;
            goto label_25758c;
        }
    }
    ctx->pc = 0x25756Cu;
    // 0x25756c: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x25756cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x257570: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x257570u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x257574: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x257574u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x257578: 0x0  nop
    ctx->pc = 0x257578u;
    // NOP
    // 0x25757c: 0x460c0034  c.lt.s      $f0, $f12
    ctx->pc = 0x25757cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x257580: 0x0  nop
    ctx->pc = 0x257580u;
    // NOP
    // 0x257584: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x257584u;
    {
        const bool branch_taken_0x257584 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x257584) {
            ctx->pc = 0x257594u;
            goto label_257594;
        }
    }
    ctx->pc = 0x25758Cu;
label_25758c:
    // 0x25758c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x25758Cu;
    {
        const bool branch_taken_0x25758c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x257590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25758Cu;
        // 0x257590: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25758c) {
            ctx->pc = 0x2575B8u;
            goto label_2575b8;
        }
    }
    ctx->pc = 0x257594u;
label_257594:
    // 0x257594: 0xc07e054  jal         func_1F8150
    ctx->pc = 0x257594u;
    SET_GPR_U32(ctx, 31, 0x25759Cu);
    ctx->pc = 0x1F8150u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F8150u, 0x257594u, 0x25759Cu)) {
        return;
    }
    ctx->pc = 0x25759Cu;
label_25759c:
    // 0x25759c: 0xc09af88  jal         func_26BE20
    ctx->pc = 0x25759Cu;
    SET_GPR_U32(ctx, 31, 0x2575A4u);
    ctx->pc = 0x2575A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25759Cu;
    // 0x2575a0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26BE20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26BE20u, 0x25759Cu, 0x2575A4u)) {
        return;
    }
    ctx->pc = 0x2575A4u;
label_2575a4:
    // 0x2575a4: 0xc07df98  jal         func_1F7E60
    ctx->pc = 0x2575A4u;
    SET_GPR_U32(ctx, 31, 0x2575ACu);
    ctx->pc = 0x2575A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2575A4u;
    // 0x2575a8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7E60u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7E60u, 0x2575A4u, 0x2575ACu)) {
        return;
    }
    ctx->pc = 0x2575ACu;
label_2575ac:
    // 0x2575ac: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2575acu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2575b0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2575b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2575b4: 0xe6000028  swc1        $f0, 0x28($s0)
    ctx->pc = 0x2575b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
label_2575b8:
    // 0x2575b8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2575b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2575bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2575bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2575c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2575C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2575C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2575C0u;
        // 0x2575c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2575C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2575C8u;
}
