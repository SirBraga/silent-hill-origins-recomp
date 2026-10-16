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

// Function: sub_0015F2E0
// Address: 0x15f2e0 - 0x15f4e0
void sub_0015F2E0_0x15f2e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015F2E0_0x15f2e0");
#endif

    switch (ctx->pc) {
        case 0x15f2fcu: goto label_15f2fc;
        case 0x15f310u: goto label_15f310;
        case 0x15f328u: goto label_15f328;
        case 0x15f378u: goto label_15f378;
        case 0x15f44cu: goto label_15f44c;
        case 0x15f4bcu: goto label_15f4bc;
        default: break;
    }

    ctx->pc = 0x15f2e0u;

    // 0x15f2e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x15f2e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x15f2e4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x15f2e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x15f2e8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x15f2e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x15f2ec: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x15f2ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f2f0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x15f2f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x15f2f4: 0xc04efda  jal         func_13BF68
    ctx->pc = 0x15F2F4u;
    SET_GPR_U32(ctx, 31, 0x15F2FCu);
    ctx->pc = 0x15F2F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15F2F4u;
    // 0x15f2f8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13BF68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13BF68u, 0x15F2F4u, 0x15F2FCu)) {
        return;
    }
    ctx->pc = 0x15F2FCu;
label_15f2fc:
    // 0x15f2fc: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x15f2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x15f300: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x15f300u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f304: 0x8c46f580  lw          $a2, -0xA80($v0)
    ctx->pc = 0x15f304u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x6BF580u));
    // 0x15f308: 0xc07f1c0  jal         func_1FC700
    ctx->pc = 0x15F308u;
    SET_GPR_U32(ctx, 31, 0x15F310u);
    ctx->pc = 0x15F30Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15F308u;
    // 0x15f30c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC700u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC700u, 0x15F308u, 0x15F310u)) {
        return;
    }
    ctx->pc = 0x15F310u;
label_15f310:
    // 0x15f310: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x15f310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15f314: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x15f314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x15f318: 0x1040006d  beqz        $v0, . + 4 + (0x6D << 2)
    ctx->pc = 0x15F318u;
    {
        const bool branch_taken_0x15f318 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F318u;
        // 0x15f31c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f318) {
            ctx->pc = 0x15F4D0u;
            goto label_15f4d0;
        }
    }
    ctx->pc = 0x15F320u;
    // 0x15f320: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x15f320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15f324: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x15f324u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15f328:
    // 0x15f328: 0x2c830013  sltiu       $v1, $a0, 0x13
    ctx->pc = 0x15f328u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)19) ? 1 : 0);
    // 0x15f32c: 0x1060005c  beqz        $v1, . + 4 + (0x5C << 2)
    ctx->pc = 0x15F32Cu;
    {
        const bool branch_taken_0x15f32c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F32Cu;
        // 0x15f330: 0x3c020069  lui         $v0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f32c) {
            ctx->pc = 0x15F4A0u;
            goto label_15f4a0;
        }
    }
    ctx->pc = 0x15F334u;
    // 0x15f334: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x15f334u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x15f338: 0x244234e0  addiu       $v0, $v0, 0x34E0
    ctx->pc = 0x15f338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13536));
    // 0x15f33c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x15f33cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x15f340: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x15f340u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x15f344: 0x800008  jr          $a0
    ctx->pc = 0x15F344u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15F34Cu: goto label_15f34c;
            case 0x15F35Cu: goto label_15f35c;
            case 0x15F380u: goto label_15f380;
            case 0x15F390u: goto label_15f390;
            case 0x15F3A0u: goto label_15f3a0;
            case 0x15F3B0u: goto label_15f3b0;
            case 0x15F3C0u: goto label_15f3c0;
            case 0x15F3D0u: goto label_15f3d0;
            case 0x15F3E0u: goto label_15f3e0;
            case 0x15F3F0u: goto label_15f3f0;
            case 0x15F400u: goto label_15f400;
            case 0x15F410u: goto label_15f410;
            case 0x15F420u: goto label_15f420;
            case 0x15F430u: goto label_15f430;
            case 0x15F454u: goto label_15f454;
            case 0x15F464u: goto label_15f464;
            case 0x15F474u: goto label_15f474;
            case 0x15F484u: goto label_15f484;
            case 0x15F494u: goto label_15f494;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15F344u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x15F34Cu;
