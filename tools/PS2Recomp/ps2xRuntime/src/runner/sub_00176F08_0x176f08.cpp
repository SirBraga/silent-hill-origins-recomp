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

// Function: sub_00176F08
// Address: 0x176f08 - 0x1775d8
void sub_00176F08_0x176f08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00176F08_0x176f08");
#endif

    switch (ctx->pc) {
        case 0x176f2cu: goto label_176f2c;
        case 0x176f48u: goto label_176f48;
        case 0x176f60u: goto label_176f60;
        case 0x176f94u: goto label_176f94;
        case 0x176facu: goto label_176fac;
        case 0x176fc4u: goto label_176fc4;
        case 0x1772a8u: goto label_1772a8;
        case 0x1773f4u: goto label_1773f4;
        case 0x17748cu: goto label_17748c;
        case 0x1774a8u: goto label_1774a8;
        case 0x1774bcu: goto label_1774bc;
        case 0x1774d0u: goto label_1774d0;
        case 0x1774e0u: goto label_1774e0;
        case 0x1774e8u: goto label_1774e8;
        case 0x1775b8u: goto label_1775b8;
        default: break;
    }

    ctx->pc = 0x176f08u;

    // 0x176f08: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x176f08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x176f0c: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x176f0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x176f10: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x176f10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x176f14: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x176f14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176f18: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x176f18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176f1c: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x176f1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x176f20: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x176f20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x176f24: 0xc04efda  jal         func_13BF68
    ctx->pc = 0x176F24u;
    SET_GPR_U32(ctx, 31, 0x176F2Cu);
    ctx->pc = 0x176F28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176F24u;
    // 0x176f28: 0xe7b40080  swc1        $f20, 0x80($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x13BF68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13BF68u, 0x176F24u, 0x176F2Cu)) {
        return;
    }
    ctx->pc = 0x176F2Cu;
label_176f2c:
    // 0x176f2c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x176f2cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176f30: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x176f30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x176f34: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x176f34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176f38: 0x8c46f850  lw          $a2, -0x7B0($v0)
    ctx->pc = 0x176f38u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x6BF850u));
    // 0x176f3c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x176f3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176f40: 0xc07f1c0  jal         func_1FC700
    ctx->pc = 0x176F40u;
    SET_GPR_U32(ctx, 31, 0x176F48u);
    ctx->pc = 0x176F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176F40u;
    // 0x176f44: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC700u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC700u, 0x176F40u, 0x176F48u)) {
        return;
    }
    ctx->pc = 0x176F48u;
label_176f48:
    // 0x176f48: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x176f48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x176f4c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x176f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x176f50: 0x1040012c  beqz        $v0, . + 4 + (0x12C << 2)
    ctx->pc = 0x176F50u;
    {
        const bool branch_taken_0x176f50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x176f50) {
            ctx->pc = 0x177404u;
            goto label_177404;
        }
    }
    ctx->pc = 0x176F58u;
    // 0x176f58: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x176f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x176f5c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x176f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_176f60:
    // 0x176f60: 0x2c83001b  sltiu       $v1, $a0, 0x1B
    ctx->pc = 0x176f60u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)27) ? 1 : 0);
    // 0x176f64: 0x1060011c  beqz        $v1, . + 4 + (0x11C << 2)
    ctx->pc = 0x176F64u;
    {
        const bool branch_taken_0x176f64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x176F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176F64u;
        // 0x176f68: 0x3c020069  lui         $v0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176f64) {
            ctx->pc = 0x1773D8u;
            goto label_1773d8;
        }
    }
    ctx->pc = 0x176F6Cu;
    // 0x176f6c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x176f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x176f70: 0x244267b0  addiu       $v0, $v0, 0x67B0
    ctx->pc = 0x176f70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26544));
    // 0x176f74: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x176f74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x176f78: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x176f78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x176f7c: 0x800008  jr          $a0
    ctx->pc = 0x176F7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x176F84u: goto label_176f84;
            case 0x176F9Cu: goto label_176f9c;
            case 0x176FB4u: goto label_176fb4;
            case 0x176FCCu: goto label_176fcc;
            case 0x176FF0u: goto label_176ff0;
            case 0x177010u: goto label_177010;
            case 0x177130u: goto label_177130;
            case 0x177140u: goto label_177140;
            case 0x177150u: goto label_177150;
            case 0x177160u: goto label_177160;
            case 0x177174u: goto label_177174;
            case 0x177194u: goto label_177194;
            case 0x1771D8u: goto label_1771d8;
            case 0x1771F8u: goto label_1771f8;
            case 0x17720Cu: goto label_17720c;
            case 0x177220u: goto label_177220;
            case 0x177240u: goto label_177240;
            case 0x177260u: goto label_177260;
            case 0x177274u: goto label_177274;
            case 0x177298u: goto label_177298;
            case 0x1772B0u: goto label_1772b0;
            case 0x1772C0u: goto label_1772c0;
            case 0x1772D0u: goto label_1772d0;
            case 0x1772E0u: goto label_1772e0;
            case 0x1772F0u: goto label_1772f0;
            case 0x177300u: goto label_177300;
            case 0x1773B8u: goto label_1773b8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x176F7Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x176F84u;
label_176f84:
    // 0x176f84: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x176f84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x176f88: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x176f88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176f8c: 0xc081b56  jal         func_206D58
    ctx->pc = 0x176F8Cu;
    SET_GPR_U32(ctx, 31, 0x176F94u);
    ctx->pc = 0x176F90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176F8Cu;
    // 0x176f90: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206D58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206D58u, 0x176F8Cu, 0x176F94u)) {
        return;
    }
    ctx->pc = 0x176F94u;
label_176f94:
    // 0x176f94: 0x10000110  b           . + 4 + (0x110 << 2)
    ctx->pc = 0x176F94u;
    {
        const bool branch_taken_0x176f94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x176F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176F94u;
        // 0x176f98: 0xae22004c  sw          $v0, 0x4C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176f94) {
            ctx->pc = 0x1773D8u;
            goto label_1773d8;
        }
    }
    ctx->pc = 0x176F9Cu;
label_176f9c:
    // 0x176f9c: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x176f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x176fa0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x176fa0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176fa4: 0xc081b56  jal         func_206D58
    ctx->pc = 0x176FA4u;
    SET_GPR_U32(ctx, 31, 0x176FACu);
    ctx->pc = 0x176FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176FA4u;
    // 0x176fa8: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206D58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206D58u, 0x176FA4u, 0x176FACu)) {
        return;
    }
    ctx->pc = 0x176FACu;
