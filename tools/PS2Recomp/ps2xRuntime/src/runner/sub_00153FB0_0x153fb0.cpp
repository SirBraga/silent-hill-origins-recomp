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

// Function: sub_00153FB0
// Address: 0x153fb0 - 0x154148
void sub_00153FB0_0x153fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00153FB0_0x153fb0");
#endif

    switch (ctx->pc) {
        case 0x153fb0u: goto label_153fb0;
        case 0x153fb4u: goto label_153fb4;
        case 0x153fb8u: goto label_153fb8;
        case 0x153fbcu: goto label_153fbc;
        case 0x153fc0u: goto label_153fc0;
        case 0x153fc4u: goto label_153fc4;
        case 0x153fc8u: goto label_153fc8;
        case 0x153fccu: goto label_153fcc;
        case 0x153fd0u: goto label_153fd0;
        case 0x153fd4u: goto label_153fd4;
        case 0x153fd8u: goto label_153fd8;
        case 0x153fdcu: goto label_153fdc;
        case 0x153fe0u: goto label_153fe0;
        case 0x153fe4u: goto label_153fe4;
        case 0x153fe8u: goto label_153fe8;
        case 0x153fecu: goto label_153fec;
        case 0x153ff0u: goto label_153ff0;
        case 0x153ff4u: goto label_153ff4;
        case 0x153ff8u: goto label_153ff8;
        case 0x153ffcu: goto label_153ffc;
        case 0x154000u: goto label_154000;
        case 0x154004u: goto label_154004;
        case 0x154008u: goto label_154008;
        case 0x15400cu: goto label_15400c;
        case 0x154010u: goto label_154010;
        case 0x154014u: goto label_154014;
        case 0x154018u: goto label_154018;
        case 0x15401cu: goto label_15401c;
        case 0x154020u: goto label_154020;
        case 0x154024u: goto label_154024;
        case 0x154028u: goto label_154028;
        case 0x15402cu: goto label_15402c;
        case 0x154030u: goto label_154030;
        case 0x154034u: goto label_154034;
        case 0x154038u: goto label_154038;
        case 0x15403cu: goto label_15403c;
        case 0x154040u: goto label_154040;
        case 0x154044u: goto label_154044;
        case 0x154048u: goto label_154048;
        case 0x15404cu: goto label_15404c;
        case 0x154050u: goto label_154050;
        case 0x154054u: goto label_154054;
        case 0x154058u: goto label_154058;
        case 0x15405cu: goto label_15405c;
        case 0x154060u: goto label_154060;
        case 0x154064u: goto label_154064;
        case 0x154068u: goto label_154068;
        case 0x15406cu: goto label_15406c;
        case 0x154070u: goto label_154070;
        case 0x154074u: goto label_154074;
        case 0x154078u: goto label_154078;
        case 0x15407cu: goto label_15407c;
        case 0x154080u: goto label_154080;
        case 0x154084u: goto label_154084;
        case 0x154088u: goto label_154088;
        case 0x15408cu: goto label_15408c;
        case 0x154090u: goto label_154090;
        case 0x154094u: goto label_154094;
        case 0x154098u: goto label_154098;
        case 0x15409cu: goto label_15409c;
        case 0x1540a0u: goto label_1540a0;
        case 0x1540a4u: goto label_1540a4;
        case 0x1540a8u: goto label_1540a8;
        case 0x1540acu: goto label_1540ac;
        case 0x1540b0u: goto label_1540b0;
        case 0x1540b4u: goto label_1540b4;
        case 0x1540b8u: goto label_1540b8;
        case 0x1540bcu: goto label_1540bc;
        case 0x1540c0u: goto label_1540c0;
        case 0x1540c4u: goto label_1540c4;
        case 0x1540c8u: goto label_1540c8;
        case 0x1540ccu: goto label_1540cc;
        case 0x1540d0u: goto label_1540d0;
        case 0x1540d4u: goto label_1540d4;
        case 0x1540d8u: goto label_1540d8;
        case 0x1540dcu: goto label_1540dc;
        case 0x1540e0u: goto label_1540e0;
        case 0x1540e4u: goto label_1540e4;
        case 0x1540e8u: goto label_1540e8;
        case 0x1540ecu: goto label_1540ec;
        case 0x1540f0u: goto label_1540f0;
        case 0x1540f4u: goto label_1540f4;
        case 0x1540f8u: goto label_1540f8;
        case 0x1540fcu: goto label_1540fc;
        case 0x154100u: goto label_154100;
        case 0x154104u: goto label_154104;
        case 0x154108u: goto label_154108;
        case 0x15410cu: goto label_15410c;
        case 0x154110u: goto label_154110;
        case 0x154114u: goto label_154114;
        case 0x154118u: goto label_154118;
        case 0x15411cu: goto label_15411c;
        case 0x154120u: goto label_154120;
        case 0x154124u: goto label_154124;
        case 0x154128u: goto label_154128;
        case 0x15412cu: goto label_15412c;
        case 0x154130u: goto label_154130;
        case 0x154134u: goto label_154134;
        case 0x154138u: goto label_154138;
        case 0x15413cu: goto label_15413c;
        case 0x154140u: goto label_154140;
        case 0x154144u: goto label_154144;
        default: break;
    }

    ctx->pc = 0x153fb0u;