label_15f34c:
    // 0x15f34c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x15f34cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15f350: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x15f350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x15f354: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x15F354u;
    {
        const bool branch_taken_0x15f354 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F354u;
        // 0x15f358: 0xae220048  sw          $v0, 0x48($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f354) {
            ctx->pc = 0x15F4A0u;
            goto label_15f4a0;
        }
    }
    ctx->pc = 0x15F35Cu;
label_15f35c:
    // 0x15f35c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x15f35cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15f360: 0x8e240050  lw          $a0, 0x50($s1)
    ctx->pc = 0x15f360u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x15f364: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x15f364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x15f368: 0x1080004d  beqz        $a0, . + 4 + (0x4D << 2)
    ctx->pc = 0x15F368u;
    {
        const bool branch_taken_0x15f368 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F368u;
        // 0x15f36c: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f368) {
            ctx->pc = 0x15F4A0u;
            goto label_15f4a0;
        }
    }
    ctx->pc = 0x15F370u;
    // 0x15f370: 0xc0808d4  jal         func_202350
    ctx->pc = 0x15F370u;
    SET_GPR_U32(ctx, 31, 0x15F378u);
    ctx->pc = 0x202350u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202350u, 0x15F370u, 0x15F378u)) {
        return;
    }
    ctx->pc = 0x15F378u;
label_15f378:
    // 0x15f378: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x15F378u;
    {
        const bool branch_taken_0x15f378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F378u;
        // 0x15f37c: 0xae200050  sw          $zero, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f378) {
            ctx->pc = 0x15F4A0u;
            goto label_15f4a0;
        }
    }
    ctx->pc = 0x15F380u;
label_15f380:
    // 0x15f380: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x15f380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15f384: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x15f384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15f388: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x15F388u;
    {
        const bool branch_taken_0x15f388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F388u;
        // 0x15f38c: 0xe6200058  swc1        $f0, 0x58($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 88), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f388) {
            ctx->pc = 0x15F4A0u;
            goto label_15f4a0;
        }
    }
    ctx->pc = 0x15F390u;
label_15f390:
    // 0x15f390: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x15f390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15f394: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x15f394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15f398: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x15F398u;
    {
        const bool branch_taken_0x15f398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F398u;
        // 0x15f39c: 0xe6200060  swc1        $f0, 0x60($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 96), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f398) {
            ctx->pc = 0x15F4A0u;
            goto label_15f4a0;
        }
    }
    ctx->pc = 0x15F3A0u;
label_15f3a0:
    // 0x15f3a0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x15f3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15f3a4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x15f3a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15f3a8: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x15F3A8u;
    {
        const bool branch_taken_0x15f3a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F3A8u;
        // 0x15f3ac: 0xe620005c  swc1        $f0, 0x5C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 92), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f3a8) {
            ctx->pc = 0x15F4A0u;
            goto label_15f4a0;
        }
    }
    ctx->pc = 0x15F3B0u;
label_15f3b0:
    // 0x15f3b0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x15f3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15f3b4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x15f3b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15f3b8: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x15F3B8u;
    {
        const bool branch_taken_0x15f3b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F3B8u;
        // 0x15f3bc: 0xe6200064  swc1        $f0, 0x64($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 100), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f3b8) {
            ctx->pc = 0x15F4A0u;
            goto label_15f4a0;
        }
    }
    ctx->pc = 0x15F3C0u;
