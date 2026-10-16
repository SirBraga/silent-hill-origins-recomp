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

// Function: sub_00162710
// Address: 0x162710 - 0x162928
void sub_00162710_0x162710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00162710_0x162710");
#endif

    switch (ctx->pc) {
        case 0x162730u: goto label_162730;
        case 0x162744u: goto label_162744;
        case 0x162760u: goto label_162760;
        case 0x16283cu: goto label_16283c;
        case 0x16285cu: goto label_16285c;
        case 0x162878u: goto label_162878;
        case 0x16289cu: goto label_16289c;
        case 0x1628b0u: goto label_1628b0;
        case 0x1628fcu: goto label_1628fc;
        default: break;
    }

    ctx->pc = 0x162710u;

    // 0x162710: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x162710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x162714: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x162714u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x162718: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x162718u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x16271c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x16271cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162720: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x162720u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x162724: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x162724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x162728: 0xc04efda  jal         func_13BF68
    ctx->pc = 0x162728u;
    SET_GPR_U32(ctx, 31, 0x162730u);
    ctx->pc = 0x16272Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162728u;
    // 0x16272c: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13BF68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13BF68u, 0x162728u, 0x162730u)) {
        return;
    }
    ctx->pc = 0x162730u;
label_162730:
    // 0x162730: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x162730u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x162734: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x162734u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162738: 0x8c46f5c8  lw          $a2, -0xA38($v0)
    ctx->pc = 0x162738u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x6BF5C8u));
    // 0x16273c: 0xc07f1c0  jal         func_1FC700
    ctx->pc = 0x16273Cu;
    SET_GPR_U32(ctx, 31, 0x162744u);
    ctx->pc = 0x162740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16273Cu;
    // 0x162740: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC700u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC700u, 0x16273Cu, 0x162744u)) {
        return;
    }
    ctx->pc = 0x162744u;
label_162744:
    // 0x162744: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x162744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x162748: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x162748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16274c: 0x1060004e  beqz        $v1, . + 4 + (0x4E << 2)
    ctx->pc = 0x16274Cu;
    {
        const bool branch_taken_0x16274c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x162750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16274Cu;
        // 0x162750: 0x27b20010  addiu       $s2, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16274c) {
            ctx->pc = 0x162888u;
            goto label_162888;
        }
    }
    ctx->pc = 0x162754u;
    // 0x162754: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x162754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x162758: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x162758u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x16275c: 0x0  nop
    ctx->pc = 0x16275cu;
    // NOP
label_162760:
    // 0x162760: 0x2c83000b  sltiu       $v1, $a0, 0xB
    ctx->pc = 0x162760u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
    // 0x162764: 0x1060003d  beqz        $v1, . + 4 + (0x3D << 2)
    ctx->pc = 0x162764u;
    {
        const bool branch_taken_0x162764 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x162768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162764u;
        // 0x162768: 0x3c020069  lui         $v0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162764) {
            ctx->pc = 0x16285Cu;
            goto label_16285c;
        }
    }
    ctx->pc = 0x16276Cu;
    // 0x16276c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x16276cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x162770: 0x24423b60  addiu       $v0, $v0, 0x3B60
    ctx->pc = 0x162770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15200));
    // 0x162774: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x162774u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x162778: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x162778u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16277c: 0x800008  jr          $a0
    ctx->pc = 0x16277Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x162784u: goto label_162784;
            case 0x162794u: goto label_162794;
            case 0x1627A4u: goto label_1627a4;
            case 0x1627B4u: goto label_1627b4;
            case 0x1627C4u: goto label_1627c4;
            case 0x1627D4u: goto label_1627d4;
            case 0x1627E4u: goto label_1627e4;
            case 0x1627F4u: goto label_1627f4;
            case 0x162804u: goto label_162804;
            case 0x162824u: goto label_162824;
            case 0x162844u: goto label_162844;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16277Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x162784u;
label_162784:
    // 0x162784: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x162784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x162788: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x162788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16278c: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x16278Cu;
    {
        const bool branch_taken_0x16278c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x162790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16278Cu;
        // 0x162790: 0xe6001d08  swc1        $f0, 0x1D08($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 7432), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16278c) {
            ctx->pc = 0x16285Cu;
            goto label_16285c;
        }
    }
    ctx->pc = 0x162794u;
label_162794:
    // 0x162794: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x162794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x162798: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x162798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16279c: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x16279Cu;
    {
        const bool branch_taken_0x16279c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1627A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16279Cu;
        // 0x1627a0: 0xe6001d0c  swc1        $f0, 0x1D0C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 7436), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16279c) {
            ctx->pc = 0x16285Cu;
            goto label_16285c;
        }
    }
    ctx->pc = 0x1627A4u;