label_176fac:
    // 0x176fac: 0x1000010a  b           . + 4 + (0x10A << 2)
    ctx->pc = 0x176FACu;
    {
        const bool branch_taken_0x176fac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x176FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176FACu;
        // 0x176fb0: 0xae220098  sw          $v0, 0x98($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 152), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176fac) {
            ctx->pc = 0x1773D8u;
            goto label_1773d8;
        }
    }
    ctx->pc = 0x176FB4u;
label_176fb4:
    // 0x176fb4: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x176fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x176fb8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x176fb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176fbc: 0xc081b56  jal         func_206D58
    ctx->pc = 0x176FBCu;
    SET_GPR_U32(ctx, 31, 0x176FC4u);
    ctx->pc = 0x176FC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176FBCu;
    // 0x176fc0: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206D58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206D58u, 0x176FBCu, 0x176FC4u)) {
        return;
    }
    ctx->pc = 0x176FC4u;
label_176fc4:
    // 0x176fc4: 0x10000104  b           . + 4 + (0x104 << 2)
    ctx->pc = 0x176FC4u;
    {
        const bool branch_taken_0x176fc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x176FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176FC4u;
        // 0x176fc8: 0xae22009c  sw          $v0, 0x9C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176fc4) {
            ctx->pc = 0x1773D8u;
            goto label_1773d8;
        }
    }
    ctx->pc = 0x176FCCu;
label_176fcc:
    // 0x176fcc: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x176fccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x176fd0: 0x6843003f  ldl         $v1, 0x3F($v0)
    ctx->pc = 0x176fd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x176fd4: 0x6c430038  ldr         $v1, 0x38($v0)
    ctx->pc = 0x176fd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x176fd8: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x176fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x176fdc: 0xb2230093  sdl         $v1, 0x93($s1)
    ctx->pc = 0x176fdcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 147); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x176fe0: 0xb623008c  sdr         $v1, 0x8C($s1)
    ctx->pc = 0x176fe0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 140); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x176fe4: 0xae240094  sw          $a0, 0x94($s1)
    ctx->pc = 0x176fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 148), GPR_U32(ctx, 4));
    // 0x176fe8: 0x100000fc  b           . + 4 + (0xFC << 2)
    ctx->pc = 0x176FE8u;
    {
        const bool branch_taken_0x176fe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x176FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176FE8u;
        // 0x176fec: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176fe8) {
            ctx->pc = 0x1773DCu;
            goto label_1773dc;
        }
    }
    ctx->pc = 0x176FF0u;
label_176ff0:
    // 0x176ff0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x176ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x176ff4: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x176ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x176ff8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x176FF8u;
    {
        const bool branch_taken_0x176ff8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x176FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176FF8u;
        // 0x176ffc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176ff8) {
            ctx->pc = 0x177008u;
            goto label_177008;
        }
    }
    ctx->pc = 0x177000u;
    // 0x177000: 0x100000f5  b           . + 4 + (0xF5 << 2)
    ctx->pc = 0x177000u;
    {
        const bool branch_taken_0x177000 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x177004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177000u;
        // 0x177004: 0xae220088  sw          $v0, 0x88($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177000) {
            ctx->pc = 0x1773D8u;
            goto label_1773d8;
        }
    }
    ctx->pc = 0x177008u;
label_177008:
    // 0x177008: 0x100000f3  b           . + 4 + (0xF3 << 2)
    ctx->pc = 0x177008u;
    {
        const bool branch_taken_0x177008 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17700Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177008u;
        // 0x17700c: 0xae200088  sw          $zero, 0x88($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177008) {
            ctx->pc = 0x1773D8u;
            goto label_1773d8;
        }
    }
    ctx->pc = 0x177010u;
