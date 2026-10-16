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

// Function: sub_00137318
// Address: 0x137318 - 0x1373a0
void sub_00137318_0x137318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00137318_0x137318");
#endif

    switch (ctx->pc) {
        case 0x137350u: goto label_137350;
        case 0x137370u: goto label_137370;
        case 0x137388u: goto label_137388;
        default: break;
    }

    ctx->pc = 0x137318u;

    // 0x137318: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x137318u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x13731c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x13731cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x137320: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x137320u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x137324: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x137324u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137328: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x137328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13732c: 0x26110320  addiu       $s1, $s0, 0x320
    ctx->pc = 0x13732cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 800));
    // 0x137330: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x137330u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x137334: 0x8e22083c  lw          $v0, 0x83C($s1)
    ctx->pc = 0x137334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2108)));
    // 0x137338: 0x214c3  sra         $v0, $v0, 19
    ctx->pc = 0x137338u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 19));
    // 0x13733c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x13733cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x137340: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x137340u;
    {
        const bool branch_taken_0x137340 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x137340) {
            ctx->pc = 0x137344u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x137340u;
            // 0x137344: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13738Cu;
            goto label_13738c;
        }
    }
    ctx->pc = 0x137348u;
    // 0x137348: 0xc04094c  jal         func_102530
    ctx->pc = 0x137348u;
    SET_GPR_U32(ctx, 31, 0x137350u);
    ctx->pc = 0x102530u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x102530u, 0x137348u, 0x137350u)) {
        return;
    }
    ctx->pc = 0x137350u;
label_137350:
    // 0x137350: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x137350u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x137354: 0xc6001a74  lwc1        $f0, 0x1A74($s0)
    ctx->pc = 0x137354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 6772)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x137358: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x137358u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13735c: 0x0  nop
    ctx->pc = 0x13735cu;
    // NOP
    // 0x137360: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x137360u;
    {
        const bool branch_taken_0x137360 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x137360) {
            ctx->pc = 0x137364u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x137360u;
            // 0x137364: 0xe6141a74  swc1        $f20, 0x1A74($s0) (Delay Slot)
            { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 6772), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x137374u;
            goto label_137374;
        }
    }
    ctx->pc = 0x137368u;
    // 0x137368: 0xc0680d0  jal         func_1A0340
    ctx->pc = 0x137368u;
    SET_GPR_U32(ctx, 31, 0x137370u);
    ctx->pc = 0x13736Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137368u;
    // 0x13736c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0340u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A0340u, 0x137368u, 0x137370u)) {
        return;
    }
    ctx->pc = 0x137370u;
label_137370:
    // 0x137370: 0xe6141a74  swc1        $f20, 0x1A74($s0)
    ctx->pc = 0x137370u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 6772), bits); }
label_137374:
    // 0x137374: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x137374u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137378: 0x8e051a70  lw          $a1, 0x1A70($s0)
    ctx->pc = 0x137378u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6768)));
    // 0x13737c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x13737cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x137380: 0xc0680da  jal         func_1A0368
    ctx->pc = 0x137380u;
    SET_GPR_U32(ctx, 31, 0x137388u);
    ctx->pc = 0x137384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137380u;
    // 0x137384: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0368u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A0368u, 0x137380u, 0x137388u)) {
        return;
    }
    ctx->pc = 0x137388u;
label_137388:
    // 0x137388: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x137388u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_13738c:
    // 0x13738c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13738cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x137390: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x137390u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x137394: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x137394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x137398: 0x3e00008  jr          $ra
    ctx->pc = 0x137398u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13739Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137398u;
        // 0x13739c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x137398u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1373A0u;
}