label_1627a4:
    // 0x1627a4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1627a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1627a8: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1627a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1627ac: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x1627ACu;
    {
        const bool branch_taken_0x1627ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1627B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1627ACu;
        // 0x1627b0: 0xe6001d10  swc1        $f0, 0x1D10($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 7440), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1627ac) {
            ctx->pc = 0x16285Cu;
            goto label_16285c;
        }
    }
    ctx->pc = 0x1627B4u;
label_1627b4:
    // 0x1627b4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1627b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1627b8: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1627b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1627bc: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x1627BCu;
    {
        const bool branch_taken_0x1627bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1627C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1627BCu;
        // 0x1627c0: 0xe6001d14  swc1        $f0, 0x1D14($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 7444), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1627bc) {
            ctx->pc = 0x16285Cu;
            goto label_16285c;
        }
    }
    ctx->pc = 0x1627C4u;
label_1627c4:
    // 0x1627c4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1627c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1627c8: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1627c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1627cc: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x1627CCu;
    {
        const bool branch_taken_0x1627cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1627D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1627CCu;
        // 0x1627d0: 0xe6001d18  swc1        $f0, 0x1D18($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 7448), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1627cc) {
            ctx->pc = 0x16285Cu;
            goto label_16285c;
        }
    }
    ctx->pc = 0x1627D4u;
label_1627d4:
    // 0x1627d4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1627d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1627d8: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1627d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1627dc: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x1627DCu;
    {
        const bool branch_taken_0x1627dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1627E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1627DCu;
        // 0x1627e0: 0xe6001d1c  swc1        $f0, 0x1D1C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 7452), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1627dc) {
            ctx->pc = 0x16285Cu;
            goto label_16285c;
        }
    }
    ctx->pc = 0x1627E4u;
label_1627e4:
    // 0x1627e4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1627e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1627e8: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1627e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1627ec: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x1627ECu;
    {
        const bool branch_taken_0x1627ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1627F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1627ECu;
        // 0x1627f0: 0xe6001d20  swc1        $f0, 0x1D20($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 7456), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1627ec) {
            ctx->pc = 0x16285Cu;
            goto label_16285c;
        }
    }
    ctx->pc = 0x1627F4u;
label_1627f4:
    // 0x1627f4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1627f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1627f8: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1627f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1627fc: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1627FCu;
    {
        const bool branch_taken_0x1627fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x162800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1627FCu;
        // 0x162800: 0xe6001d24  swc1        $f0, 0x1D24($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 7460), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1627fc) {
            ctx->pc = 0x16285Cu;
            goto label_16285c;
        }
    }
    ctx->pc = 0x162804u;
label_162804:
    // 0x162804: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x162804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x162808: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x162808u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x16280c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x16280Cu;
    {
        const bool branch_taken_0x16280c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x162810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16280Cu;
        // 0x162810: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16280c) {
            ctx->pc = 0x16281Cu;
            goto label_16281c;
        }
    }
    ctx->pc = 0x162814u;
    // 0x162814: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x162814u;
    {
        const bool branch_taken_0x162814 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x162818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162814u;
        // 0x162818: 0xae021d28  sw          $v0, 0x1D28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 7464), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162814) {
            ctx->pc = 0x16285Cu;
            goto label_16285c;
        }
    }
    ctx->pc = 0x16281Cu;
label_16281c:
    // 0x16281c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x16281Cu;
    {
        const bool branch_taken_0x16281c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x162820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16281Cu;
        // 0x162820: 0xae001d28  sw          $zero, 0x1D28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 7464), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16281c) {
            ctx->pc = 0x16285Cu;
            goto label_16285c;
        }
    }
    ctx->pc = 0x162824u;
label_162824:
    // 0x162824: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x162824u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x162828: 0x26040038  addiu       $a0, $s0, 0x38
    ctx->pc = 0x162828u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
    // 0x16282c: 0x26051d2c  addiu       $a1, $s0, 0x1D2C
    ctx->pc = 0x16282cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 7468));
    // 0x162830: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x162830u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162834: 0xc07fcf4  jal         func_1FF3D0
    ctx->pc = 0x162834u;
    SET_GPR_U32(ctx, 31, 0x16283Cu);
    ctx->pc = 0x162838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162834u;
    // 0x162838: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF3D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF3D0u, 0x162834u, 0x16283Cu)) {
        return;
    }
    ctx->pc = 0x16283Cu;
label_16283c:
    // 0x16283c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x16283Cu;
    {
        const bool branch_taken_0x16283c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x162840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16283Cu;
        // 0x162840: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16283c) {
            ctx->pc = 0x162860u;
            goto label_162860;
        }
    }
    ctx->pc = 0x162844u;
