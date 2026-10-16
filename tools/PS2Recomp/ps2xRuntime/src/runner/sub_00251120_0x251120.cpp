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

// Function: sub_00251120
// Address: 0x251120 - 0x251230
void sub_00251120_0x251120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00251120_0x251120");
#endif

    ctx->pc = 0x251120u;

    // 0x251120: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x251120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x251124: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x251124u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x251128: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x251128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x25112c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x25112cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x251130: 0x44815800  mtc1        $at, $f11
    ctx->pc = 0x251130u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[11], &bits, sizeof(bits)); }
    // 0x251134: 0xc4a3000c  lwc1        $f3, 0xC($a1)
    ctx->pc = 0x251134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x251138: 0x460109c2  mul.s       $f7, $f1, $f1
    ctx->pc = 0x251138u;
    ctx->f[7] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x25113c: 0xc4a00010  lwc1        $f0, 0x10($a1)
    ctx->pc = 0x25113cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x251140: 0xc4a40014  lwc1        $f4, 0x14($a1)
    ctx->pc = 0x251140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x251144: 0x46031882  mul.s       $f2, $f3, $f3
    ctx->pc = 0x251144u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x251148: 0x46000202  mul.s       $f8, $f0, $f0
    ctx->pc = 0x251148u;
    ctx->f[8] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x25114c: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x25114cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x251150: 0xac800030  sw          $zero, 0x30($a0)
    ctx->pc = 0x251150u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 0));
    // 0x251154: 0x46002302  mul.s       $f12, $f4, $f0
    ctx->pc = 0x251154u;
    ctx->f[12] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x251158: 0xac800034  sw          $zero, 0x34($a0)
    ctx->pc = 0x251158u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
    // 0x25115c: 0x46001942  mul.s       $f5, $f3, $f0
    ctx->pc = 0x25115cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x251160: 0xac800038  sw          $zero, 0x38($a0)
    ctx->pc = 0x251160u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 0));
    // 0x251164: 0x46012282  mul.s       $f10, $f4, $f1
    ctx->pc = 0x251164u;
    ctx->f[10] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x251168: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x251168u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x25116c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x25116cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x251170: 0x46023980  add.s       $f6, $f7, $f2
    ctx->pc = 0x251170u;
    ctx->f[6] = FPU_ADD_S(ctx->f[7], ctx->f[2]);
    // 0x251174: 0xe7a70000  swc1        $f7, 0x0($sp)
    ctx->pc = 0x251174u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x251178: 0x46032102  mul.s       $f4, $f4, $f3
    ctx->pc = 0x251178u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x25117c: 0xe7a80008  swc1        $f8, 0x8($sp)
    ctx->pc = 0x25117cu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x251180: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x251180u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x251184: 0xe7a50010  swc1        $f5, 0x10($sp)
    ctx->pc = 0x251184u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x251188: 0x46081080  add.s       $f2, $f2, $f8
    ctx->pc = 0x251188u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[8]);
    // 0x25118c: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x25118cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x251190: 0x460839c0  add.s       $f7, $f7, $f8
    ctx->pc = 0x251190u;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[8]);
    // 0x251194: 0xe7aa0020  swc1        $f10, 0x20($sp)
    ctx->pc = 0x251194u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x251198: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x251198u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x25119c: 0x46040240  add.s       $f9, $f0, $f4
    ctx->pc = 0x25119cu;
    ctx->f[9] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x2511a0: 0x460c08c1  sub.s       $f3, $f1, $f12
    ctx->pc = 0x2511a0u;
    ctx->f[3] = FPU_SUB_S(ctx->f[1], ctx->f[12]);
    // 0x2511a4: 0xe7a40024  swc1        $f4, 0x24($sp)
    ctx->pc = 0x2511a4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2511a8: 0x460a2a01  sub.s       $f8, $f5, $f10
    ctx->pc = 0x2511a8u;
    ctx->f[8] = FPU_SUB_S(ctx->f[5], ctx->f[10]);
    // 0x2511ac: 0xe7ac0028  swc1        $f12, 0x28($sp)
    ctx->pc = 0x2511acu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2511b0: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x2511b0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
    // 0x2511b4: 0x46063180  add.s       $f6, $f6, $f6
    ctx->pc = 0x2511b4u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[6]);
    // 0x2511b8: 0x460739c0  add.s       $f7, $f7, $f7
    ctx->pc = 0x2511b8u;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[7]);
    // 0x2511bc: 0x460c0840  add.s       $f1, $f1, $f12
    ctx->pc = 0x2511bcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[12]);
    // 0x2511c0: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x2511c0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x2511c4: 0x460a2940  add.s       $f5, $f5, $f10
    ctx->pc = 0x2511c4u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[10]);
    // 0x2511c8: 0x46065981  sub.s       $f6, $f11, $f6
    ctx->pc = 0x2511c8u;
    ctx->f[6] = FPU_SUB_S(ctx->f[11], ctx->f[6]);
    // 0x2511cc: 0x46025881  sub.s       $f2, $f11, $f2
    ctx->pc = 0x2511ccu;
    ctx->f[2] = FPU_SUB_S(ctx->f[11], ctx->f[2]);
    // 0x2511d0: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2511d0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x2511d4: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2511d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x2511d8: 0xe4860028  swc1        $f6, 0x28($a0)
    ctx->pc = 0x2511d8u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
    // 0x2511dc: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x2511dcu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
    // 0x2511e0: 0xe4820000  swc1        $f2, 0x0($a0)
    ctx->pc = 0x2511e0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x2511e4: 0x46075ac1  sub.s       $f11, $f11, $f7
    ctx->pc = 0x2511e4u;
    ctx->f[11] = FPU_SUB_S(ctx->f[11], ctx->f[7]);
    // 0x2511e8: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x2511e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x2511ec: 0x46052940  add.s       $f5, $f5, $f5
    ctx->pc = 0x2511ecu;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[5]);
    // 0x2511f0: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x2511f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x2511f4: 0x46094a40  add.s       $f9, $f9, $f9
    ctx->pc = 0x2511f4u;
    ctx->f[9] = FPU_ADD_S(ctx->f[9], ctx->f[9]);
    // 0x2511f8: 0xe4830010  swc1        $f3, 0x10($a0)
    ctx->pc = 0x2511f8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x2511fc: 0x46084200  add.s       $f8, $f8, $f8
    ctx->pc = 0x2511fcu;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[8]);
    // 0x251200: 0xe48b0014  swc1        $f11, 0x14($a0)
    ctx->pc = 0x251200u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x251204: 0xe4850018  swc1        $f5, 0x18($a0)
    ctx->pc = 0x251204u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x251208: 0xe4890020  swc1        $f9, 0x20($a0)
    ctx->pc = 0x251208u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x25120c: 0xe4880024  swc1        $f8, 0x24($a0)
    ctx->pc = 0x25120cu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
    // 0x251210: 0xc4a00018  lwc1        $f0, 0x18($a1)
    ctx->pc = 0x251210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x251214: 0xe4800030  swc1        $f0, 0x30($a0)
    ctx->pc = 0x251214u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
    // 0x251218: 0xc4a1001c  lwc1        $f1, 0x1C($a1)
    ctx->pc = 0x251218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25121c: 0xe4810034  swc1        $f1, 0x34($a0)
    ctx->pc = 0x25121cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 52), bits); }
    // 0x251220: 0xc4a00020  lwc1        $f0, 0x20($a1)
    ctx->pc = 0x251220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x251224: 0xe4800038  swc1        $f0, 0x38($a0)
    ctx->pc = 0x251224u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 56), bits); }
    // 0x251228: 0x3e00008  jr          $ra
    ctx->pc = 0x251228u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25122Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251228u;
        // 0x25122c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x251228u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x251230u;
}
