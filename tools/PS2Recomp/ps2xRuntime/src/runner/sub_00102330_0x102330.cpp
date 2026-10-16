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

// Function: sub_00102330
// Address: 0x102330 - 0x1023e0
void sub_00102330_0x102330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00102330_0x102330");
#endif

    switch (ctx->pc) {
        case 0x102360u: goto label_102360;
        case 0x10236cu: goto label_10236c;
        case 0x102388u: goto label_102388;
        case 0x1023c4u: goto label_1023c4;
        default: break;
    }

    ctx->pc = 0x102330u;

    // 0x102330: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x102330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x102334: 0x24030060  addiu       $v1, $zero, 0x60
    ctx->pc = 0x102334u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x102338: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x102338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x10233c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10233cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x102340: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x102340u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102344: 0x8e0201a8  lw          $v0, 0x1A8($s0)
    ctx->pc = 0x102344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 424)));
    // 0x102348: 0x8e0500d8  lw          $a1, 0xD8($s0)
    ctx->pc = 0x102348u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
    // 0x10234c: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x10234cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x102350: 0x8e040190  lw          $a0, 0x190($s0)
    ctx->pc = 0x102350u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 400)));
    // 0x102354: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x102354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x102358: 0xc09d55c  jal         func_275570
    ctx->pc = 0x102358u;
    SET_GPR_U32(ctx, 31, 0x102360u);
    ctx->pc = 0x10235Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102358u;
    // 0x10235c: 0x8c450024  lw          $a1, 0x24($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275570u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x275570u, 0x102358u, 0x102360u)) {
        return;
    }
    ctx->pc = 0x102360u;
label_102360:
    // 0x102360: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x102360u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x102364: 0xc09d926  jal         func_276498
    ctx->pc = 0x102364u;
    SET_GPR_U32(ctx, 31, 0x10236Cu);
    ctx->pc = 0x102368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102364u;
    // 0x102368: 0x8e040190  lw          $a0, 0x190($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 400)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276498u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x276498u, 0x102364u, 0x10236Cu)) {
        return;
    }
    ctx->pc = 0x10236Cu;
label_10236c:
    // 0x10236c: 0x8e0302a4  lw          $v1, 0x2A4($s0)
    ctx->pc = 0x10236cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 676)));
    // 0x102370: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x102370u;
    {
        const bool branch_taken_0x102370 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x102370) {
            ctx->pc = 0x102374u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x102370u;
            // 0x102374: 0x8e0300ec  lw          $v1, 0xEC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 236)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x102390u;
            goto label_102390;
        }
    }
    ctx->pc = 0x102378u;
    // 0x102378: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x102378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x10237c: 0x8e040190  lw          $a0, 0x190($s0)
    ctx->pc = 0x10237cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 400)));
    // 0x102380: 0xc09d918  jal         func_276460
    ctx->pc = 0x102380u;
    SET_GPR_U32(ctx, 31, 0x102388u);
    ctx->pc = 0x102384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102380u;
    // 0x102384: 0x8c450020  lw          $a1, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x276460u, 0x102380u, 0x102388u)) {
        return;
    }
    ctx->pc = 0x102388u;
label_102388:
    // 0x102388: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x102388u;
    {
        const bool branch_taken_0x102388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10238Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102388u;
        // 0x10238c: 0x8e020190  lw          $v0, 0x190($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102388) {
            ctx->pc = 0x1023C8u;
            goto label_1023c8;
        }
    }
    ctx->pc = 0x102390u;
label_102390:
    // 0x102390: 0x8e020190  lw          $v0, 0x190($s0)
    ctx->pc = 0x102390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 400)));
    // 0x102394: 0x8c680020  lw          $t0, 0x20($v1)
    ctx->pc = 0x102394u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x102398: 0x8c450034  lw          $a1, 0x34($v0)
    ctx->pc = 0x102398u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x10239c: 0x2444004c  addiu       $a0, $v0, 0x4C
    ctx->pc = 0x10239cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 76));
    // 0x1023a0: 0x8d030024  lw          $v1, 0x24($t0)
    ctx->pc = 0x1023a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 36)));
    // 0x1023a4: 0x8c46002c  lw          $a2, 0x2C($v0)
    ctx->pc = 0x1023a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x1023a8: 0x8c470024  lw          $a3, 0x24($v0)
    ctx->pc = 0x1023a8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x1023ac: 0xa31018  mult        $v0, $a1, $v1
    ctx->pc = 0x1023acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1023b0: 0xe60018  mult        $zero, $a3, $a2
    ctx->pc = 0x1023b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1023b4: 0x482821  addu        $a1, $v0, $t0
    ctx->pc = 0x1023b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1023b8: 0x3012  mflo        $a2
    ctx->pc = 0x1023b8u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x1023bc: 0xc075fdc  jal         func_1D7F70
    ctx->pc = 0x1023BCu;
    SET_GPR_U32(ctx, 31, 0x1023C4u);
    ctx->pc = 0x1023C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1023BCu;
    // 0x1023c0: 0x24a5004c  addiu       $a1, $a1, 0x4C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 76));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7F70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D7F70u, 0x1023BCu, 0x1023C4u)) {
        return;
    }
    ctx->pc = 0x1023C4u;
label_1023c4:
    // 0x1023c4: 0x8e020190  lw          $v0, 0x190($s0)
    ctx->pc = 0x1023c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 400)));
label_1023c8:
    // 0x1023c8: 0xae0001d4  sw          $zero, 0x1D4($s0)
    ctx->pc = 0x1023c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 468), GPR_U32(ctx, 0));
    // 0x1023cc: 0xae02019c  sw          $v0, 0x19C($s0)
    ctx->pc = 0x1023ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 412), GPR_U32(ctx, 2));
    // 0x1023d0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1023d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1023d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1023d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1023d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1023D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1023DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1023D8u;
        // 0x1023dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1023D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1023E0u;
}