label_15f3c0:
    // 0x15f3c0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x15f3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15f3c4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x15f3c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15f3c8: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x15F3C8u;
    {
        const bool branch_taken_0x15f3c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F3C8u;
        // 0x15f3cc: 0xe6200068  swc1        $f0, 0x68($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 104), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f3c8) {
            ctx->pc = 0x15F4A0u;
            goto label_15f4a0;
        }
    }
    ctx->pc = 0x15F3D0u;
label_15f3d0:
    // 0x15f3d0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x15f3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15f3d4: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x15f3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x15f3d8: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x15F3D8u;
    {
        const bool branch_taken_0x15f3d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F3D8u;
        // 0x15f3dc: 0xae2300b4  sw          $v1, 0xB4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 180), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f3d8) {
            ctx->pc = 0x15F4A0u;
            goto label_15f4a0;
        }
    }
    ctx->pc = 0x15F3E0u;
label_15f3e0:
    // 0x15f3e0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x15f3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15f3e4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x15f3e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15f3e8: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x15F3E8u;
    {
        const bool branch_taken_0x15f3e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F3E8u;
        // 0x15f3ec: 0xe62000a4  swc1        $f0, 0xA4($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 164), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f3e8) {
            ctx->pc = 0x15F4A0u;
            goto label_15f4a0;
        }
    }
    ctx->pc = 0x15F3F0u;
label_15f3f0:
    // 0x15f3f0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x15f3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15f3f4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x15f3f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15f3f8: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x15F3F8u;
    {
        const bool branch_taken_0x15f3f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F3F8u;
        // 0x15f3fc: 0xe62000ac  swc1        $f0, 0xAC($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 172), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f3f8) {
            ctx->pc = 0x15F4A0u;
            goto label_15f4a0;
        }
    }
    ctx->pc = 0x15F400u;
label_15f400:
    // 0x15f400: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x15f400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15f404: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x15f404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15f408: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x15F408u;
    {
        const bool branch_taken_0x15f408 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F408u;
        // 0x15f40c: 0xe620009c  swc1        $f0, 0x9C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 156), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f408) {
            ctx->pc = 0x15F4A0u;
            goto label_15f4a0;
        }
    }
    ctx->pc = 0x15F410u;
label_15f410:
    // 0x15f410: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x15f410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15f414: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x15f414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15f418: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x15F418u;
    {
        const bool branch_taken_0x15f418 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F418u;
        // 0x15f41c: 0xe62000a0  swc1        $f0, 0xA0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 160), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f418) {
            ctx->pc = 0x15F4A0u;
            goto label_15f4a0;
        }
    }
    ctx->pc = 0x15F420u;
label_15f420:
    // 0x15f420: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x15f420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15f424: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x15f424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15f428: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x15F428u;
    {
        const bool branch_taken_0x15f428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F428u;
        // 0x15f42c: 0xe6200098  swc1        $f0, 0x98($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 152), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f428) {
            ctx->pc = 0x15F4A0u;
            goto label_15f4a0;
        }
    }
    ctx->pc = 0x15F430u;
label_15f430:
    // 0x15f430: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x15f430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15f434: 0x8e24006c  lw          $a0, 0x6C($s1)
    ctx->pc = 0x15f434u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
    // 0x15f438: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x15f438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x15f43c: 0x10800018  beqz        $a0, . + 4 + (0x18 << 2)
    ctx->pc = 0x15F43Cu;
    {
        const bool branch_taken_0x15f43c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F43Cu;
        // 0x15f440: 0xae220070  sw          $v0, 0x70($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f43c) {
            ctx->pc = 0x15F4A0u;
            goto label_15f4a0;
        }
    }
    ctx->pc = 0x15F444u;
    // 0x15f444: 0xc0808d4  jal         func_202350
    ctx->pc = 0x15F444u;
    SET_GPR_U32(ctx, 31, 0x15F44Cu);
    ctx->pc = 0x202350u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202350u, 0x15F444u, 0x15F44Cu)) {
        return;
    }
    ctx->pc = 0x15F44Cu;
