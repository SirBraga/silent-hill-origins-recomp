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

// Function: sub_001C6330
// Address: 0x1c6330 - 0x1c6398
void sub_001C6330_0x1c6330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C6330_0x1c6330");
#endif

    switch (ctx->pc) {
        case 0x1c6380u: goto label_1c6380;
        default: break;
    }

    ctx->pc = 0x1c6330u;

    // 0x1c6330: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c6330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c6334: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1c6334u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1c6338: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c6338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c633c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c633cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6340: 0x8e0203c4  lw          $v0, 0x3C4($s0)
    ctx->pc = 0x1c6340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 964)));
    // 0x1c6344: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x1C6344u;
    {
        const bool branch_taken_0x1c6344 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c6344) {
            ctx->pc = 0x1C6348u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C6344u;
            // 0x1c6348: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C6388u;
            goto label_1c6388;
        }
    }
    ctx->pc = 0x1C634Cu;
    // 0x1c634c: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x1c634cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c6350: 0xc60103d8  lwc1        $f1, 0x3D8($s0)
    ctx->pc = 0x1c6350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 984)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c6354: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x1c6354u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x1c6358: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1c6358u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1c635c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1c635cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1c6360: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x1c6360u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c6364: 0x0  nop
    ctx->pc = 0x1c6364u;
    // NOP
    // 0x1c6368: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1C6368u;
    {
        const bool branch_taken_0x1c6368 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C636Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6368u;
        // 0x1c636c: 0xe60103d8  swc1        $f1, 0x3D8($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 984), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6368) {
            ctx->pc = 0x1C6384u;
            goto label_1c6384;
        }
    }
    ctx->pc = 0x1C6370u;
    // 0x1c6370: 0x8e040044  lw          $a0, 0x44($s0)
    ctx->pc = 0x1c6370u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x1c6374: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1c6374u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c6378: 0xc06bede  jal         func_1AFB78
    ctx->pc = 0x1C6378u;
    SET_GPR_U32(ctx, 31, 0x1C6380u);
    ctx->pc = 0x1C637Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6378u;
    // 0x1c637c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AFB78u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AFB78u, 0x1C6378u, 0x1C6380u)) {
        return;
    }
    ctx->pc = 0x1C6380u;
label_1c6380:
    // 0x1c6380: 0xae0003c4  sw          $zero, 0x3C4($s0)
    ctx->pc = 0x1c6380u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 964), GPR_U32(ctx, 0));
label_1c6384:
    // 0x1c6384: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1c6384u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1c6388:
    // 0x1c6388: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c6388u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c638c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C638Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C6390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C638Cu;
        // 0x1c6390: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C638Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C6394u;
    // 0x1c6394: 0x0  nop
    ctx->pc = 0x1c6394u;
    // NOP
    ctx->pc = 0x1c6398u;
}
