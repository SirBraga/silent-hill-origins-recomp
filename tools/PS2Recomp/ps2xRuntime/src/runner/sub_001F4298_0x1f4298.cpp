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

// Function: sub_001F4298
// Address: 0x1f4298 - 0x1f4358
void sub_001F4298_0x1f4298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F4298_0x1f4298");
#endif

    switch (ctx->pc) {
        case 0x1f4298u: goto label_1f4298;
        case 0x1f429cu: goto label_1f429c;
        case 0x1f42a0u: goto label_1f42a0;
        case 0x1f42a4u: goto label_1f42a4;
        case 0x1f42a8u: goto label_1f42a8;
        case 0x1f42acu: goto label_1f42ac;
        case 0x1f42b0u: goto label_1f42b0;
        case 0x1f42b4u: goto label_1f42b4;
        case 0x1f42b8u: goto label_1f42b8;
        case 0x1f42bcu: goto label_1f42bc;
        case 0x1f42c0u: goto label_1f42c0;
        case 0x1f42c4u: goto label_1f42c4;
        case 0x1f42c8u: goto label_1f42c8;
        case 0x1f42ccu: goto label_1f42cc;
        case 0x1f42d0u: goto label_1f42d0;
        case 0x1f42d4u: goto label_1f42d4;
        case 0x1f42d8u: goto label_1f42d8;
        case 0x1f42dcu: goto label_1f42dc;
        case 0x1f42e0u: goto label_1f42e0;
        case 0x1f42e4u: goto label_1f42e4;
        case 0x1f42e8u: goto label_1f42e8;
        case 0x1f42ecu: goto label_1f42ec;
        case 0x1f42f0u: goto label_1f42f0;
        case 0x1f42f4u: goto label_1f42f4;
        case 0x1f42f8u: goto label_1f42f8;
        case 0x1f42fcu: goto label_1f42fc;
        case 0x1f4300u: goto label_1f4300;
        case 0x1f4304u: goto label_1f4304;
        case 0x1f4308u: goto label_1f4308;
        case 0x1f430cu: goto label_1f430c;
        case 0x1f4310u: goto label_1f4310;
        case 0x1f4314u: goto label_1f4314;
        case 0x1f4318u: goto label_1f4318;
        case 0x1f431cu: goto label_1f431c;
        case 0x1f4320u: goto label_1f4320;
        case 0x1f4324u: goto label_1f4324;
        case 0x1f4328u: goto label_1f4328;
        case 0x1f432cu: goto label_1f432c;
        case 0x1f4330u: goto label_1f4330;
        case 0x1f4334u: goto label_1f4334;
        case 0x1f4338u: goto label_1f4338;
        case 0x1f433cu: goto label_1f433c;
        case 0x1f4340u: goto label_1f4340;
        case 0x1f4344u: goto label_1f4344;
        case 0x1f4348u: goto label_1f4348;
        case 0x1f434cu: goto label_1f434c;
        case 0x1f4350u: goto label_1f4350;
        case 0x1f4354u: goto label_1f4354;
        default: break;
    }

    ctx->pc = 0x1f4298u;

label_1f4298:
    // 0x1f4298: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1f4298u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1f429c:
    // 0x1f429c: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x1f429cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
label_1f42a0:
    // 0x1f42a0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1f42a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_1f42a4:
    // 0x1f42a4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1f42a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1f42a8:
    // 0x1f42a8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1f42a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_1f42ac:
    // 0x1f42ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f42acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1f42b0:
    // 0x1f42b0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1f42b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1f42b4:
    // 0x1f42b4: 0x24510fd8  addiu       $s1, $v0, 0xFD8
    ctx->pc = 0x1f42b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4056));
label_1f42b8:
    // 0x1f42b8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1f42b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1f42bc:
    // 0x1f42bc: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x1f42bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_1f42c0:
    // 0x1f42c0: 0x40f809  jalr        $v0
label_1f42c4:
    if (ctx->pc == 0x1F42C4u) {
        ctx->pc = 0x1F42C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F42C0u;
        // 0x1f42c4: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F42C8u;
        goto label_1f42c8;
    }
    ctx->pc = 0x1F42C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F42C8u);
        ctx->pc = 0x1F42C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F42C0u;
        // 0x1f42c4: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F42C0u, 0x1F42C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F42C8u;
label_1f42c8:
    // 0x1f42c8: 0x27b20004  addiu       $s2, $sp, 0x4
    ctx->pc = 0x1f42c8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
label_1f42cc:
    // 0x1f42cc: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x1f42ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_1f42d0:
    // 0x1f42d0: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x1f42d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1f42d4:
    // 0x1f42d4: 0x40f809  jalr        $v0
label_1f42d8:
    if (ctx->pc == 0x1F42D8u) {
        ctx->pc = 0x1F42D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F42D4u;
        // 0x1f42d8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F42DCu;
        goto label_1f42dc;
    }
    ctx->pc = 0x1F42D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F42DCu);
        ctx->pc = 0x1F42D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F42D4u;
        // 0x1f42d8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F42D4u, 0x1F42DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F42DCu;
