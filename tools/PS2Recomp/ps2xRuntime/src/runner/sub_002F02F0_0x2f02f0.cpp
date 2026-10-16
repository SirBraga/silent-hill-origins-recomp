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

// Function: sub_002F02F0
// Address: 0x2f02f0 - 0x2f0560
void sub_002F02F0_0x2f02f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F02F0_0x2f02f0");
#endif

    switch (ctx->pc) {
        case 0x2f034cu: goto label_2f034c;
        case 0x2f0358u: goto label_2f0358;
        case 0x2f03f8u: goto label_2f03f8;
        case 0x2f04b0u: goto label_2f04b0;
        default: break;
    }

    ctx->pc = 0x2f02f0u;

    // 0x2f02f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2f02f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2f02f4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2f02f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f02f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2f02f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2f02fc: 0x24a30008  addiu       $v1, $a1, 0x8
    ctx->pc = 0x2f02fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x2f0300: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x2f0300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f0304: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2f0304u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2f0308: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x2f0308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f030c: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x2f030cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x2f0310: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2f0310u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2f0314: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2f0314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f0318: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x2f0318u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x2f031c: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x2f031cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f0320: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x2f0320u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    // 0x2f0324: 0xe4410014  swc1        $f1, 0x14($v0)
    ctx->pc = 0x2f0324u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x2f0328: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x2f0328u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
    // 0x2f032c: 0xac400024  sw          $zero, 0x24($v0)
    ctx->pc = 0x2f032cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
    // 0x2f0330: 0xac400028  sw          $zero, 0x28($v0)
    ctx->pc = 0x2f0330u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
    // 0x2f0334: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x2f0334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f0338: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x2f0338u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x2f033c: 0xc4610014  lwc1        $f1, 0x14($v1)
    ctx->pc = 0x2f033cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f0340: 0xac400038  sw          $zero, 0x38($v0)
    ctx->pc = 0x2f0340u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 0));
    // 0x2f0344: 0xc092d94  jal         func_24B650
    ctx->pc = 0x2F0344u;
    SET_GPR_U32(ctx, 31, 0x2F034Cu);
    ctx->pc = 0x2F0348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0344u;
    // 0x2f0348: 0xe4410034  swc1        $f1, 0x34($v0) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B650u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24B650u, 0x2F0344u, 0x2F034Cu)) {
        return;
    }
    ctx->pc = 0x2F034Cu;
label_2f034c:
    // 0x2f034c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2f034cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f0350: 0x3e00008  jr          $ra
    ctx->pc = 0x2F0350u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F0354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0350u;
        // 0x2f0354: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F0350u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F0358u;
label_2f0358:
    // 0x2f0358: 0x24870008  addiu       $a3, $a0, 0x8
    ctx->pc = 0x2f0358u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x2f035c: 0x24a20008  addiu       $v0, $a1, 0x8
    ctx->pc = 0x2f035cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x2f0360: 0x24c30008  addiu       $v1, $a2, 0x8
    ctx->pc = 0x2f0360u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x2f0364: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x2f0364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f0368: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x2f0368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f036c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2f036cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2f0370: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x2f0370u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x2f0374: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2f0374u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2f0378: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x2f0378u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x2f037c: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x2f037cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2f0380: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x2f0380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f0384: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x2f0384u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x2f0388: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x2f0388u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x2f038c: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x2f038cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2f0390: 0xe4e20004  swc1        $f2, 0x4($a3)
    ctx->pc = 0x2f0390u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
    // 0x2f0394: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x2f0394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f0398: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2f0398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f039c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2f039cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2f03a0: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x2f03a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x2f03a4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2f03a4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2f03a8: 0xe4e10008  swc1        $f1, 0x8($a3)
    ctx->pc = 0x2f03a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
    // 0x2f03ac: 0xc442000c  lwc1        $f2, 0xC($v0)
    ctx->pc = 0x2f03acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2f03b0: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x2f03b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f03b4: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x2f03b4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x2f03b8: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x2f03b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x2f03bc: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x2f03bcu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2f03c0: 0xe4e2000c  swc1        $f2, 0xC($a3)
    ctx->pc = 0x2f03c0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
    // 0x2f03c4: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x2f03c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f03c8: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x2f03c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f03cc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2f03ccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2f03d0: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x2f03d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x2f03d4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2f03d4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2f03d8: 0xe4e10010  swc1        $f1, 0x10($a3)
    ctx->pc = 0x2f03d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 16), bits); }
    // 0x2f03dc: 0xc4420014  lwc1        $f2, 0x14($v0)
    ctx->pc = 0x2f03dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2f03e0: 0xc4600014  lwc1        $f0, 0x14($v1)
    ctx->pc = 0x2f03e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f03e4: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x2f03e4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x2f03e8: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x2f03e8u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x2f03ec: 0x460c1080  add.s       $f2, $f2, $f12
    ctx->pc = 0x2f03ecu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[12]);
    // 0x2f03f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2F03F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F03F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F03F0u;
        // 0x2f03f4: 0xe4e20014  swc1        $f2, 0x14($a3) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 20), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F03F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F03F8u;
