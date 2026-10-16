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

// Function: sub_0024A5D8
// Address: 0x24a5d8 - 0x24a850
void sub_0024A5D8_0x24a5d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024A5D8_0x24a5d8");
#endif

    switch (ctx->pc) {
        case 0x24a5f0u: goto label_24a5f0;
        default: break;
    }

    ctx->pc = 0x24a5d8u;

    // 0x24a5d8: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x24a5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x24a5dc: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x24a5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x24a5e0: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x24a5e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x24a5e4: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x24a5e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x24a5e8: 0x3e00008  jr          $ra
    ctx->pc = 0x24A5E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24A5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A5E8u;
        // 0x24a5ec: 0xa21021  addu        $v0, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24A5E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24A5F0u;
label_24a5f0:
    // 0x24a5f0: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x24a5f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24a5f4: 0xc4c40010  lwc1        $f4, 0x10($a2)
    ctx->pc = 0x24a5f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x24a5f8: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x24a5f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24a5fc: 0xc4a30004  lwc1        $f3, 0x4($a1)
    ctx->pc = 0x24a5fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24a600: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x24a600u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x24a604: 0xc4a20008  lwc1        $f2, 0x8($a1)
    ctx->pc = 0x24a604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24a608: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x24a608u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x24a60c: 0xc4c00020  lwc1        $f0, 0x20($a2)
    ctx->pc = 0x24a60cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24a610: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x24a610u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x24a614: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x24a614u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x24a618: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x24a618u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x24a61c: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x24a61cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x24a620: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x24a620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24a624: 0xc4c40014  lwc1        $f4, 0x14($a2)
    ctx->pc = 0x24a624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x24a628: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x24a628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24a62c: 0xc4a30004  lwc1        $f3, 0x4($a1)
    ctx->pc = 0x24a62cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24a630: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x24a630u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x24a634: 0xc4a20008  lwc1        $f2, 0x8($a1)
    ctx->pc = 0x24a634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24a638: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x24a638u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x24a63c: 0xc4c10024  lwc1        $f1, 0x24($a2)
    ctx->pc = 0x24a63cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24a640: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x24a640u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x24a644: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x24a644u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x24a648: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x24a648u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x24a64c: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x24a64cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x24a650: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x24a650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24a654: 0xc4c40018  lwc1        $f4, 0x18($a2)
    ctx->pc = 0x24a654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x24a658: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x24a658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24a65c: 0xc4a30004  lwc1        $f3, 0x4($a1)
    ctx->pc = 0x24a65cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24a660: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x24a660u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x24a664: 0xc4a20008  lwc1        $f2, 0x8($a1)
    ctx->pc = 0x24a664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24a668: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x24a668u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x24a66c: 0xc4c00028  lwc1        $f0, 0x28($a2)
    ctx->pc = 0x24a66cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24a670: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x24a670u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x24a674: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x24a674u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x24a678: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x24a678u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x24a67c: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x24a67cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x24a680: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x24a680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24a684: 0xc4c40010  lwc1        $f4, 0x10($a2)
    ctx->pc = 0x24a684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x24a688: 0xc4a00010  lwc1        $f0, 0x10($a1)
    ctx->pc = 0x24a688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24a68c: 0xc4a30014  lwc1        $f3, 0x14($a1)
    ctx->pc = 0x24a68cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24a690: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x24a690u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x24a694: 0xc4a20018  lwc1        $f2, 0x18($a1)
    ctx->pc = 0x24a694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24a698: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x24a698u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x24a69c: 0xc4c10020  lwc1        $f1, 0x20($a2)
    ctx->pc = 0x24a69cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24a6a0: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x24a6a0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x24a6a4: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x24a6a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x24a6a8: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x24a6a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x24a6ac: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x24a6acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x24a6b0: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x24a6b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24a6b4: 0xc4c40014  lwc1        $f4, 0x14($a2)
    ctx->pc = 0x24a6b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x24a6b8: 0xc4a10010  lwc1        $f1, 0x10($a1)
    ctx->pc = 0x24a6b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24a6bc: 0xc4a30014  lwc1        $f3, 0x14($a1)
    ctx->pc = 0x24a6bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24a6c0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x24a6c0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x24a6c4: 0xc4a20018  lwc1        $f2, 0x18($a1)
    ctx->pc = 0x24a6c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24a6c8: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x24a6c8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x24a6cc: 0xc4c00024  lwc1        $f0, 0x24($a2)
    ctx->pc = 0x24a6ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24a6d0: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x24a6d0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x24a6d4: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x24a6d4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x24a6d8: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x24a6d8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x24a6dc: 0xe4810014  swc1        $f1, 0x14($a0)
    ctx->pc = 0x24a6dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x24a6e0: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x24a6e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24a6e4: 0xc4c40018  lwc1        $f4, 0x18($a2)
    ctx->pc = 0x24a6e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x24a6e8: 0xc4a00010  lwc1        $f0, 0x10($a1)
    ctx->pc = 0x24a6e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24a6ec: 0xc4a30014  lwc1        $f3, 0x14($a1)
    ctx->pc = 0x24a6ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24a6f0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x24a6f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x24a6f4: 0xc4a20018  lwc1        $f2, 0x18($a1)
    ctx->pc = 0x24a6f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24a6f8: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x24a6f8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x24a6fc: 0xc4c10028  lwc1        $f1, 0x28($a2)
    ctx->pc = 0x24a6fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24a700: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x24a700u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x24a704: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x24a704u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x24a708: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x24a708u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x24a70c: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x24a70cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x24a710: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x24a710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24a714: 0xc4c40010  lwc1        $f4, 0x10($a2)
    ctx->pc = 0x24a714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x24a718: 0xc4a10020  lwc1        $f1, 0x20($a1)
    ctx->pc = 0x24a718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24a71c: 0xc4a30024  lwc1        $f3, 0x24($a1)
    ctx->pc = 0x24a71cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24a720: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x24a720u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x24a724: 0xc4a20028  lwc1        $f2, 0x28($a1)
    ctx->pc = 0x24a724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24a728: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x24a728u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x24a72c: 0xc4c00020  lwc1        $f0, 0x20($a2)
    ctx->pc = 0x24a72cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24a730: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x24a730u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x24a734: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x24a734u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x24a738: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x24a738u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x24a73c: 0xe4810020  swc1        $f1, 0x20($a0)
    ctx->pc = 0x24a73cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x24a740: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x24a740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24a744: 0xc4c40014  lwc1        $f4, 0x14($a2)
    ctx->pc = 0x24a744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x24a748: 0xc4a00020  lwc1        $f0, 0x20($a1)
    ctx->pc = 0x24a748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24a74c: 0xc4a30024  lwc1        $f3, 0x24($a1)
    ctx->pc = 0x24a74cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24a750: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x24a750u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x24a754: 0xc4a20028  lwc1        $f2, 0x28($a1)
    ctx->pc = 0x24a754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24a758: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x24a758u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x24a75c: 0xc4c10024  lwc1        $f1, 0x24($a2)
    ctx->pc = 0x24a75cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24a760: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x24a760u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x24a764: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x24a764u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x24a768: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x24a768u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x24a76c: 0xe4800024  swc1        $f0, 0x24($a0)
    ctx->pc = 0x24a76cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
    // 0x24a770: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x24a770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24a774: 0xc4c40018  lwc1        $f4, 0x18($a2)
    ctx->pc = 0x24a774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x24a778: 0xc4a10020  lwc1        $f1, 0x20($a1)
    ctx->pc = 0x24a778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24a77c: 0xc4a30024  lwc1        $f3, 0x24($a1)
    ctx->pc = 0x24a77cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24a780: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x24a780u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x24a784: 0xc4a20028  lwc1        $f2, 0x28($a1)
    ctx->pc = 0x24a784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24a788: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x24a788u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x24a78c: 0xc4c00028  lwc1        $f0, 0x28($a2)
    ctx->pc = 0x24a78cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24a790: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x24a790u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x24a794: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x24a794u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x24a798: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x24a798u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x24a79c: 0xe4810028  swc1        $f1, 0x28($a0)
    ctx->pc = 0x24a79cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
    // 0x24a7a0: 0xc4c30000  lwc1        $f3, 0x0($a2)
    ctx->pc = 0x24a7a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24a7a4: 0xc4c40010  lwc1        $f4, 0x10($a2)
    ctx->pc = 0x24a7a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x24a7a8: 0xc4a00030  lwc1        $f0, 0x30($a1)
    ctx->pc = 0x24a7a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24a7ac: 0xc4a20034  lwc1        $f2, 0x34($a1)
    ctx->pc = 0x24a7acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24a7b0: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x24a7b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x24a7b4: 0xc4a10038  lwc1        $f1, 0x38($a1)
    ctx->pc = 0x24a7b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24a7b8: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x24a7b8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x24a7bc: 0xc4c30020  lwc1        $f3, 0x20($a2)
    ctx->pc = 0x24a7bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24a7c0: 0xc4c40030  lwc1        $f4, 0x30($a2)
    ctx->pc = 0x24a7c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x24a7c4: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x24a7c4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x24a7c8: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x24a7c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x24a7cc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x24a7ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x24a7d0: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x24a7d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x24a7d4: 0xe4800030  swc1        $f0, 0x30($a0)
    ctx->pc = 0x24a7d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
    // 0x24a7d8: 0xc4c30004  lwc1        $f3, 0x4($a2)
    ctx->pc = 0x24a7d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24a7dc: 0xc4c40014  lwc1        $f4, 0x14($a2)
    ctx->pc = 0x24a7dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x24a7e0: 0xc4a10030  lwc1        $f1, 0x30($a1)
    ctx->pc = 0x24a7e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24a7e4: 0xc4a20034  lwc1        $f2, 0x34($a1)
    ctx->pc = 0x24a7e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24a7e8: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x24a7e8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x24a7ec: 0xc4a00038  lwc1        $f0, 0x38($a1)
    ctx->pc = 0x24a7ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24a7f0: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x24a7f0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x24a7f4: 0xc4c30024  lwc1        $f3, 0x24($a2)
    ctx->pc = 0x24a7f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24a7f8: 0xc4c40034  lwc1        $f4, 0x34($a2)
    ctx->pc = 0x24a7f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x24a7fc: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x24a7fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x24a800: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x24a800u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x24a804: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x24a804u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x24a808: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x24a808u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x24a80c: 0xe4810034  swc1        $f1, 0x34($a0)
    ctx->pc = 0x24a80cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 52), bits); }
    // 0x24a810: 0xc4c30008  lwc1        $f3, 0x8($a2)
    ctx->pc = 0x24a810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24a814: 0xc4c40018  lwc1        $f4, 0x18($a2)
    ctx->pc = 0x24a814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x24a818: 0xc4a00030  lwc1        $f0, 0x30($a1)
    ctx->pc = 0x24a818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24a81c: 0xc4a20034  lwc1        $f2, 0x34($a1)
    ctx->pc = 0x24a81cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24a820: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x24a820u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x24a824: 0xc4a10038  lwc1        $f1, 0x38($a1)
    ctx->pc = 0x24a824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24a828: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x24a828u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x24a82c: 0xc4c30028  lwc1        $f3, 0x28($a2)
    ctx->pc = 0x24a82cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24a830: 0xc4c40038  lwc1        $f4, 0x38($a2)
    ctx->pc = 0x24a830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x24a834: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x24a834u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x24a838: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x24a838u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x24a83c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x24a83cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x24a840: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x24a840u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x24a844: 0x3e00008  jr          $ra
    ctx->pc = 0x24A844u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24A848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A844u;
        // 0x24a848: 0xe4800038  swc1        $f0, 0x38($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 56), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24A844u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24A84Cu;
    // 0x24a84c: 0x0  nop
    ctx->pc = 0x24a84cu;
    // NOP
    ctx->pc = 0x24a850u;
}
