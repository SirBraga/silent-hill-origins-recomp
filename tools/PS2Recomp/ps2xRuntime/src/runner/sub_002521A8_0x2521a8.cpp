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

// Function: sub_002521A8
// Address: 0x2521a8 - 0x252300
void sub_002521A8_0x2521a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002521A8_0x2521a8");
#endif

    ctx->pc = 0x2521a8u;

    // 0x2521a8: 0xc4a30014  lwc1        $f3, 0x14($a1)
    ctx->pc = 0x2521a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2521ac: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x2521acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2521b0: 0xc4c5000c  lwc1        $f5, 0xC($a2)
    ctx->pc = 0x2521b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2521b4: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x2521b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2521b8: 0xc4a4000c  lwc1        $f4, 0xC($a1)
    ctx->pc = 0x2521b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2521bc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2521bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2521c0: 0xc4a20010  lwc1        $f2, 0x10($a1)
    ctx->pc = 0x2521c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2521c4: 0x46052102  mul.s       $f4, $f4, $f5
    ctx->pc = 0x2521c4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
    // 0x2521c8: 0xc4c10010  lwc1        $f1, 0x10($a2)
    ctx->pc = 0x2521c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2521cc: 0xc4c50014  lwc1        $f5, 0x14($a2)
    ctx->pc = 0x2521ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2521d0: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x2521d0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x2521d4: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x2521d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x2521d8: 0x460518c2  mul.s       $f3, $f3, $f5
    ctx->pc = 0x2521d8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
    // 0x2521dc: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2521dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2521e0: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x2521e0u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x2521e4: 0xe4830014  swc1        $f3, 0x14($a0)
    ctx->pc = 0x2521e4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x2521e8: 0xc4a5000c  lwc1        $f5, 0xC($a1)
    ctx->pc = 0x2521e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2521ec: 0xc4c20010  lwc1        $f2, 0x10($a2)
    ctx->pc = 0x2521ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2521f0: 0xc4c1000c  lwc1        $f1, 0xC($a2)
    ctx->pc = 0x2521f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2521f4: 0xc4a00010  lwc1        $f0, 0x10($a1)
    ctx->pc = 0x2521f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2521f8: 0x46022942  mul.s       $f5, $f5, $f2
    ctx->pc = 0x2521f8u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x2521fc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2521fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x252200: 0x46002941  sub.s       $f5, $f5, $f0
    ctx->pc = 0x252200u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
    // 0x252204: 0xe4850008  swc1        $f5, 0x8($a0)
    ctx->pc = 0x252204u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x252208: 0xc4c20008  lwc1        $f2, 0x8($a2)
    ctx->pc = 0x252208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x25220c: 0xc4c10010  lwc1        $f1, 0x10($a2)
    ctx->pc = 0x25220cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x252210: 0xc4a40010  lwc1        $f4, 0x10($a1)
    ctx->pc = 0x252210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x252214: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x252214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252218: 0x46022102  mul.s       $f4, $f4, $f2
    ctx->pc = 0x252218u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x25221c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x25221cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x252220: 0x46002101  sub.s       $f4, $f4, $f0
    ctx->pc = 0x252220u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x252224: 0xe484000c  swc1        $f4, 0xC($a0)
    ctx->pc = 0x252224u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x252228: 0xc4a30008  lwc1        $f3, 0x8($a1)
    ctx->pc = 0x252228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x25222c: 0xc4c2000c  lwc1        $f2, 0xC($a2)
    ctx->pc = 0x25222cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x252230: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x252230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252234: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x252234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x252238: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x252238u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x25223c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x25223cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x252240: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x252240u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x252244: 0xe4830010  swc1        $f3, 0x10($a0)
    ctx->pc = 0x252244u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x252248: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x252248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25224c: 0xc4a00014  lwc1        $f0, 0x14($a1)
    ctx->pc = 0x25224cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252250: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x252250u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x252254: 0x46012940  add.s       $f5, $f5, $f1
    ctx->pc = 0x252254u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[1]);
    // 0x252258: 0xe4850008  swc1        $f5, 0x8($a0)
    ctx->pc = 0x252258u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x25225c: 0xc4a00014  lwc1        $f0, 0x14($a1)
    ctx->pc = 0x25225cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252260: 0xc4c1000c  lwc1        $f1, 0xC($a2)
    ctx->pc = 0x252260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x252264: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x252264u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x252268: 0x46012100  add.s       $f4, $f4, $f1
    ctx->pc = 0x252268u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
    // 0x25226c: 0xe484000c  swc1        $f4, 0xC($a0)
    ctx->pc = 0x25226cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x252270: 0xc4c10010  lwc1        $f1, 0x10($a2)
    ctx->pc = 0x252270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x252274: 0xc4a00014  lwc1        $f0, 0x14($a1)
    ctx->pc = 0x252274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252278: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x252278u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x25227c: 0x460118c0  add.s       $f3, $f3, $f1
    ctx->pc = 0x25227cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x252280: 0xe4830010  swc1        $f3, 0x10($a0)
    ctx->pc = 0x252280u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x252284: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x252284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x252288: 0xc4c00014  lwc1        $f0, 0x14($a2)
    ctx->pc = 0x252288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25228c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x25228cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x252290: 0x46012940  add.s       $f5, $f5, $f1
    ctx->pc = 0x252290u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[1]);
    // 0x252294: 0xe4850008  swc1        $f5, 0x8($a0)
    ctx->pc = 0x252294u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x252298: 0xc4c00014  lwc1        $f0, 0x14($a2)
    ctx->pc = 0x252298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25229c: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x25229cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2522a0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2522a0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2522a4: 0x46012100  add.s       $f4, $f4, $f1
    ctx->pc = 0x2522a4u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
    // 0x2522a8: 0xe484000c  swc1        $f4, 0xC($a0)
    ctx->pc = 0x2522a8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x2522ac: 0xc4a10010  lwc1        $f1, 0x10($a1)
    ctx->pc = 0x2522acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2522b0: 0xc4c00014  lwc1        $f0, 0x14($a2)
    ctx->pc = 0x2522b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2522b4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2522b4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2522b8: 0x460118c0  add.s       $f3, $f3, $f1
    ctx->pc = 0x2522b8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x2522bc: 0xe4830010  swc1        $f3, 0x10($a0)
    ctx->pc = 0x2522bcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x2522c0: 0xc4a00018  lwc1        $f0, 0x18($a1)
    ctx->pc = 0x2522c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2522c4: 0xc4c10018  lwc1        $f1, 0x18($a2)
    ctx->pc = 0x2522c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2522c8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2522c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2522cc: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x2522ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x2522d0: 0xc4c0001c  lwc1        $f0, 0x1C($a2)
    ctx->pc = 0x2522d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2522d4: 0xc4a1001c  lwc1        $f1, 0x1C($a1)
    ctx->pc = 0x2522d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2522d8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2522d8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2522dc: 0xe481001c  swc1        $f1, 0x1C($a0)
    ctx->pc = 0x2522dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
    // 0x2522e0: 0xc4a00020  lwc1        $f0, 0x20($a1)
    ctx->pc = 0x2522e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2522e4: 0xc4c10020  lwc1        $f1, 0x20($a2)
    ctx->pc = 0x2522e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2522e8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2522e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2522ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2522ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2522F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2522ECu;
        // 0x2522f0: 0xe4800020  swc1        $f0, 0x20($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2522ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2522F4u;
    // 0x2522f4: 0x0  nop
    ctx->pc = 0x2522f4u;
    // NOP
    // 0x2522f8: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2522f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2522fc: 0x0  nop
    ctx->pc = 0x2522fcu;
    // NOP
    ctx->pc = 0x252300u;
}