label_177010:
    // 0x177010: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x177010u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x177014: 0x2404ff00  addiu       $a0, $zero, -0x100
    ctx->pc = 0x177014u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x177018: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x177018u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x17701c: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x17701cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x177020: 0x34c600ff  ori         $a2, $a2, 0xFF
    ctx->pc = 0x177020u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)255);
    // 0x177024: 0x8867000b  lwl         $a3, 0xB($v1)
    ctx->pc = 0x177024u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 11); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 7) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 7, (int32_t)merged); }
    // 0x177028: 0x98670008  lwr         $a3, 0x8($v1)
    ctx->pc = 0x177028u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 7) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 7) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 7, merged64); }
    // 0x17702c: 0xaba70023  swl         $a3, 0x23($sp)
    ctx->pc = 0x17702cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 35); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 7); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x177030: 0xbba70020  swr         $a3, 0x20($sp)
    ctx->pc = 0x177030u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 7); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x177034: 0x3c07ff00  lui         $a3, 0xFF00
    ctx->pc = 0x177034u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65280 << 16));
    // 0x177038: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x177038u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x17703c: 0x3c08807f  lui         $t0, 0x807F
    ctx->pc = 0x17703cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32895 << 16));
    // 0x177040: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x177040u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x177044: 0x84078  dsll        $t0, $t0, 1
    ctx->pc = 0x177044u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 1);
    // 0x177048: 0x35080001  ori         $t0, $t0, 0x1
    ctx->pc = 0x177048u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)1);
    // 0x17704c: 0x93a40020  lbu         $a0, 0x20($sp)
    ctx->pc = 0x17704cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x177050: 0x93a30021  lbu         $v1, 0x21($sp)
    ctx->pc = 0x177050u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 33)));
    // 0x177054: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x177054u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x177058: 0x93a50022  lbu         $a1, 0x22($sp)
    ctx->pc = 0x177058u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 34)));
    // 0x17705c: 0x31a38  dsll        $v1, $v1, 8
    ctx->pc = 0x17705cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 8);
    // 0x177060: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x177060u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x177064: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x177064u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x177068: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x177068u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x17706c: 0x93a30023  lbu         $v1, 0x23($sp)
    ctx->pc = 0x17706cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 35)));
    // 0x177070: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x177070u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x177074: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x177074u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x177078: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x177078u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x17707c: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x17707cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
    // 0x177080: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x177080u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x177084: 0x32e3a  dsrl        $a1, $v1, 24
    ctx->pc = 0x177084u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) >> 24);
    // 0x177088: 0x3123a  dsrl        $v0, $v1, 8
    ctx->pc = 0x177088u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) >> 8);
    // 0x17708c: 0x3243a  dsrl        $a0, $v1, 16
    ctx->pc = 0x17708cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) >> 16);
    // 0x177090: 0xa3a20021  sb          $v0, 0x21($sp)
    ctx->pc = 0x177090u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 33), (uint8_t)GPR_U32(ctx, 2));
    // 0x177094: 0xa3a40022  sb          $a0, 0x22($sp)
    ctx->pc = 0x177094u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 34), (uint8_t)GPR_U32(ctx, 4));
    // 0x177098: 0xa3a50023  sb          $a1, 0x23($sp)
    ctx->pc = 0x177098u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 35), (uint8_t)GPR_U32(ctx, 5));
    // 0x17709c: 0xa3a30020  sb          $v1, 0x20($sp)
    ctx->pc = 0x17709cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 3));
    // 0x1770a0: 0x8ba60023  lwl         $a2, 0x23($sp)
    ctx->pc = 0x1770a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 35); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 6) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 6, (int32_t)merged); }
    // 0x1770a4: 0x9ba60020  lwr         $a2, 0x20($sp)
    ctx->pc = 0x1770a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 6) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 6) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 6, merged64); }
    // 0x1770a8: 0xaba60013  swl         $a2, 0x13($sp)
    ctx->pc = 0x1770a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 19); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 6); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x1770ac: 0xbba60010  swr         $a2, 0x10($sp)
    ctx->pc = 0x1770acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 6); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x1770b0: 0x8ba20013  lwl         $v0, 0x13($sp)
    ctx->pc = 0x1770b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 19); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x1770b4: 0x9ba20010  lwr         $v0, 0x10($sp)
    ctx->pc = 0x1770b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x1770b8: 0xaa2200fb  swl         $v0, 0xFB($s1)
    ctx->pc = 0x1770b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 251); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x1770bc: 0xba2200f8  swr         $v0, 0xF8($s1)
    ctx->pc = 0x1770bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 248); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x1770c0: 0x922200f8  lbu         $v0, 0xF8($s1)
    ctx->pc = 0x1770c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 248)));
    // 0x1770c4: 0x3c013b80  lui         $at, 0x3B80
    ctx->pc = 0x1770c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15232 << 16));
    // 0x1770c8: 0x34218081  ori         $at, $at, 0x8081
    ctx->pc = 0x1770c8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32897);
    // 0x1770cc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1770ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1770d0: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x1770d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1770d4: 0x0  nop
    ctx->pc = 0x1770d4u;
    // NOP
    // 0x1770d8: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x1770d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x1770dc: 0x922400f9  lbu         $a0, 0xF9($s1)
    ctx->pc = 0x1770dcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 249)));
    // 0x1770e0: 0x922300fa  lbu         $v1, 0xFA($s1)
    ctx->pc = 0x1770e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 250)));
    // 0x1770e4: 0x922200fb  lbu         $v0, 0xFB($s1)
    ctx->pc = 0x1770e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 251)));
    // 0x1770e8: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x1770e8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1770ec: 0x0  nop
    ctx->pc = 0x1770ecu;
    // NOP
    // 0x1770f0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1770f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1770f4: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x1770f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1770f8: 0x0  nop
    ctx->pc = 0x1770f8u;
    // NOP
    // 0x1770fc: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x1770fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x177100: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x177100u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x177104: 0x0  nop
    ctx->pc = 0x177104u;
    // NOP
    // 0x177108: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x177108u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x17710c: 0x46022102  mul.s       $f4, $f4, $f2
    ctx->pc = 0x17710cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x177110: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x177110u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x177114: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x177114u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x177118: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x177118u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x17711c: 0xe62400e8  swc1        $f4, 0xE8($s1)
    ctx->pc = 0x17711cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 232), bits); }
    // 0x177120: 0xe62100ec  swc1        $f1, 0xEC($s1)
    ctx->pc = 0x177120u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 236), bits); }
    // 0x177124: 0xe62000f4  swc1        $f0, 0xF4($s1)
    ctx->pc = 0x177124u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 244), bits); }
    // 0x177128: 0x100000aa  b           . + 4 + (0xAA << 2)
    ctx->pc = 0x177128u;
    {
        const bool branch_taken_0x177128 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17712Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177128u;
        // 0x17712c: 0xe62300f0  swc1        $f3, 0xF0($s1) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 240), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x177128) {
            ctx->pc = 0x1773D4u;
            goto label_1773d4;
        }
    }
    ctx->pc = 0x177130u;
label_177130:
    // 0x177130: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x177130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x177134: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x177134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x177138: 0x100000a7  b           . + 4 + (0xA7 << 2)
    ctx->pc = 0x177138u;
    {
        const bool branch_taken_0x177138 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17713Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177138u;
        // 0x17713c: 0xe62000fc  swc1        $f0, 0xFC($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 252), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x177138) {
            ctx->pc = 0x1773D8u;
            goto label_1773d8;
        }
    }
    ctx->pc = 0x177140u;
label_177140:
    // 0x177140: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x177140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x177144: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x177144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x177148: 0x100000a3  b           . + 4 + (0xA3 << 2)
    ctx->pc = 0x177148u;
    {
        const bool branch_taken_0x177148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17714Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177148u;
        // 0x17714c: 0xe6200104  swc1        $f0, 0x104($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 260), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x177148) {
            ctx->pc = 0x1773D8u;
            goto label_1773d8;
        }
    }
    ctx->pc = 0x177150u;
label_177150:
    // 0x177150: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x177150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x177154: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x177154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x177158: 0x1000009f  b           . + 4 + (0x9F << 2)
    ctx->pc = 0x177158u;
    {
        const bool branch_taken_0x177158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17715Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177158u;
        // 0x17715c: 0xe6200100  swc1        $f0, 0x100($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 256), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x177158) {
            ctx->pc = 0x1773D8u;
            goto label_1773d8;
        }
    }
    ctx->pc = 0x177160u;
label_177160:
    // 0x177160: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x177160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x177164: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x177164u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x177168: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x177168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x17716c: 0x1000009a  b           . + 4 + (0x9A << 2)
    ctx->pc = 0x17716Cu;
    {
        const bool branch_taken_0x17716c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x177170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17716Cu;
        // 0x177170: 0xae2200c0  sw          $v0, 0xC0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 192), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17716c) {
            ctx->pc = 0x1773D8u;
            goto label_1773d8;
        }
    }
    ctx->pc = 0x177174u;
