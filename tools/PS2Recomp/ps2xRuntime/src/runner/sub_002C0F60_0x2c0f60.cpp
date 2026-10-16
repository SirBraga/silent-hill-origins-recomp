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

// Function: sub_002C0F60
// Address: 0x2c0f60 - 0x2c1060
void sub_002C0F60_0x2c0f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C0F60_0x2c0f60");
#endif

    ctx->pc = 0x2c0f60u;

    // 0x2c0f60: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2c0f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2c0f64: 0x84180  sll         $t0, $t0, 6
    ctx->pc = 0x2c0f64u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 6));
    // 0x2c0f68: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x2c0f68u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x2c0f6c: 0x94940  sll         $t1, $t1, 5
    ctx->pc = 0x2c0f6cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 5));
    // 0x2c0f70: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x2c0f70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x2c0f74: 0x1284821  addu        $t1, $t1, $t0
    ctx->pc = 0x2c0f74u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x2c0f78: 0xe91021  addu        $v0, $a3, $t1
    ctx->pc = 0x2c0f78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x2c0f7c: 0xc4c1000c  lwc1        $f1, 0xC($a2)
    ctx->pc = 0x2c0f7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c0f80: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2c0f80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c0f84: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c0f84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0f88: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x2c0f88u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0f8c: 0x24e30010  addiu       $v1, $a3, 0x10
    ctx->pc = 0x2c0f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x2c0f90: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2c0f90u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2c0f94: 0x24e20014  addiu       $v0, $a3, 0x14
    ctx->pc = 0x2c0f94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 20));
    // 0x2c0f98: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x2c0f98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x2c0f9c: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x2c0f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x2c0fa0: 0x24e70018  addiu       $a3, $a3, 0x18
    ctx->pc = 0x2c0fa0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 24));
    // 0x2c0fa4: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x2c0fa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x2c0fa8: 0xe93821  addu        $a3, $a3, $t1
    ctx->pc = 0x2c0fa8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x2c0fac: 0xc4c1000c  lwc1        $f1, 0xC($a2)
    ctx->pc = 0x2c0facu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c0fb0: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x2c0fb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c0fb4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2c0fb4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2c0fb8: 0xe4a00004  swc1        $f0, 0x4($a1)
    ctx->pc = 0x2c0fb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x2c0fbc: 0xc4c0000c  lwc1        $f0, 0xC($a2)
    ctx->pc = 0x2c0fbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c0fc0: 0xc5010008  lwc1        $f1, 0x8($t0)
    ctx->pc = 0x2c0fc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c0fc4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2c0fc4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c0fc8: 0xe4a10008  swc1        $f1, 0x8($a1)
    ctx->pc = 0x2c0fc8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x2c0fcc: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x2c0fccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c0fd0: 0xc4c40004  lwc1        $f4, 0x4($a2)
    ctx->pc = 0x2c0fd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2c0fd4: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x2c0fd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c0fd8: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x2c0fd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2c0fdc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2c0fdcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2c0fe0: 0xc4e20000  lwc1        $f2, 0x0($a3)
    ctx->pc = 0x2c0fe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c0fe4: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x2c0fe4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x2c0fe8: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x2c0fe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c0fec: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x2c0fecu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x2c0ff0: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x2c0ff0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x2c0ff4: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2c0ff4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2c0ff8: 0xe4a00010  swc1        $f0, 0x10($a1)
    ctx->pc = 0x2c0ff8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 16), bits); }
    // 0x2c0ffc: 0xc4c00010  lwc1        $f0, 0x10($a2)
    ctx->pc = 0x2c0ffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c1000: 0xc4c40014  lwc1        $f4, 0x14($a2)
    ctx->pc = 0x2c1000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2c1004: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x2c1004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c1008: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x2c1008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2c100c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2c100cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c1010: 0xc4e20000  lwc1        $f2, 0x0($a3)
    ctx->pc = 0x2c1010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c1014: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x2c1014u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x2c1018: 0xc4c00018  lwc1        $f0, 0x18($a2)
    ctx->pc = 0x2c1018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c101c: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x2c101cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2c1020: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x2c1020u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x2c1024: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2c1024u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2c1028: 0xe4a10014  swc1        $f1, 0x14($a1)
    ctx->pc = 0x2c1028u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 20), bits); }
    // 0x2c102c: 0xc4c10020  lwc1        $f1, 0x20($a2)
    ctx->pc = 0x2c102cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c1030: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x2c1030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c1034: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x2c1034u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2c1038: 0xc4c40024  lwc1        $f4, 0x24($a2)
    ctx->pc = 0x2c1038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2c103c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2c103cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2c1040: 0xc4e20000  lwc1        $f2, 0x0($a3)
    ctx->pc = 0x2c1040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c1044: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x2c1044u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x2c1048: 0xc4c10028  lwc1        $f1, 0x28($a2)
    ctx->pc = 0x2c1048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c104c: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x2c104cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x2c1050: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x2c1050u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x2c1054: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2c1054u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2c1058: 0x3e00008  jr          $ra
    ctx->pc = 0x2C1058u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C105Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1058u;
        // 0x2c105c: 0xe4a00018  swc1        $f0, 0x18($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 24), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C1058u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C1060u;
}