label_153fb0:
    // 0x153fb0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x153fb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_153fb4:
    // 0x153fb4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x153fb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_153fb8:
    // 0x153fb8: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x153fb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_153fbc:
    // 0x153fbc: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x153fbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_153fc0:
    // 0x153fc0: 0x3c100073  lui         $s0, 0x73
    ctx->pc = 0x153fc0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)115 << 16));
label_153fc4:
    // 0x153fc4: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x153fc4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_153fc8:
    // 0x153fc8: 0x26100fd8  addiu       $s0, $s0, 0xFD8
    ctx->pc = 0x153fc8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4056));
label_153fcc:
    // 0x153fcc: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x153fccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_153fd0:
    // 0x153fd0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x153fd0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_153fd4:
    // 0x153fd4: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x153fd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
label_153fd8:
    // 0x153fd8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x153fd8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_153fdc:
    // 0x153fdc: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x153fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_153fe0:
    // 0x153fe0: 0x40f809  jalr        $v0
label_153fe4:
    if (ctx->pc == 0x153FE4u) {
        ctx->pc = 0x153FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153FE0u;
        // 0x153fe4: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x153FE8u;
        goto label_153fe8;
    }
    ctx->pc = 0x153FE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x153FE8u);
        ctx->pc = 0x153FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153FE0u;
        // 0x153fe4: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x153FE0u, 0x153FE8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x153FE8u;
label_153fe8:
    // 0x153fe8: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x153fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_153fec:
    // 0x153fec: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x153fecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_153ff0:
    // 0x153ff0: 0x40f809  jalr        $v0
label_153ff4:
    if (ctx->pc == 0x153FF4u) {
        ctx->pc = 0x153FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153FF0u;
        // 0x153ff4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x153FF8u;
        goto label_153ff8;
    }
    ctx->pc = 0x153FF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x153FF8u);
        ctx->pc = 0x153FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153FF0u;
        // 0x153ff4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x153FF0u, 0x153FF8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x153FF8u;
label_153ff8:
    // 0x153ff8: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x153ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_153ffc:
    // 0x153ffc: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x153ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_154000:
    // 0x154000: 0x40f809  jalr        $v0
label_154004:
    if (ctx->pc == 0x154004u) {
        ctx->pc = 0x154004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154000u;
        // 0x154004: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154008u;
        goto label_154008;
    }
    ctx->pc = 0x154000u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x154008u);
        ctx->pc = 0x154004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154000u;
        // 0x154004: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x154000u, 0x154008u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x154008u;