label_177174:
    // 0x177174: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x177174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x177178: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x177178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x17717c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x17717Cu;
    {
        const bool branch_taken_0x17717c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x177180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17717Cu;
        // 0x177180: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17717c) {
            ctx->pc = 0x17718Cu;
            goto label_17718c;
        }
    }
    ctx->pc = 0x177184u;
    // 0x177184: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x177184u;
    {
        const bool branch_taken_0x177184 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x177188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177184u;
        // 0x177188: 0xae2200c4  sw          $v0, 0xC4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 196), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177184) {
            ctx->pc = 0x177290u;
            goto label_177290;
        }
    }
    ctx->pc = 0x17718Cu;
label_17718c:
    // 0x17718c: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x17718Cu;
    {
        const bool branch_taken_0x17718c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x177190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17718Cu;
        // 0x177190: 0xae2000c4  sw          $zero, 0xC4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 196), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17718c) {
            ctx->pc = 0x177290u;
            goto label_177290;
        }
    }
    ctx->pc = 0x177194u;
label_177194:
    // 0x177194: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x177194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x177198: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x177198u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x17719c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x17719cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1771a0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1771a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1771a4: 0x0  nop
    ctx->pc = 0x1771a4u;
    // NOP
    // 0x1771a8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1771A8u;
    {
        const bool branch_taken_0x1771a8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1771a8) {
            ctx->pc = 0x1771ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1771A8u;
            // 0x1771ac: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
            ctx->f[0] = FPU_MOV_S(ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1771B0u;
            goto label_1771b0;
        }
    }
    ctx->pc = 0x1771B0u;
label_1771b0:
    // 0x1771b0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1771b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1771b4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1771b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1771b8: 0x0  nop
    ctx->pc = 0x1771b8u;
    // NOP
    // 0x1771bc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1771bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1771c0: 0x0  nop
    ctx->pc = 0x1771c0u;
    // NOP
    // 0x1771c4: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1771C4u;
    {
        const bool branch_taken_0x1771c4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1771c4) {
            ctx->pc = 0x1771C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1771C4u;
            // 0x1771c8: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
            ctx->f[0] = FPU_MOV_S(ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1771CCu;
            goto label_1771cc;
        }
    }
    ctx->pc = 0x1771CCu;
label_1771cc:
    // 0x1771cc: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1771ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1771d0: 0x10000081  b           . + 4 + (0x81 << 2)
    ctx->pc = 0x1771D0u;
    {
        const bool branch_taken_0x1771d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1771D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1771D0u;
        // 0x1771d4: 0xe4408698  swc1        $f0, -0x7968($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294936216), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1771d0) {
            ctx->pc = 0x1773D8u;
            goto label_1773d8;
        }
    }
    ctx->pc = 0x1771D8u;
label_1771d8:
    // 0x1771d8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1771d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1771dc: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1771dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1771e0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1771E0u;
    {
        const bool branch_taken_0x1771e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1771E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1771E0u;
        // 0x1771e4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1771e0) {
            ctx->pc = 0x1771F0u;
            goto label_1771f0;
        }
    }
    ctx->pc = 0x1771E8u;
    // 0x1771e8: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x1771E8u;
    {
        const bool branch_taken_0x1771e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1771ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1771E8u;
        // 0x1771ec: 0xae2200c8  sw          $v0, 0xC8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 200), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1771e8) {
            ctx->pc = 0x177290u;
            goto label_177290;
        }
    }
    ctx->pc = 0x1771F0u;
label_1771f0:
    // 0x1771f0: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x1771F0u;
    {
        const bool branch_taken_0x1771f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1771F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1771F0u;
        // 0x1771f4: 0xae2000c8  sw          $zero, 0xC8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 200), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1771f0) {
            ctx->pc = 0x177290u;
            goto label_177290;
        }
    }
    ctx->pc = 0x1771F8u;
label_1771f8:
    // 0x1771f8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1771f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1771fc: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x1771fcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x177200: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x177200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x177204: 0x10000074  b           . + 4 + (0x74 << 2)
    ctx->pc = 0x177204u;
    {
        const bool branch_taken_0x177204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x177208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177204u;
        // 0x177208: 0xae2200cc  sw          $v0, 0xCC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 204), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177204) {
            ctx->pc = 0x1773D8u;
            goto label_1773d8;
        }
    }
    ctx->pc = 0x17720Cu;
label_17720c:
    // 0x17720c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x17720cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x177210: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x177210u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x177214: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x177214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x177218: 0x1000006f  b           . + 4 + (0x6F << 2)
    ctx->pc = 0x177218u;
    {
        const bool branch_taken_0x177218 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17721Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177218u;
        // 0x17721c: 0xae2200d0  sw          $v0, 0xD0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 208), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177218) {
            ctx->pc = 0x1773D8u;
            goto label_1773d8;
        }
    }
    ctx->pc = 0x177220u;
label_177220:
    // 0x177220: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x177220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x177224: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x177224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x177228: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x177228u;
    {
        const bool branch_taken_0x177228 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x17722Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177228u;
        // 0x17722c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177228) {
            ctx->pc = 0x177238u;
            goto label_177238;
        }
    }
    ctx->pc = 0x177230u;
    // 0x177230: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x177230u;
    {
        const bool branch_taken_0x177230 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x177234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177230u;
        // 0x177234: 0xae2200d4  sw          $v0, 0xD4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 212), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177230) {
            ctx->pc = 0x177290u;
            goto label_177290;
        }
    }
    ctx->pc = 0x177238u;
label_177238:
    // 0x177238: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x177238u;
    {
        const bool branch_taken_0x177238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17723Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177238u;
        // 0x17723c: 0xae2000d4  sw          $zero, 0xD4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 212), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177238) {
            ctx->pc = 0x177290u;
            goto label_177290;
        }
    }
    ctx->pc = 0x177240u;
label_177240:
    // 0x177240: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x177240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x177244: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x177244u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x177248: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x177248u;
    {
        const bool branch_taken_0x177248 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x17724Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177248u;
        // 0x17724c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177248) {
            ctx->pc = 0x177258u;
            goto label_177258;
        }
    }
    ctx->pc = 0x177250u;
    // 0x177250: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x177250u;
    {
        const bool branch_taken_0x177250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x177254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177250u;
        // 0x177254: 0xae2200d8  sw          $v0, 0xD8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 216), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177250) {
            ctx->pc = 0x177290u;
            goto label_177290;
        }
    }
    ctx->pc = 0x177258u;
label_177258:
    // 0x177258: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x177258u;
    {
        const bool branch_taken_0x177258 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17725Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177258u;
        // 0x17725c: 0xae2000d8  sw          $zero, 0xD8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 216), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177258) {
            ctx->pc = 0x177290u;
            goto label_177290;
        }
    }
    ctx->pc = 0x177260u;