label_15f44c:
    // 0x15f44c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x15F44Cu;
    {
        const bool branch_taken_0x15f44c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F44Cu;
        // 0x15f450: 0xae20006c  sw          $zero, 0x6C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 108), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f44c) {
            ctx->pc = 0x15F4A0u;
            goto label_15f4a0;
        }
    }
    ctx->pc = 0x15F454u;
label_15f454:
    // 0x15f454: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x15f454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15f458: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x15f458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15f45c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x15F45Cu;
    {
        const bool branch_taken_0x15f45c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F45Cu;
        // 0x15f460: 0xe6200074  swc1        $f0, 0x74($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 116), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f45c) {
            ctx->pc = 0x15F4A0u;
            goto label_15f4a0;
        }
    }
    ctx->pc = 0x15F464u;
label_15f464:
    // 0x15f464: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x15f464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15f468: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x15f468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15f46c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x15F46Cu;
    {
        const bool branch_taken_0x15f46c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F46Cu;
        // 0x15f470: 0xe620007c  swc1        $f0, 0x7C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 124), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f46c) {
            ctx->pc = 0x15F4A0u;
            goto label_15f4a0;
        }
    }
    ctx->pc = 0x15F474u;
label_15f474:
    // 0x15f474: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x15f474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15f478: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x15f478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15f47c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x15F47Cu;
    {
        const bool branch_taken_0x15f47c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F47Cu;
        // 0x15f480: 0xe6200078  swc1        $f0, 0x78($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 120), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f47c) {
            ctx->pc = 0x15F4A0u;
            goto label_15f4a0;
        }
    }
    ctx->pc = 0x15F484u;
label_15f484:
    // 0x15f484: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x15f484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15f488: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x15f488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15f48c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x15F48Cu;
    {
        const bool branch_taken_0x15f48c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F48Cu;
        // 0x15f490: 0xe6200080  swc1        $f0, 0x80($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 128), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f48c) {
            ctx->pc = 0x15F4A0u;
            goto label_15f4a0;
        }
    }
    ctx->pc = 0x15F494u;
label_15f494:
    // 0x15f494: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x15f494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15f498: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x15f498u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15f49c: 0xe6200084  swc1        $f0, 0x84($s1)
    ctx->pc = 0x15f49cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 132), bits); }
label_15f4a0:
    // 0x15f4a0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x15f4a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15f4a4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x15f4a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f4a8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15f4a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15f4ac: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x15f4acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x15f4b0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x15f4b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x15f4b4: 0xc07f0c8  jal         func_1FC320
    ctx->pc = 0x15F4B4u;
    SET_GPR_U32(ctx, 31, 0x15F4BCu);
    ctx->pc = 0x15F4B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15F4B4u;
    // 0x15f4b8: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC320u, 0x15F4B4u, 0x15F4BCu)) {
        return;
    }
    ctx->pc = 0x15F4BCu;
label_15f4bc:
    // 0x15f4bc: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x15f4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15f4c0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x15f4c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15f4c4: 0x5460ff98  bnel        $v1, $zero, . + 4 + (-0x68 << 2)
    ctx->pc = 0x15F4C4u;
    {
        const bool branch_taken_0x15f4c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15f4c4) {
            ctx->pc = 0x15F4C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15F4C4u;
            // 0x15f4c8: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15F328u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15f328;
        }
    }
    ctx->pc = 0x15F4CCu;
    // 0x15f4cc: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x15f4ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_15f4d0:
    // 0x15f4d0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x15f4d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15f4d4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x15f4d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15f4d8: 0x3e00008  jr          $ra
    ctx->pc = 0x15F4D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15F4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F4D8u;
        // 0x15f4dc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15F4D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15F4E0u;
}