label_162844:
    // 0x162844: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x162844u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x162848: 0x26040038  addiu       $a0, $s0, 0x38
    ctx->pc = 0x162848u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
    // 0x16284c: 0x26051d34  addiu       $a1, $s0, 0x1D34
    ctx->pc = 0x16284cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 7476));
    // 0x162850: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x162850u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162854: 0xc07fcf4  jal         func_1FF3D0
    ctx->pc = 0x162854u;
    SET_GPR_U32(ctx, 31, 0x16285Cu);
    ctx->pc = 0x162858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162854u;
    // 0x162858: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF3D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF3D0u, 0x162854u, 0x16285Cu)) {
        return;
    }
    ctx->pc = 0x16285Cu;
label_16285c:
    // 0x16285c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x16285cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_162860:
    // 0x162860: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x162860u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162864: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x162864u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x162868: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x162868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16286c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x16286cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x162870: 0xc07f0c8  jal         func_1FC320
    ctx->pc = 0x162870u;
    SET_GPR_U32(ctx, 31, 0x162878u);
    ctx->pc = 0x162874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162870u;
    // 0x162874: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC320u, 0x162870u, 0x162878u)) {
        return;
    }
    ctx->pc = 0x162878u;
label_162878:
    // 0x162878: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x162878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16287c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x16287cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x162880: 0x5460ffb7  bnel        $v1, $zero, . + 4 + (-0x49 << 2)
    ctx->pc = 0x162880u;
    {
        const bool branch_taken_0x162880 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x162880) {
            ctx->pc = 0x162884u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x162880u;
            // 0x162884: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x162760u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_162760;
        }
    }
    ctx->pc = 0x162888u;
label_162888:
    // 0x162888: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x162888u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x16288c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x16288cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162890: 0x8c461a68  lw          $a2, 0x1A68($v0)
    ctx->pc = 0x162890u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x701A68u));
    // 0x162894: 0xc07f1c0  jal         func_1FC700
    ctx->pc = 0x162894u;
    SET_GPR_U32(ctx, 31, 0x16289Cu);
    ctx->pc = 0x162898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162894u;
    // 0x162898: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC700u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC700u, 0x162894u, 0x16289Cu)) {
        return;
    }
    ctx->pc = 0x16289Cu;
label_16289c:
    // 0x16289c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x16289cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1628a0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1628a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1628a4: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1628A4u;
    {
        const bool branch_taken_0x1628a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1628A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1628A4u;
        // 0x1628a8: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1628a4) {
            ctx->pc = 0x16290Cu;
            goto label_16290c;
        }
    }
    ctx->pc = 0x1628ACu;
    // 0x1628ac: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1628acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1628b0:
    // 0x1628b0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1628b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1628b4: 0x1451000c  bne         $v0, $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x1628B4u;
    {
        const bool branch_taken_0x1628b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x1628B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1628B4u;
        // 0x1628b8: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1628b4) {
            ctx->pc = 0x1628E8u;
            goto label_1628e8;
        }
    }
    ctx->pc = 0x1628BCu;
    // 0x1628bc: 0x24620008  addiu       $v0, $v1, 0x8
    ctx->pc = 0x1628bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x1628c0: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x1628c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1628c4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1628c4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1628c8: 0xe6001d94  swc1        $f0, 0x1D94($s0)
    ctx->pc = 0x1628c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 7572), bits); }
    // 0x1628cc: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x1628ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1628d0: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x1628d0u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x1628d4: 0xe6011d98  swc1        $f1, 0x1D98($s0)
    ctx->pc = 0x1628d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 7576), bits); }
    // 0x1628d8: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x1628d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1628dc: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1628dcu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1628e0: 0xe6001d9c  swc1        $f0, 0x1D9C($s0)
    ctx->pc = 0x1628e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 7580), bits); }
    // 0x1628e4: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1628e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1628e8:
    // 0x1628e8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1628e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1628ec: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1628ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1628f0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1628f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1628f4: 0xc07f0c8  jal         func_1FC320
    ctx->pc = 0x1628F4u;
    SET_GPR_U32(ctx, 31, 0x1628FCu);
    ctx->pc = 0x1628F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1628F4u;
    // 0x1628f8: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC320u, 0x1628F4u, 0x1628FCu)) {
        return;
    }
    ctx->pc = 0x1628FCu;
label_1628fc:
    // 0x1628fc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1628fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x162900: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x162900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x162904: 0x1460ffea  bnez        $v1, . + 4 + (-0x16 << 2)
    ctx->pc = 0x162904u;
    {
        const bool branch_taken_0x162904 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x162908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162904u;
        // 0x162908: 0x8fa30010  lw          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162904) {
            ctx->pc = 0x1628B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1628b0;
        }
    }
    ctx->pc = 0x16290Cu;
label_16290c:
    // 0x16290c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x16290cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x162910: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x162910u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x162914: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x162914u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x162918: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x162918u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16291c: 0x3e00008  jr          $ra
    ctx->pc = 0x16291Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x162920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16291Cu;
        // 0x162920: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16291Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x162924u;
    // 0x162924: 0x0  nop
    ctx->pc = 0x162924u;
    // NOP
    ctx->pc = 0x162928u;
}