label_177260:
    // 0x177260: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x177260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x177264: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x177264u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x177268: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x177268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x17726c: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x17726Cu;
    {
        const bool branch_taken_0x17726c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x177270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17726Cu;
        // 0x177270: 0xae2200dc  sw          $v0, 0xDC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 220), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17726c) {
            ctx->pc = 0x1773D8u;
            goto label_1773d8;
        }
    }
    ctx->pc = 0x177274u;
label_177274:
    // 0x177274: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x177274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x177278: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x177278u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x17727c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x17727Cu;
    {
        const bool branch_taken_0x17727c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x177280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17727Cu;
        // 0x177280: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17727c) {
            ctx->pc = 0x17728Cu;
            goto label_17728c;
        }
    }
    ctx->pc = 0x177284u;
    // 0x177284: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x177284u;
    {
        const bool branch_taken_0x177284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x177288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177284u;
        // 0x177288: 0xae2200e0  sw          $v0, 0xE0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 224), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177284) {
            ctx->pc = 0x177290u;
            goto label_177290;
        }
    }
    ctx->pc = 0x17728Cu;
label_17728c:
    // 0x17728c: 0xae2000e0  sw          $zero, 0xE0($s1)
    ctx->pc = 0x17728cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 224), GPR_U32(ctx, 0));
label_177290:
    // 0x177290: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x177290u;
    {
        const bool branch_taken_0x177290 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x177294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177290u;
        // 0x177294: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177290) {
            ctx->pc = 0x1773D8u;
            goto label_1773d8;
        }
    }
    ctx->pc = 0x177298u;
label_177298:
    // 0x177298: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x177298u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17729c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17729cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1772a0: 0xc081b56  jal         func_206D58
    ctx->pc = 0x1772A0u;
    SET_GPR_U32(ctx, 31, 0x1772A8u);
    ctx->pc = 0x1772A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1772A0u;
    // 0x1772a4: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206D58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206D58u, 0x1772A0u, 0x1772A8u)) {
        return;
    }
    ctx->pc = 0x1772A8u;
label_1772a8:
    // 0x1772a8: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x1772A8u;
    {
        const bool branch_taken_0x1772a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1772ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1772A8u;
        // 0x1772ac: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1772a8) {
            ctx->pc = 0x1773D8u;
            goto label_1773d8;
        }
    }
    ctx->pc = 0x1772B0u;
label_1772b0:
    // 0x1772b0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1772b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1772b4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1772b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1772b8: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x1772B8u;
    {
        const bool branch_taken_0x1772b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1772BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1772B8u;
        // 0x1772bc: 0xe6200130  swc1        $f0, 0x130($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 304), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1772b8) {
            ctx->pc = 0x1773D8u;
            goto label_1773d8;
        }
    }
    ctx->pc = 0x1772C0u;
label_1772c0:
    // 0x1772c0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1772c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1772c4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1772c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1772c8: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x1772C8u;
    {
        const bool branch_taken_0x1772c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1772CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1772C8u;
        // 0x1772cc: 0xe6200134  swc1        $f0, 0x134($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 308), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1772c8) {
            ctx->pc = 0x1773D8u;
            goto label_1773d8;
        }
    }
    ctx->pc = 0x1772D0u;
label_1772d0:
    // 0x1772d0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1772d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1772d4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1772d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1772d8: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x1772D8u;
    {
        const bool branch_taken_0x1772d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1772DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1772D8u;
        // 0x1772dc: 0xe6200138  swc1        $f0, 0x138($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 312), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1772d8) {
            ctx->pc = 0x1773D8u;
            goto label_1773d8;
        }
    }
    ctx->pc = 0x1772E0u;
label_1772e0:
    // 0x1772e0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1772e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1772e4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1772e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1772e8: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x1772E8u;
    {
        const bool branch_taken_0x1772e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1772ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1772E8u;
        // 0x1772ec: 0xe620013c  swc1        $f0, 0x13C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 316), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1772e8) {
            ctx->pc = 0x1773D8u;
            goto label_1773d8;
        }
    }
    ctx->pc = 0x1772F0u;
label_1772f0:
    // 0x1772f0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1772f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1772f4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1772f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1772f8: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x1772F8u;
    {
        const bool branch_taken_0x1772f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1772FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1772F8u;
        // 0x1772fc: 0xe6200140  swc1        $f0, 0x140($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 320), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1772f8) {
            ctx->pc = 0x1773D8u;
            goto label_1773d8;
        }
    }
    ctx->pc = 0x177300u;
