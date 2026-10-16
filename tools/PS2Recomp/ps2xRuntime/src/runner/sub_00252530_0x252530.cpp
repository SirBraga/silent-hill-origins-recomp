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

// Function: sub_00252530
// Address: 0x252530 - 0x252580
void sub_00252530_0x252530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00252530_0x252530");
#endif

    switch (ctx->pc) {
        case 0x252574u: goto label_252574;
        default: break;
    }

    ctx->pc = 0x252530u;

    // 0x252530: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x252530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x252534: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x252534u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252538: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x252538u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x25253c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x25253cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252540: 0xc4450014  lwc1        $f5, 0x14($v0)
    ctx->pc = 0x252540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x252544: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x252544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x252548: 0xc443000c  lwc1        $f3, 0xC($v0)
    ctx->pc = 0x252548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x25254c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x25254cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x252550: 0xc4440010  lwc1        $f4, 0x10($v0)
    ctx->pc = 0x252550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x252554: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x252554u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x252558: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x252558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25255c: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x25255cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x252560: 0x46050001  sub.s       $f0, $f0, $f5
    ctx->pc = 0x252560u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
    // 0x252564: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x252564u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x252568: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x252568u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x25256c: 0xc093aa8  jal         func_24EAA0
    ctx->pc = 0x25256Cu;
    SET_GPR_U32(ctx, 31, 0x252574u);
    ctx->pc = 0x252570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25256Cu;
    // 0x252570: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EAA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EAA0u, 0x25256Cu, 0x252574u)) {
        return;
    }
    ctx->pc = 0x252574u;
label_252574:
    // 0x252574: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x252574u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x252578: 0x3e00008  jr          $ra
    ctx->pc = 0x252578u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25257Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252578u;
        // 0x25257c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x252578u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x252580u;
}
