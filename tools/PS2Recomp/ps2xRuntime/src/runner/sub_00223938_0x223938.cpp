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

// Function: sub_00223938
// Address: 0x223938 - 0x2239e8
void sub_00223938_0x223938(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00223938_0x223938");
#endif

    ctx->pc = 0x223938u;

    // 0x223938: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x223938u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x22393c: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x22393cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x223940: 0x24420fc8  addiu       $v0, $v0, 0xFC8
    ctx->pc = 0x223940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4040));
    // 0x223944: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x223944u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x223948: 0xc446001c  lwc1        $f6, 0x1C($v0)
    ctx->pc = 0x223948u;
    { uint32_t bits = FAST_READ32(0x730FE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x22394c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x22394cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x223950: 0x10a30007  beq         $a1, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x223950u;
    {
        const bool branch_taken_0x223950 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x223954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223950u;
        // 0x223954: 0xc4450018  lwc1        $f5, 0x18($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x223950) {
            ctx->pc = 0x223970u;
            goto label_223970;
        }
    }
    ctx->pc = 0x223958u;
    // 0x223958: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x223958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x22395c: 0x14a20004  bne         $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x22395Cu;
    {
        const bool branch_taken_0x22395c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x22395c) {
            ctx->pc = 0x223970u;
            goto label_223970;
        }
    }
    ctx->pc = 0x223964u;
    // 0x223964: 0xc4840084  lwc1        $f4, 0x84($a0)
    ctx->pc = 0x223964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x223968: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x223968u;
    {
        const bool branch_taken_0x223968 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22396Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223968u;
        // 0x22396c: 0xc4820080  lwc1        $f2, 0x80($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x223968) {
            ctx->pc = 0x223988u;
            goto label_223988;
        }
    }
    ctx->pc = 0x223970u;
label_223970:
    // 0x223970: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x223970u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x223974: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x223974u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x223978: 0xc4810084  lwc1        $f1, 0x84($a0)
    ctx->pc = 0x223978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22397c: 0xc4820080  lwc1        $f2, 0x80($a0)
    ctx->pc = 0x22397cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x223980: 0x46010103  div.s       $f4, $f0, $f1
    ctx->pc = 0x223980u;
    ctx->f[4] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[1]);
    // 0x223984: 0x46020083  div.s       $f2, $f0, $f2
    ctx->pc = 0x223984u;
    ctx->f[2] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[2]);
label_223988:
    // 0x223988: 0x46053041  sub.s       $f1, $f6, $f5
    ctx->pc = 0x223988u;
    ctx->f[1] = FPU_SUB_S(ctx->f[6], ctx->f[5]);
    // 0x22398c: 0x3c0138d1  lui         $at, 0x38D1
    ctx->pc = 0x22398cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14545 << 16));
    // 0x223990: 0x3421b717  ori         $at, $at, 0xB717
    ctx->pc = 0x223990u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)46871);
    // 0x223994: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x223994u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x223998: 0x460220c1  sub.s       $f3, $f4, $f2
    ctx->pc = 0x223998u;
    ctx->f[3] = FPU_SUB_S(ctx->f[4], ctx->f[2]);
    // 0x22399c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x22399cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2239a0: 0x46022080  add.s       $f2, $f4, $f2
    ctx->pc = 0x2239a0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[4], ctx->f[2]);
    // 0x2239a4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2239a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2239a8: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x2239a8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2239ac: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2239acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2239b0: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2239b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2239b4: 0x46002940  add.s       $f5, $f5, $f0
    ctx->pc = 0x2239b4u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
    // 0x2239b8: 0xc7a40000  lwc1        $f4, 0x0($sp)
    ctx->pc = 0x2239b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2239bc: 0x46003181  sub.s       $f6, $f6, $f0
    ctx->pc = 0x2239bcu;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[0]);
    // 0x2239c0: 0x46053041  sub.s       $f1, $f6, $f5
    ctx->pc = 0x2239c0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[6], ctx->f[5]);
    // 0x2239c4: 0x46053000  add.s       $f0, $f6, $f5
    ctx->pc = 0x2239c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[6], ctx->f[5]);
    // 0x2239c8: 0x46040843  div.s       $f1, $f1, $f4
    ctx->pc = 0x2239c8u;
    ctx->f[1] = FPU_DIV_S(ctx, ctx->f[1], ctx->f[4]);
    // 0x2239cc: 0x46020882  mul.s       $f2, $f1, $f2
    ctx->pc = 0x2239ccu;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2239d0: 0xe481008c  swc1        $f1, 0x8C($a0)
    ctx->pc = 0x2239d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 140), bits); }
    // 0x2239d4: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x2239d4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x2239d8: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2239d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2239dc: 0xe4800090  swc1        $f0, 0x90($a0)
    ctx->pc = 0x2239dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 144), bits); }
    // 0x2239e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2239E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2239E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2239E0u;
        // 0x2239e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2239E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2239E8u;
}