label_177300:
    // 0x177300: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x177300u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x177304: 0x2403ff00  addiu       $v1, $zero, -0x100
    ctx->pc = 0x177304u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x177308: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x177308u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x17730c: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x17730cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x177310: 0x34c600ff  ori         $a2, $a2, 0xFF
    ctx->pc = 0x177310u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)255);
    // 0x177314: 0x8887000b  lwl         $a3, 0xB($a0)
    ctx->pc = 0x177314u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 11); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 7) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 7, (int32_t)merged); }
    // 0x177318: 0x98870008  lwr         $a3, 0x8($a0)
    ctx->pc = 0x177318u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 7) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 7) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 7, merged64); }
    // 0x17731c: 0xaba70033  swl         $a3, 0x33($sp)
    ctx->pc = 0x17731cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 51); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 7); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x177320: 0xbba70030  swr         $a3, 0x30($sp)
    ctx->pc = 0x177320u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 7); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x177324: 0x3c07ff00  lui         $a3, 0xFF00
    ctx->pc = 0x177324u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65280 << 16));
    // 0x177328: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x177328u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x17732c: 0x3c08807f  lui         $t0, 0x807F
    ctx->pc = 0x17732cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32895 << 16));
    // 0x177330: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x177330u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x177334: 0x84078  dsll        $t0, $t0, 1
    ctx->pc = 0x177334u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 1);
    // 0x177338: 0x35080001  ori         $t0, $t0, 0x1
    ctx->pc = 0x177338u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)1);
    // 0x17733c: 0x93a50030  lbu         $a1, 0x30($sp)
    ctx->pc = 0x17733cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x177340: 0x93a30031  lbu         $v1, 0x31($sp)
    ctx->pc = 0x177340u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 49)));
    // 0x177344: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x177344u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x177348: 0x93a40032  lbu         $a0, 0x32($sp)
    ctx->pc = 0x177348u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 50)));
    // 0x17734c: 0x31a38  dsll        $v1, $v1, 8
    ctx->pc = 0x17734cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 8);
    // 0x177350: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x177350u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x177354: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x177354u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x177358: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x177358u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x17735c: 0x93a30033  lbu         $v1, 0x33($sp)
    ctx->pc = 0x17735cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 51)));
    // 0x177360: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x177360u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x177364: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x177364u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x177368: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x177368u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x17736c: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x17736cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
    // 0x177370: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x177370u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x177374: 0x32e3a  dsrl        $a1, $v1, 24
    ctx->pc = 0x177374u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) >> 24);
    // 0x177378: 0x3123a  dsrl        $v0, $v1, 8
    ctx->pc = 0x177378u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) >> 8);
    // 0x17737c: 0x3243a  dsrl        $a0, $v1, 16
    ctx->pc = 0x17737cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) >> 16);
    // 0x177380: 0xa3a20031  sb          $v0, 0x31($sp)
    ctx->pc = 0x177380u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 49), (uint8_t)GPR_U32(ctx, 2));
    // 0x177384: 0xa3a40032  sb          $a0, 0x32($sp)
    ctx->pc = 0x177384u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 50), (uint8_t)GPR_U32(ctx, 4));
    // 0x177388: 0xa3a50033  sb          $a1, 0x33($sp)
    ctx->pc = 0x177388u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 51), (uint8_t)GPR_U32(ctx, 5));
    // 0x17738c: 0xa3a30030  sb          $v1, 0x30($sp)
    ctx->pc = 0x17738cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 3));
    // 0x177390: 0x8ba60033  lwl         $a2, 0x33($sp)
    ctx->pc = 0x177390u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 51); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 6) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 6, (int32_t)merged); }
    // 0x177394: 0x9ba60030  lwr         $a2, 0x30($sp)
    ctx->pc = 0x177394u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 6) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 6) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 6, merged64); }
    // 0x177398: 0xaba60013  swl         $a2, 0x13($sp)
    ctx->pc = 0x177398u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 19); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 6); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x17739c: 0xbba60010  swr         $a2, 0x10($sp)
    ctx->pc = 0x17739cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 6); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x1773a0: 0x8ba20013  lwl         $v0, 0x13($sp)
    ctx->pc = 0x1773a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 19); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x1773a4: 0x9ba20010  lwr         $v0, 0x10($sp)
    ctx->pc = 0x1773a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x1773a8: 0xaa22010b  swl         $v0, 0x10B($s1)
    ctx->pc = 0x1773a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 267); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x1773ac: 0xba220108  swr         $v0, 0x108($s1)
    ctx->pc = 0x1773acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 264); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x1773b0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1773B0u;
    {
        const bool branch_taken_0x1773b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1773B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1773B0u;
        // 0x1773b4: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1773b0) {
            ctx->pc = 0x1773D8u;
            goto label_1773d8;
        }
    }
    ctx->pc = 0x1773B8u;
label_1773b8:
    // 0x1773b8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1773b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1773bc: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1773bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1773c0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1773C0u;
    {
        const bool branch_taken_0x1773c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1773C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1773C0u;
        // 0x1773c4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1773c0) {
            ctx->pc = 0x1773D0u;
            goto label_1773d0;
        }
    }
    ctx->pc = 0x1773C8u;
    // 0x1773c8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1773C8u;
    {
        const bool branch_taken_0x1773c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1773CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1773C8u;
        // 0x1773cc: 0xae22010c  sw          $v0, 0x10C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 268), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1773c8) {
            ctx->pc = 0x1773D4u;
            goto label_1773d4;
        }
    }
    ctx->pc = 0x1773D0u;
label_1773d0:
    // 0x1773d0: 0xae20010c  sw          $zero, 0x10C($s1)
    ctx->pc = 0x1773d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 268), GPR_U32(ctx, 0));
label_1773d4:
    // 0x1773d4: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1773d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1773d8:
    // 0x1773d8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1773d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1773dc:
    // 0x1773dc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1773dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1773e0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1773e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1773e4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1773e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1773e8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1773e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1773ec: 0xc07f0c8  jal         func_1FC320
    ctx->pc = 0x1773ECu;
    SET_GPR_U32(ctx, 31, 0x1773F4u);
    ctx->pc = 0x1773F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1773ECu;
    // 0x1773f0: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC320u, 0x1773ECu, 0x1773F4u)) {
        return;
    }
    ctx->pc = 0x1773F4u;
label_1773f4:
    // 0x1773f4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1773f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1773f8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1773f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1773fc: 0x5460fed8  bnel        $v1, $zero, . + 4 + (-0x128 << 2)
    ctx->pc = 0x1773FCu;
    {
        const bool branch_taken_0x1773fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1773fc) {
            ctx->pc = 0x177400u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1773FCu;
            // 0x177400: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x176F60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_176f60;
        }
    }
    ctx->pc = 0x177404u;
label_177404:
    // 0x177404: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
    ctx->pc = 0x177404u;
    {
        const bool branch_taken_0x177404 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x177404) {
            ctx->pc = 0x177448u;
            goto label_177448;
        }
    }
    ctx->pc = 0x17740Cu;
    // 0x17740c: 0x8e22010c  lw          $v0, 0x10C($s1)
    ctx->pc = 0x17740cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 268)));
    // 0x177410: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x177410u;
    {
        const bool branch_taken_0x177410 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x177414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177410u;
        // 0x177414: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177410) {
            ctx->pc = 0x177434u;
            goto label_177434;
        }
    }
    ctx->pc = 0x177418u;
    // 0x177418: 0x8c43830c  lw          $v1, -0x7CF4($v0)
    ctx->pc = 0x177418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294935308)));
    // 0x17741c: 0x8a2600fb  lwl         $a2, 0xFB($s1)
    ctx->pc = 0x17741cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 251); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 6) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 6, (int32_t)merged); }
    // 0x177420: 0x9a2600f8  lwr         $a2, 0xF8($s1)
    ctx->pc = 0x177420u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 248); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 6) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 6) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 6, merged64); }
    // 0x177424: 0xa8660013  swl         $a2, 0x13($v1)
    ctx->pc = 0x177424u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 19); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 6); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x177428: 0xb8660010  swr         $a2, 0x10($v1)
    ctx->pc = 0x177428u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 6); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x17742c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x17742Cu;
    {
        const bool branch_taken_0x17742c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17742c) {
            ctx->pc = 0x177448u;
            goto label_177448;
        }
    }
    ctx->pc = 0x177434u;
