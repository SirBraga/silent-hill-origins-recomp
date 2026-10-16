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

// Function: sub_0024B220
// Address: 0x24b220 - 0x24b2c8
void sub_0024B220_0x24b220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024B220_0x24b220");
#endif

    ctx->pc = 0x24b220u;

    // 0x24b220: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x24b220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x24b224: 0xc4860004  lwc1        $f6, 0x4($a0)
    ctx->pc = 0x24b224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x24b228: 0xc4820010  lwc1        $f2, 0x10($a0)
    ctx->pc = 0x24b228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24b22c: 0x24830020  addiu       $v1, $a0, 0x20
    ctx->pc = 0x24b22cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x24b230: 0xc4450004  lwc1        $f5, 0x4($v0)
    ctx->pc = 0x24b230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x24b234: 0x46063182  mul.s       $f6, $f6, $f6
    ctx->pc = 0x24b234u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[6]);
    // 0x24b238: 0xc4830000  lwc1        $f3, 0x0($a0)
    ctx->pc = 0x24b238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24b23c: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x24b23cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x24b240: 0x46052942  mul.s       $f5, $f5, $f5
    ctx->pc = 0x24b240u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
    // 0x24b244: 0xc4470008  lwc1        $f7, 0x8($v0)
    ctx->pc = 0x24b244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x24b248: 0x460318c2  mul.s       $f3, $f3, $f3
    ctx->pc = 0x24b248u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x24b24c: 0xc4810020  lwc1        $f1, 0x20($a0)
    ctx->pc = 0x24b24cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24b250: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x24b250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24b254: 0x460739c2  mul.s       $f7, $f7, $f7
    ctx->pc = 0x24b254u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[7]);
    // 0x24b258: 0xc4640004  lwc1        $f4, 0x4($v1)
    ctx->pc = 0x24b258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x24b25c: 0x46051080  add.s       $f2, $f2, $f5
    ctx->pc = 0x24b25cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[5]);
    // 0x24b260: 0x460618c0  add.s       $f3, $f3, $f6
    ctx->pc = 0x24b260u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[6]);
    // 0x24b264: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x24b264u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x24b268: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x24b268u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x24b26c: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x24b26cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x24b270: 0xc4660008  lwc1        $f6, 0x8($v1)
    ctx->pc = 0x24b270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x24b274: 0x46042102  mul.s       $f4, $f4, $f4
    ctx->pc = 0x24b274u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x24b278: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x24b278u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x24b27c: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x24b27cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x24b280: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x24b280u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x24b284: 0x46071080  add.s       $f2, $f2, $f7
    ctx->pc = 0x24b284u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[7]);
    // 0x24b288: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x24b288u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x24b28c: 0x46063182  mul.s       $f6, $f6, $f6
    ctx->pc = 0x24b28cu;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[6]);
    // 0x24b290: 0x46081081  sub.s       $f2, $f2, $f8
    ctx->pc = 0x24b290u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[8]);
    // 0x24b294: 0x460818c1  sub.s       $f3, $f3, $f8
    ctx->pc = 0x24b294u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[8]);
    // 0x24b298: 0x46060840  add.s       $f1, $f1, $f6
    ctx->pc = 0x24b298u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[6]);
    // 0x24b29c: 0x46021102  mul.s       $f4, $f2, $f2
    ctx->pc = 0x24b29cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x24b2a0: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x24b2a0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x24b2a4: 0x46031802  mul.s       $f0, $f3, $f3
    ctx->pc = 0x24b2a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x24b2a8: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x24b2a8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x24b2ac: 0x46080841  sub.s       $f1, $f1, $f8
    ctx->pc = 0x24b2acu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[8]);
    // 0x24b2b0: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x24b2b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x24b2b4: 0x46010882  mul.s       $f2, $f1, $f1
    ctx->pc = 0x24b2b4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x24b2b8: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x24b2b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x24b2bc: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x24b2bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x24b2c0: 0x3e00008  jr          $ra
    ctx->pc = 0x24B2C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24B2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B2C0u;
        // 0x24b2c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24B2C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24B2C8u;
}