label_1f42dc:
    // 0x1f42dc: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1f42dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1f42e0:
    // 0x1f42e0: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x1f42e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1f42e4:
    // 0x1f42e4: 0x40f809  jalr        $v0
label_1f42e8:
    if (ctx->pc == 0x1F42E8u) {
        ctx->pc = 0x1F42E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F42E4u;
        // 0x1f42e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F42ECu;
        goto label_1f42ec;
    }
    ctx->pc = 0x1F42E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F42ECu);
        ctx->pc = 0x1F42E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F42E4u;
        // 0x1f42e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F42E4u, 0x1F42ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F42ECu;
label_1f42ec:
    // 0x1f42ec: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1f42ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1f42f0:
    // 0x1f42f0: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x1f42f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1f42f4:
    // 0x1f42f4: 0x40f809  jalr        $v0
label_1f42f8:
    if (ctx->pc == 0x1F42F8u) {
        ctx->pc = 0x1F42F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F42F4u;
        // 0x1f42f8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F42FCu;
        goto label_1f42fc;
    }
    ctx->pc = 0x1F42F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F42FCu);
        ctx->pc = 0x1F42F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F42F4u;
        // 0x1f42f8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F42F4u, 0x1F42FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F42FCu;
label_1f42fc:
    // 0x1f42fc: 0xc6000018  lwc1        $f0, 0x18($s0)
    ctx->pc = 0x1f42fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f4300:
    // 0x1f4300: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x1f4300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f4304:
    // 0x1f4304: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x1f4304u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1f4308:
    // 0x1f4308: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x1f4308u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1f430c:
    // 0x1f430c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_1f4310:
    if (ctx->pc == 0x1F4310u) {
        ctx->pc = 0x1F4310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F430Cu;
        // 0x1f4310: 0xe7a1000c  swc1        $f1, 0xC($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F4314u;
        goto label_1f4314;
    }
    ctx->pc = 0x1F430Cu;
    {
        const bool branch_taken_0x1f430c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F4310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F430Cu;
        // 0x1f4310: 0xe7a1000c  swc1        $f1, 0xC($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f430c) {
            ctx->pc = 0x1F4320u;
            goto label_1f4320;
        }
    }
    ctx->pc = 0x1F4314u;
label_1f4314:
    // 0x1f4314: 0x37a50008  ori         $a1, $sp, 0x8
    ctx->pc = 0x1f4314u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
label_1f4318:
    // 0x1f4318: 0xc07ce78  jal         func_1F39E0
label_1f431c:
    if (ctx->pc == 0x1F431Cu) {
        ctx->pc = 0x1F431Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4318u;
        // 0x1f431c: 0x37a6000c  ori         $a2, $sp, 0xC (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)12);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F4320u;
        goto label_1f4320;
    }
    ctx->pc = 0x1F4318u;
    SET_GPR_U32(ctx, 31, 0x1F4320u);
    ctx->pc = 0x1F431Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4318u;
    // 0x1f431c: 0x37a6000c  ori         $a2, $sp, 0xC (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)12);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F39E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F39E0u, 0x1F4318u, 0x1F4320u)) {
        return;
    }
    ctx->pc = 0x1F4320u;
label_1f4320:
    // 0x1f4320: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1f4320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1f4324:
    // 0x1f4324: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1f4324u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1f4328:
    // 0x1f4328: 0x40f809  jalr        $v0
label_1f432c:
    if (ctx->pc == 0x1F432Cu) {
        ctx->pc = 0x1F432Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4328u;
        // 0x1f432c: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F4330u;
        goto label_1f4330;
    }
    ctx->pc = 0x1F4328u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F4330u);
        ctx->pc = 0x1F432Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4328u;
        // 0x1f432c: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F4328u, 0x1F4330u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F4330u;
label_1f4330:
    // 0x1f4330: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1f4330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1f4334:
    // 0x1f4334: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1f4334u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1f4338:
    // 0x1f4338: 0x40f809  jalr        $v0
label_1f433c:
    if (ctx->pc == 0x1F433Cu) {
        ctx->pc = 0x1F433Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4338u;
        // 0x1f433c: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F4340u;
        goto label_1f4340;
    }
    ctx->pc = 0x1F4338u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F4340u);
        ctx->pc = 0x1F433Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4338u;
        // 0x1f433c: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F4338u, 0x1F4340u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F4340u;
label_1f4340:
    // 0x1f4340: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1f4340u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1f4344:
    // 0x1f4344: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1f4344u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1f4348:
    // 0x1f4348: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1f4348u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1f434c:
    // 0x1f434c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1f434cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1f4350:
    // 0x1f4350: 0x3e00008  jr          $ra
label_1f4354:
    if (ctx->pc == 0x1F4354u) {
        ctx->pc = 0x1F4354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4350u;
        // 0x1f4354: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F4358u;
        goto label_fallthrough_0x1f4350;
    }
    ctx->pc = 0x1F4350u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F4354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4350u;
        // 0x1f4354: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F4350u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1f4350:
    ctx->pc = 0x1F4358u;
}