label_2f03f8:
    // 0x2f03f8: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x2f03f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f03fc: 0x24870008  addiu       $a3, $a0, 0x8
    ctx->pc = 0x2f03fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x2f0400: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x2f0400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f0404: 0x24a30008  addiu       $v1, $a1, 0x8
    ctx->pc = 0x2f0404u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x2f0408: 0x46006301  sub.s       $f12, $f12, $f0
    ctx->pc = 0x2f0408u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x2f040c: 0x24c20008  addiu       $v0, $a2, 0x8
    ctx->pc = 0x2f040cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x2f0410: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2f0410u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2f0414: 0x46016303  div.s       $f12, $f12, $f1
    ctx->pc = 0x2f0414u;
    ctx->f[12] = FPU_DIV_S(ctx, ctx->f[12], ctx->f[1]);
    // 0x2f0418: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x2f0418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f041c: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x2f041cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f0420: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2f0420u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2f0424: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x2f0424u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x2f0428: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2f0428u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2f042c: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x2f042cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x2f0430: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x2f0430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2f0434: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2f0434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f0438: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x2f0438u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x2f043c: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x2f043cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x2f0440: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x2f0440u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2f0444: 0xe4e20004  swc1        $f2, 0x4($a3)
    ctx->pc = 0x2f0444u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
    // 0x2f0448: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x2f0448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f044c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2f044cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f0450: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2f0450u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2f0454: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x2f0454u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x2f0458: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2f0458u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2f045c: 0xe4e10008  swc1        $f1, 0x8($a3)
    ctx->pc = 0x2f045cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
    // 0x2f0460: 0xc462000c  lwc1        $f2, 0xC($v1)
    ctx->pc = 0x2f0460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2f0464: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x2f0464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f0468: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x2f0468u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x2f046c: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x2f046cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x2f0470: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x2f0470u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2f0474: 0xe4e2000c  swc1        $f2, 0xC($a3)
    ctx->pc = 0x2f0474u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
    // 0x2f0478: 0xc4610010  lwc1        $f1, 0x10($v1)
    ctx->pc = 0x2f0478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f047c: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x2f047cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f0480: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2f0480u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2f0484: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x2f0484u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x2f0488: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2f0488u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2f048c: 0xe4e10010  swc1        $f1, 0x10($a3)
    ctx->pc = 0x2f048cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 16), bits); }
    // 0x2f0490: 0xc4620014  lwc1        $f2, 0x14($v1)
    ctx->pc = 0x2f0490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2f0494: 0xc4400014  lwc1        $f0, 0x14($v0)
    ctx->pc = 0x2f0494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f0498: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x2f0498u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x2f049c: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x2f049cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x2f04a0: 0x460c1080  add.s       $f2, $f2, $f12
    ctx->pc = 0x2f04a0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[12]);
    // 0x2f04a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2F04A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F04A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F04A4u;
        // 0x2f04a8: 0xe4e20014  swc1        $f2, 0x14($a3) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 20), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F04A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F04ACu;
    // 0x2f04ac: 0x0  nop
    ctx->pc = 0x2f04acu;
    // NOP
label_2f04b0:
    // 0x2f04b0: 0x24870008  addiu       $a3, $a0, 0x8
    ctx->pc = 0x2f04b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x2f04b4: 0x24a20008  addiu       $v0, $a1, 0x8
    ctx->pc = 0x2f04b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x2f04b8: 0x24c30008  addiu       $v1, $a2, 0x8
    ctx->pc = 0x2f04b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x2f04bc: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x2f04bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f04c0: 0xc4c30008  lwc1        $f3, 0x8($a2)
    ctx->pc = 0x2f04c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2f04c4: 0xc4620008  lwc1        $f2, 0x8($v1)
    ctx->pc = 0x2f04c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2f04c8: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2f04c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f04cc: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x2f04ccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x2f04d0: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2f04d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2f04d4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2f04d4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2f04d8: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x2f04d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x2f04dc: 0xc4630004  lwc1        $f3, 0x4($v1)
    ctx->pc = 0x2f04dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2f04e0: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x2f04e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f04e4: 0xc4a20008  lwc1        $f2, 0x8($a1)
    ctx->pc = 0x2f04e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2f04e8: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2f04e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f04ec: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x2f04ecu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x2f04f0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2f04f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2f04f4: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x2f04f4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2f04f8: 0xe4e20004  swc1        $f2, 0x4($a3)
    ctx->pc = 0x2f04f8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
    // 0x2f04fc: 0xc4c30008  lwc1        $f3, 0x8($a2)
    ctx->pc = 0x2f04fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2f0500: 0xc4620008  lwc1        $f2, 0x8($v1)
    ctx->pc = 0x2f0500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2f0504: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2f0504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f0508: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x2f0508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f050c: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2f050cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2f0510: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2f0510u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2f0514: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2f0514u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2f0518: 0xe4e00008  swc1        $f0, 0x8($a3)
    ctx->pc = 0x2f0518u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
    // 0x2f051c: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x2f051cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f0520: 0xc4630004  lwc1        $f3, 0x4($v1)
    ctx->pc = 0x2f0520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2f0524: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x2f0524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f0528: 0xc462000c  lwc1        $f2, 0xC($v1)
    ctx->pc = 0x2f0528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2f052c: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x2f052cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x2f0530: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2f0530u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2f0534: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2f0534u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2f0538: 0xe4e1000c  swc1        $f1, 0xC($a3)
    ctx->pc = 0x2f0538u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
    // 0x2f053c: 0xc4610010  lwc1        $f1, 0x10($v1)
    ctx->pc = 0x2f053cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f0540: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x2f0540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f0544: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2f0544u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2f0548: 0xe4e00010  swc1        $f0, 0x10($a3)
    ctx->pc = 0x2f0548u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 16), bits); }
    // 0x2f054c: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x2f054cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f0550: 0xc4600014  lwc1        $f0, 0x14($v1)
    ctx->pc = 0x2f0550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f0554: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2f0554u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2f0558: 0x3e00008  jr          $ra
    ctx->pc = 0x2F0558u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F055Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0558u;
        // 0x2f055c: 0xe4e10014  swc1        $f1, 0x14($a3) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 20), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F0558u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F0560u;
}