label_177434:
    // 0x177434: 0x8c43830c  lw          $v1, -0x7CF4($v0)
    ctx->pc = 0x177434u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294935308)));
    // 0x177438: 0x8a22010b  lwl         $v0, 0x10B($s1)
    ctx->pc = 0x177438u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 267); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x17743c: 0x9a220108  lwr         $v0, 0x108($s1)
    ctx->pc = 0x17743cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 264); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x177440: 0xa8620013  swl         $v0, 0x13($v1)
    ctx->pc = 0x177440u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 19); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x177444: 0xb8620010  swr         $v0, 0x10($v1)
    ctx->pc = 0x177444u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_177448:
    // 0x177448: 0x1240005c  beqz        $s2, . + 4 + (0x5C << 2)
    ctx->pc = 0x177448u;
    {
        const bool branch_taken_0x177448 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x17744Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177448u;
        // 0x17744c: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177448) {
            ctx->pc = 0x1775BCu;
            goto label_1775bc;
        }
    }
    ctx->pc = 0x177450u;
    // 0x177450: 0x8e2300c0  lw          $v1, 0xC0($s1)
    ctx->pc = 0x177450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
    // 0x177454: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x177454u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x177458: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x177458u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x17745c: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x17745cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x177460: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x177460u;
    {
        const bool branch_taken_0x177460 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x177464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177460u;
        // 0x177464: 0x3c020069  lui         $v0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177460) {
            ctx->pc = 0x1774D0u;
            goto label_1774d0;
        }
    }
    ctx->pc = 0x177468u;
    // 0x177468: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x177468u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x17746c: 0x24426820  addiu       $v0, $v0, 0x6820
    ctx->pc = 0x17746cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26656));
    // 0x177470: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x177470u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x177474: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x177474u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x177478: 0x800008  jr          $a0
    ctx->pc = 0x177478u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x177480u: goto label_177480;
            case 0x177494u: goto label_177494;
            case 0x1774B0u: goto label_1774b0;
            case 0x1774C4u: goto label_1774c4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x177478u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x177480u;
label_177480:
    // 0x177480: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x177480u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x177484: 0xc051a18  jal         func_146860
    ctx->pc = 0x177484u;
    SET_GPR_U32(ctx, 31, 0x17748Cu);
    ctx->pc = 0x177488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177484u;
    // 0x177488: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x146860u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x146860u, 0x177484u, 0x17748Cu)) {
        return;
    }
    ctx->pc = 0x17748Cu;
label_17748c:
    // 0x17748c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x17748Cu;
    {
        const bool branch_taken_0x17748c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x177490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17748Cu;
        // 0x177490: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17748c) {
            ctx->pc = 0x1774D4u;
            goto label_1774d4;
        }
    }
    ctx->pc = 0x177494u;
label_177494:
    // 0x177494: 0x8e2500c4  lw          $a1, 0xC4($s1)
    ctx->pc = 0x177494u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
    // 0x177498: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x177498u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x17749c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x17749cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1774a0: 0xc051a18  jal         func_146860
    ctx->pc = 0x1774A0u;
    SET_GPR_U32(ctx, 31, 0x1774A8u);
    ctx->pc = 0x1774A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1774A0u;
    // 0x1774a4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x146860u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x146860u, 0x1774A0u, 0x1774A8u)) {
        return;
    }
    ctx->pc = 0x1774A8u;
label_1774a8:
    // 0x1774a8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1774A8u;
    {
        const bool branch_taken_0x1774a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1774ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1774A8u;
        // 0x1774ac: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1774a8) {
            ctx->pc = 0x1774D4u;
            goto label_1774d4;
        }
    }
    ctx->pc = 0x1774B0u;
label_1774b0:
    // 0x1774b0: 0x8e2500c4  lw          $a1, 0xC4($s1)
    ctx->pc = 0x1774b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
    // 0x1774b4: 0xc051a18  jal         func_146860
    ctx->pc = 0x1774B4u;
    SET_GPR_U32(ctx, 31, 0x1774BCu);
    ctx->pc = 0x1774B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1774B4u;
    // 0x1774b8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x146860u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x146860u, 0x1774B4u, 0x1774BCu)) {
        return;
    }
    ctx->pc = 0x1774BCu;
label_1774bc:
    // 0x1774bc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1774BCu;
    {
        const bool branch_taken_0x1774bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1774C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1774BCu;
        // 0x1774c0: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1774bc) {
            ctx->pc = 0x1774D4u;
            goto label_1774d4;
        }
    }
    ctx->pc = 0x1774C4u;
label_1774c4:
    // 0x1774c4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1774c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1774c8: 0xc051a18  jal         func_146860
    ctx->pc = 0x1774C8u;
    SET_GPR_U32(ctx, 31, 0x1774D0u);
    ctx->pc = 0x1774CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1774C8u;
    // 0x1774cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x146860u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x146860u, 0x1774C8u, 0x1774D0u)) {
        return;
    }
    ctx->pc = 0x1774D0u;
label_1774d0:
    // 0x1774d0: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1774d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_1774d4:
    // 0x1774d4: 0xe45486a8  swc1        $f20, -0x7958($v0)
    ctx->pc = 0x1774d4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294936232), bits); }
    // 0x1774d8: 0xc079232  jal         func_1E48C8
    ctx->pc = 0x1774D8u;
    SET_GPR_U32(ctx, 31, 0x1774E0u);
    ctx->pc = 0x1774DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1774D8u;
    // 0x1774dc: 0x8e2400e0  lw          $a0, 0xE0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 224)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E48C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E48C8u, 0x1774D8u, 0x1774E0u)) {
        return;
    }
    ctx->pc = 0x1774E0u;
label_1774e0:
    // 0x1774e0: 0xc05e280  jal         func_178A00
    ctx->pc = 0x1774E0u;
    SET_GPR_U32(ctx, 31, 0x1774E8u);
    ctx->pc = 0x1774E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1774E0u;
    // 0x1774e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178A00u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x178A00u, 0x1774E0u, 0x1774E8u)) {
        return;
    }
    ctx->pc = 0x1774E8u;