label_154008:
    // 0x154008: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x154008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_15400c:
    // 0x15400c: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x15400cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_154010:
    // 0x154010: 0x40f809  jalr        $v0
label_154014:
    if (ctx->pc == 0x154014u) {
        ctx->pc = 0x154014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154010u;
        // 0x154014: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154018u;
        goto label_154018;
    }
    ctx->pc = 0x154010u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x154018u);
        ctx->pc = 0x154014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154010u;
        // 0x154014: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x154010u, 0x154018u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x154018u;
label_154018:
    // 0x154018: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x154018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_15401c:
    // 0x15401c: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x15401cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_154020:
    // 0x154020: 0x40f809  jalr        $v0
label_154024:
    if (ctx->pc == 0x154024u) {
        ctx->pc = 0x154024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154020u;
        // 0x154024: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154028u;
        goto label_154028;
    }
    ctx->pc = 0x154020u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x154028u);
        ctx->pc = 0x154024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154020u;
        // 0x154024: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x154020u, 0x154028u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x154028u;
label_154028:
    // 0x154028: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x154028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_15402c:
    // 0x15402c: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x15402cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_154030:
    // 0x154030: 0x40f809  jalr        $v0
label_154034:
    if (ctx->pc == 0x154034u) {
        ctx->pc = 0x154034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154030u;
        // 0x154034: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154038u;
        goto label_154038;
    }
    ctx->pc = 0x154030u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x154038u);
        ctx->pc = 0x154034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154030u;
        // 0x154034: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x154030u, 0x154038u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x154038u;
label_154038:
    // 0x154038: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x154038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_15403c:
    // 0x15403c: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x15403cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_154040:
    // 0x154040: 0x40f809  jalr        $v0
label_154044:
    if (ctx->pc == 0x154044u) {
        ctx->pc = 0x154044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154040u;
        // 0x154044: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154048u;
        goto label_154048;
    }
    ctx->pc = 0x154040u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x154048u);
        ctx->pc = 0x154044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154040u;
        // 0x154044: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x154040u, 0x154048u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x154048u;
label_154048:
    // 0x154048: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x154048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_15404c:
    // 0x15404c: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x15404cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_154050:
    // 0x154050: 0x40f809  jalr        $v0
label_154054:
    if (ctx->pc == 0x154054u) {
        ctx->pc = 0x154054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154050u;
        // 0x154054: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154058u;
        goto label_154058;
    }
    ctx->pc = 0x154050u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x154058u);
        ctx->pc = 0x154054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154050u;
        // 0x154054: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x154050u, 0x154058u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x154058u;
label_154058:
    // 0x154058: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x154058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_15405c:
    // 0x15405c: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x15405cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_154060:
    // 0x154060: 0x40f809  jalr        $v0
label_154064:
    if (ctx->pc == 0x154064u) {
        ctx->pc = 0x154064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154060u;
        // 0x154064: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154068u;
        goto label_154068;
    }
    ctx->pc = 0x154060u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x154068u);
        ctx->pc = 0x154064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154060u;
        // 0x154064: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x154060u, 0x154068u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x154068u;
label_154068:
    // 0x154068: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x154068u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_15406c:
    // 0x15406c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15406cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_154070:
    // 0x154070: 0xc0c493d  jal         func_3124F4
label_154074:
    if (ctx->pc == 0x154074u) {
        ctx->pc = 0x154074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154070u;
        // 0x154074: 0x24060016  addiu       $a2, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154078u;
        goto label_154078;
    }
    ctx->pc = 0x154070u;
    SET_GPR_U32(ctx, 31, 0x154078u);
    ctx->pc = 0x154074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154070u;
    // 0x154074: 0x24060016  addiu       $a2, $zero, 0x16 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x154070u, 0x154078u)) {
        return;
    }
    ctx->pc = 0x154078u;
label_154078:
    // 0x154078: 0xc62c0044  lwc1        $f12, 0x44($s1)
    ctx->pc = 0x154078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_15407c:
    // 0x15407c: 0x0  nop
    ctx->pc = 0x15407cu;
    // NOP
