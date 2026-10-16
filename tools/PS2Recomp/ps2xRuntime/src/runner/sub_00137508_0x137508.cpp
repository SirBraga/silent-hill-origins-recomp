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

// Function: sub_00137508
// Address: 0x137508 - 0x137550
void sub_00137508_0x137508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00137508_0x137508");
#endif

    ctx->pc = 0x137508u;

    // 0x137508: 0x8c821528  lw          $v0, 0x1528($a0)
    ctx->pc = 0x137508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 5416)));
    // 0x13750c: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x13750cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x137510: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x137510u;
    {
        const bool branch_taken_0x137510 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x137514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137510u;
        // 0x137514: 0x3c020069  lui         $v0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137510) {
            ctx->pc = 0x137544u;
            goto label_137544;
        }
    }
    ctx->pc = 0x137518u;
    // 0x137518: 0xc482152c  lwc1        $f2, 0x152C($a0)
    ctx->pc = 0x137518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 5420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x13751c: 0xc440e42c  lwc1        $f0, -0x1BD4($v0)
    ctx->pc = 0x13751cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294960172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x137520: 0x46001032  c.eq.s      $f2, $f0
    ctx->pc = 0x137520u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x137524: 0x0  nop
    ctx->pc = 0x137524u;
    // NOP
    // 0x137528: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x137528u;
    {
        const bool branch_taken_0x137528 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x137528) {
            ctx->pc = 0x137544u;
            goto label_137544;
        }
    }
    ctx->pc = 0x137530u;
    // 0x137530: 0xc480150c  lwc1        $f0, 0x150C($a0)
    ctx->pc = 0x137530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 5388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x137534: 0x46001841  sub.s       $f1, $f3, $f0
    ctx->pc = 0x137534u;
    ctx->f[1] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x137538: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x137538u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x13753c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x13753cu;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[1]);
    // 0x137540: 0x460300c0  add.s       $f3, $f0, $f3
    ctx->pc = 0x137540u;
    ctx->f[3] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_137544:
    // 0x137544: 0x3e00008  jr          $ra
    ctx->pc = 0x137544u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x137548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137544u;
        // 0x137548: 0x46001806  mov.s       $f0, $f3 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[3]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x137544u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13754Cu;
    // 0x13754c: 0x0  nop
    ctx->pc = 0x13754cu;
    // NOP
    ctx->pc = 0x137550u;
}