label_1774e8:
    // 0x1774e8: 0x8e2300d0  lw          $v1, 0xD0($s1)
    ctx->pc = 0x1774e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 208)));
    // 0x1774ec: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1774ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1774f0: 0x1064000b  beq         $v1, $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x1774F0u;
    {
        const bool branch_taken_0x1774f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x1774F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1774F0u;
        // 0x1774f4: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1774f0) {
            ctx->pc = 0x177520u;
            goto label_177520;
        }
    }
    ctx->pc = 0x1774F8u;
    // 0x1774f8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1774F8u;
    {
        const bool branch_taken_0x1774f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1774FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1774F8u;
        // 0x1774fc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1774f8) {
            ctx->pc = 0x177510u;
            goto label_177510;
        }
    }
    ctx->pc = 0x177500u;
    // 0x177500: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x177500u;
    {
        const bool branch_taken_0x177500 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x177504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177500u;
        // 0x177504: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177500) {
            ctx->pc = 0x177524u;
            goto label_177524;
        }
    }
    ctx->pc = 0x177508u;
    // 0x177508: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x177508u;
    {
        const bool branch_taken_0x177508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17750Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177508u;
        // 0x17750c: 0x8e2300cc  lw          $v1, 0xCC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 204)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177508) {
            ctx->pc = 0x177534u;
            goto label_177534;
        }
    }
    ctx->pc = 0x177510u;
label_177510:
    // 0x177510: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x177510u;
    {
        const bool branch_taken_0x177510 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x177514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177510u;
        // 0x177514: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177510) {
            ctx->pc = 0x17752Cu;
            goto label_17752c;
        }
    }
    ctx->pc = 0x177518u;
    // 0x177518: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x177518u;
    {
        const bool branch_taken_0x177518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17751Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177518u;
        // 0x17751c: 0x8e2300cc  lw          $v1, 0xCC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 204)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177518) {
            ctx->pc = 0x177534u;
            goto label_177534;
        }
    }
    ctx->pc = 0x177520u;
label_177520:
    // 0x177520: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x177520u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_177524:
    // 0x177524: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x177524u;
    {
        const bool branch_taken_0x177524 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x177528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177524u;
        // 0x177528: 0xac4084a0  sw          $zero, -0x7B60($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294935712), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177524) {
            ctx->pc = 0x177530u;
            goto label_177530;
        }
    }
    ctx->pc = 0x17752Cu;
label_17752c:
    // 0x17752c: 0xac4484a0  sw          $a0, -0x7B60($v0)
    ctx->pc = 0x17752cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294935712), GPR_U32(ctx, 4));
label_177530:
    // 0x177530: 0x8e2300cc  lw          $v1, 0xCC($s1)
    ctx->pc = 0x177530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 204)));
label_177534:
    // 0x177534: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x177534u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x177538: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x177538u;
    {
        const bool branch_taken_0x177538 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17753Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177538u;
        // 0x17753c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177538) {
            ctx->pc = 0x177580u;
            goto label_177580;
        }
    }
    ctx->pc = 0x177540u;
    // 0x177540: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x177540u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x177544: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x177544u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x177548: 0x24426840  addiu       $v0, $v0, 0x6840
    ctx->pc = 0x177548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26688));
    // 0x17754c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x17754cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x177550: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x177550u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x177554: 0x800008  jr          $a0
    ctx->pc = 0x177554u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17755Cu: goto label_17755c;
            case 0x177564u: goto label_177564;
            case 0x17756Cu: goto label_17756c;
            case 0x177574u: goto label_177574;
            case 0x17757Cu: goto label_17757c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x177554u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x17755Cu;
label_17755c:
    // 0x17755c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x17755Cu;
    {
        const bool branch_taken_0x17755c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x177560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17755Cu;
        // 0x177560: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17755c) {
            ctx->pc = 0x177580u;
            goto label_177580;
        }
    }
    ctx->pc = 0x177564u;
label_177564:
    // 0x177564: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x177564u;
    {
        const bool branch_taken_0x177564 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x177568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177564u;
        // 0x177568: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177564) {
            ctx->pc = 0x177580u;
            goto label_177580;
        }
    }
    ctx->pc = 0x17756Cu;
label_17756c:
    // 0x17756c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x17756Cu;
    {
        const bool branch_taken_0x17756c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x177570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17756Cu;
        // 0x177570: 0x24040080  addiu       $a0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17756c) {
            ctx->pc = 0x177580u;
            goto label_177580;
        }
    }
    ctx->pc = 0x177574u;
label_177574:
    // 0x177574: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x177574u;
    {
        const bool branch_taken_0x177574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x177578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177574u;
        // 0x177578: 0x240400c0  addiu       $a0, $zero, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177574) {
            ctx->pc = 0x177580u;
            goto label_177580;
        }
    }
    ctx->pc = 0x17757Cu;
label_17757c:
    // 0x17757c: 0x24040100  addiu       $a0, $zero, 0x100
    ctx->pc = 0x17757cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_177580:
    // 0x177580: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x177580u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x177584: 0x3c080034  lui         $t0, 0x34
    ctx->pc = 0x177584u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)52 << 16));
    // 0x177588: 0xac44849c  sw          $a0, -0x7B64($v0)
    ctx->pc = 0x177588u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x33849Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x33849Cu, _value); } while (0);
    // 0x17758c: 0x3c090034  lui         $t1, 0x34
    ctx->pc = 0x17758cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)52 << 16));
    // 0x177590: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x177590u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x177594: 0x3c060034  lui         $a2, 0x34
    ctx->pc = 0x177594u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)52 << 16));
    // 0x177598: 0x8e2300d4  lw          $v1, 0xD4($s1)
    ctx->pc = 0x177598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
    // 0x17759c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17759cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1775a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1775a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1775a4: 0xad0384a4  sw          $v1, -0x7B5C($t0)
    ctx->pc = 0x1775a4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3384A4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3384A4u, _value); } while (0);
    // 0x1775a8: 0x8e2200c8  lw          $v0, 0xC8($s1)
    ctx->pc = 0x1775a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 200)));
    // 0x1775ac: 0xacc7869c  sw          $a3, -0x7964($a2)
    ctx->pc = 0x1775acu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x33869Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x33869Cu, _value); } while (0);
    // 0x1775b0: 0xc05e29a  jal         func_178A68
    ctx->pc = 0x1775B0u;
    SET_GPR_U32(ctx, 31, 0x1775B8u);
    ctx->pc = 0x1775B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1775B0u;
    // 0x1775b4: 0xad2284b0  sw          $v0, -0x7B50($t1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 9), 4294935728), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178A68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x178A68u, 0x1775B0u, 0x1775B8u)) {
        return;
    }
    ctx->pc = 0x1775B8u;
label_1775b8:
    // 0x1775b8: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x1775b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1775bc:
    // 0x1775bc: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x1775bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1775c0: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x1775c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1775c4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1775c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1775c8: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x1775c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1775cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1775CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1775D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1775CCu;
        // 0x1775d0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1775CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1775D4u;
    // 0x1775d4: 0x0  nop
    ctx->pc = 0x1775d4u;
    // NOP
    ctx->pc = 0x1775d8u;
}