label_154080:
    // 0x154080: 0x46146303  div.s       $f12, $f12, $f20
    ctx->pc = 0x154080u;
    ctx->f[12] = FPU_DIV_S(ctx, ctx->f[12], ctx->f[20]);
label_154084:
    // 0x154084: 0xc09b12a  jal         func_26C4A8
label_154088:
    if (ctx->pc == 0x154088u) {
        ctx->pc = 0x15408Cu;
        goto label_15408c;
    }
    ctx->pc = 0x154084u;
    SET_GPR_U32(ctx, 31, 0x15408Cu);
    ctx->pc = 0x26C4A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26C4A8u, 0x154084u, 0x15408Cu)) {
        return;
    }
    ctx->pc = 0x15408Cu;
label_15408c:
    // 0x15408c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x15408cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_154090:
    // 0x154090: 0x44100800  mfc1        $s0, $f1
    ctx->pc = 0x154090u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
label_154094:
    // 0x154094: 0x3c020098  lui         $v0, 0x98
    ctx->pc = 0x154094u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)152 << 16));
label_154098:
    // 0x154098: 0xc6210044  lwc1        $f1, 0x44($s1)
    ctx->pc = 0x154098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_15409c:
    // 0x15409c: 0x3442967f  ori         $v0, $v0, 0x967F
    ctx->pc = 0x15409cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)38527);
label_1540a0:
    // 0x1540a0: 0x50182a  slt         $v1, $v0, $s0
    ctx->pc = 0x1540a0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_1540a4:
    // 0x1540a4: 0x43800b  movn        $s0, $v0, $v1
    ctx->pc = 0x1540a4u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2));
label_1540a8:
    // 0x1540a8: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x1540a8u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1540ac:
    // 0x1540ac: 0x0  nop
    ctx->pc = 0x1540acu;
    // NOP
label_1540b0:
    // 0x1540b0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1540b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1540b4:
    // 0x1540b4: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1540b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_1540b8:
    // 0x1540b8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1540b8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1540bc:
    // 0x1540bc: 0x46000b06  mov.s       $f12, $f1
    ctx->pc = 0x1540bcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[1]);
label_1540c0:
    // 0x1540c0: 0xc09b12a  jal         func_26C4A8
label_1540c4:
    if (ctx->pc == 0x1540C4u) {
        ctx->pc = 0x1540C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1540C0u;
        // 0x1540c4: 0xe6210044  swc1        $f1, 0x44($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 68), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1540C8u;
        goto label_1540c8;
    }
    ctx->pc = 0x1540C0u;
    SET_GPR_U32(ctx, 31, 0x1540C8u);
    ctx->pc = 0x1540C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1540C0u;
    // 0x1540c4: 0xe6210044  swc1        $f1, 0x44($s1) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 68), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C4A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26C4A8u, 0x1540C0u, 0x1540C8u)) {
        return;
    }
    ctx->pc = 0x1540C8u;
label_1540c8:
    // 0x1540c8: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1540c8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_1540cc:
    // 0x1540cc: 0x44070800  mfc1        $a3, $f1
    ctx->pc = 0x1540ccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
label_1540d0:
    // 0x1540d0: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x1540d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
label_1540d4:
    // 0x1540d4: 0x24a527b8  addiu       $a1, $a1, 0x27B8
    ctx->pc = 0x1540d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10168));
label_1540d8:
    // 0x1540d8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1540d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1540dc:
    // 0x1540dc: 0xc0c5380  jal         func_314E00
label_1540e0:
    if (ctx->pc == 0x1540E0u) {
        ctx->pc = 0x1540E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1540DCu;
        // 0x1540e0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1540E4u;
        goto label_1540e4;
    }
    ctx->pc = 0x1540DCu;
    SET_GPR_U32(ctx, 31, 0x1540E4u);
    ctx->pc = 0x1540E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1540DCu;
    // 0x1540e0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x314E00u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x314E00u, 0x1540DCu, 0x1540E4u)) {
        return;
    }
    ctx->pc = 0x1540E4u;
label_1540e4:
    // 0x1540e4: 0xc085ba8  jal         func_216EA0
label_1540e8:
    if (ctx->pc == 0x1540E8u) {
        ctx->pc = 0x1540E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1540E4u;
        // 0x1540e8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1540ECu;
        goto label_1540ec;
    }
    ctx->pc = 0x1540E4u;
    SET_GPR_U32(ctx, 31, 0x1540ECu);
    ctx->pc = 0x1540E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1540E4u;
    // 0x1540e8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x216EA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x216EA0u, 0x1540E4u, 0x1540ECu)) {
        return;
    }
    ctx->pc = 0x1540ECu;
label_1540ec:
    // 0x1540ec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1540ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1540f0:
    // 0x1540f0: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x1540f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
label_1540f4:
    // 0x1540f4: 0x24482848  addiu       $t0, $v0, 0x2848
    ctx->pc = 0x1540f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 10312));
label_1540f8:
    // 0x1540f8: 0x89030003  lwl         $v1, 0x3($t0)
    ctx->pc = 0x1540f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
label_1540fc:
    // 0x1540fc: 0x99030000  lwr         $v1, 0x0($t0)
    ctx->pc = 0x1540fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
label_154100:
    // 0x154100: 0xaba30023  swl         $v1, 0x23($sp)
    ctx->pc = 0x154100u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 35); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_154104:
    // 0x154104: 0xbba30020  swr         $v1, 0x20($sp)
    ctx->pc = 0x154104u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_154108:
    // 0x154108: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
label_15410c:
    if (ctx->pc == 0x15410Cu) {
        ctx->pc = 0x15410Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154108u;
        // 0x15410c: 0x27a70020  addiu       $a3, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154110u;
        goto label_154110;
    }
    ctx->pc = 0x154108u;
    {
        const bool branch_taken_0x154108 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x15410Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154108u;
        // 0x15410c: 0x27a70020  addiu       $a3, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154108) {
            ctx->pc = 0x15412Cu;
            goto label_15412c;
        }
    }
    ctx->pc = 0x154110u;
label_154110:
    // 0x154110: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x154110u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
label_154114:
    // 0x154114: 0x3c014110  lui         $at, 0x4110
    ctx->pc = 0x154114u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16656 << 16));
label_154118:
    // 0x154118: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x154118u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_15411c:
    // 0x15411c: 0x24c62850  addiu       $a2, $a2, 0x2850
    ctx->pc = 0x15411cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 10320));
label_154120:
    // 0x154120: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x154120u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_154124:
    // 0x154124: 0xc085cec  jal         func_2173B0
label_154128:
    if (ctx->pc == 0x154128u) {
        ctx->pc = 0x154128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154124u;
        // 0x154128: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15412Cu;
        goto label_15412c;
    }
    ctx->pc = 0x154124u;
    SET_GPR_U32(ctx, 31, 0x15412Cu);
    ctx->pc = 0x154128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154124u;
    // 0x154128: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2173B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2173B0u, 0x154124u, 0x15412Cu)) {
        return;
    }
    ctx->pc = 0x15412Cu;
label_15412c:
    // 0x15412c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x15412cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_154130:
    // 0x154130: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x154130u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_154134:
    // 0x154134: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x154134u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_154138:
    // 0x154138: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x154138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_15413c:
    // 0x15413c: 0x3e00008  jr          $ra
label_154140:
    if (ctx->pc == 0x154140u) {
        ctx->pc = 0x154140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15413Cu;
        // 0x154140: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154144u;
        goto label_154144;
    }
    ctx->pc = 0x15413Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x154140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15413Cu;
        // 0x154140: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15413Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x154144u;
label_154144:
    // 0x154144: 0x0  nop
    ctx->pc = 0x154144u;
    // NOP
    ctx->pc = 0x154148u;
}
