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

// Function: sub_001D1770
// Address: 0x1d1770 - 0x1d1890
void sub_001D1770_0x1d1770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D1770_0x1d1770");
#endif

    switch (ctx->pc) {
        case 0x1d1770u: goto label_1d1770;
        case 0x1d1774u: goto label_1d1774;
        case 0x1d1778u: goto label_1d1778;
        case 0x1d177cu: goto label_1d177c;
        case 0x1d1780u: goto label_1d1780;
        case 0x1d1784u: goto label_1d1784;
        case 0x1d1788u: goto label_1d1788;
        case 0x1d178cu: goto label_1d178c;
        case 0x1d1790u: goto label_1d1790;
        case 0x1d1794u: goto label_1d1794;
        case 0x1d1798u: goto label_1d1798;
        case 0x1d179cu: goto label_1d179c;
        case 0x1d17a0u: goto label_1d17a0;
        case 0x1d17a4u: goto label_1d17a4;
        case 0x1d17a8u: goto label_1d17a8;
        case 0x1d17acu: goto label_1d17ac;
        case 0x1d17b0u: goto label_1d17b0;
        case 0x1d17b4u: goto label_1d17b4;
        case 0x1d17b8u: goto label_1d17b8;
        case 0x1d17bcu: goto label_1d17bc;
        case 0x1d17c0u: goto label_1d17c0;
        case 0x1d17c4u: goto label_1d17c4;
        case 0x1d17c8u: goto label_1d17c8;
        case 0x1d17ccu: goto label_1d17cc;
        case 0x1d17d0u: goto label_1d17d0;
        case 0x1d17d4u: goto label_1d17d4;
        case 0x1d17d8u: goto label_1d17d8;
        case 0x1d17dcu: goto label_1d17dc;
        case 0x1d17e0u: goto label_1d17e0;
        case 0x1d17e4u: goto label_1d17e4;
        case 0x1d17e8u: goto label_1d17e8;
        case 0x1d17ecu: goto label_1d17ec;
        case 0x1d17f0u: goto label_1d17f0;
        case 0x1d17f4u: goto label_1d17f4;
        case 0x1d17f8u: goto label_1d17f8;
        case 0x1d17fcu: goto label_1d17fc;
        case 0x1d1800u: goto label_1d1800;
        case 0x1d1804u: goto label_1d1804;
        case 0x1d1808u: goto label_1d1808;
        case 0x1d180cu: goto label_1d180c;
        case 0x1d1810u: goto label_1d1810;
        case 0x1d1814u: goto label_1d1814;
        case 0x1d1818u: goto label_1d1818;
        case 0x1d181cu: goto label_1d181c;
        case 0x1d1820u: goto label_1d1820;
        case 0x1d1824u: goto label_1d1824;
        case 0x1d1828u: goto label_1d1828;
        case 0x1d182cu: goto label_1d182c;
        case 0x1d1830u: goto label_1d1830;
        case 0x1d1834u: goto label_1d1834;
        case 0x1d1838u: goto label_1d1838;
        case 0x1d183cu: goto label_1d183c;
        case 0x1d1840u: goto label_1d1840;
        case 0x1d1844u: goto label_1d1844;
        case 0x1d1848u: goto label_1d1848;
        case 0x1d184cu: goto label_1d184c;
        case 0x1d1850u: goto label_1d1850;
        case 0x1d1854u: goto label_1d1854;
        case 0x1d1858u: goto label_1d1858;
        case 0x1d185cu: goto label_1d185c;
        case 0x1d1860u: goto label_1d1860;
        case 0x1d1864u: goto label_1d1864;
        case 0x1d1868u: goto label_1d1868;
        case 0x1d186cu: goto label_1d186c;
        case 0x1d1870u: goto label_1d1870;
        case 0x1d1874u: goto label_1d1874;
        case 0x1d1878u: goto label_1d1878;
        case 0x1d187cu: goto label_1d187c;
        case 0x1d1880u: goto label_1d1880;
        case 0x1d1884u: goto label_1d1884;
        case 0x1d1888u: goto label_1d1888;
        case 0x1d188cu: goto label_1d188c;
        default: break;
    }

    ctx->pc = 0x1d1770u;

label_1d1770:
    // 0x1d1770: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1d1770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1d1774:
    // 0x1d1774: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d1774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d1778:
    // 0x1d1778: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x1d1778u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
label_1d177c:
    // 0x1d177c: 0x3c050034  lui         $a1, 0x34
    ctx->pc = 0x1d177cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)52 << 16));
label_1d1780:
    // 0x1d1780: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1d1780u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1d1784:
    // 0x1d1784: 0xaca29b48  sw          $v0, -0x64B8($a1)
    ctx->pc = 0x1d1784u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294941512), GPR_U32(ctx, 2));
label_1d1788:
    // 0x1d1788: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d1788u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1d178c:
    // 0x1d178c: 0x8c669b30  lw          $a2, -0x64D0($v1)
    ctx->pc = 0x1d178cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294941488)));
label_1d1790:
    // 0x1d1790: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1d1790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d1794:
    // 0x1d1794: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1d1794u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_1d1798:
    // 0x1d1798: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1d1798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_1d179c:
    // 0x1d179c: 0x14c20014  bne         $a2, $v0, . + 4 + (0x14 << 2)
label_1d17a0:
    if (ctx->pc == 0x1D17A0u) {
        ctx->pc = 0x1D17A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D179Cu;
        // 0x1d17a0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D17A4u;
        goto label_1d17a4;
    }
    ctx->pc = 0x1D179Cu;
    {
        const bool branch_taken_0x1d179c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D17A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D179Cu;
        // 0x1d17a0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d179c) {
            ctx->pc = 0x1D17F0u;
            goto label_1d17f0;
        }
    }
    ctx->pc = 0x1D17A4u;
label_1d17a4:
    // 0x1d17a4: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1d17a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_1d17a8:
    // 0x1d17a8: 0xc07d234  jal         func_1F48D0
label_1d17ac:
    if (ctx->pc == 0x1D17ACu) {
        ctx->pc = 0x1D17ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D17A8u;
        // 0x1d17ac: 0x8c509a3c  lw          $s0, -0x65C4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294941244)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D17B0u;
        goto label_1d17b0;
    }
    ctx->pc = 0x1D17A8u;
    SET_GPR_U32(ctx, 31, 0x1D17B0u);
    ctx->pc = 0x1D17ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D17A8u;
    // 0x1d17ac: 0x8c509a3c  lw          $s0, -0x65C4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294941244)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F48D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F48D0u, 0x1D17A8u, 0x1D17B0u)) {
        return;
    }
    ctx->pc = 0x1D17B0u;
label_1d17b0:
    // 0x1d17b0: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_1d17b4:
    if (ctx->pc == 0x1D17B4u) {
        ctx->pc = 0x1D17B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D17B0u;
        // 0x1d17b4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D17B8u;
        goto label_1d17b8;
    }
    ctx->pc = 0x1D17B0u;
    {
        const bool branch_taken_0x1d17b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D17B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D17B0u;
        // 0x1d17b4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d17b0) {
            ctx->pc = 0x1D17E4u;
            goto label_1d17e4;
        }
    }
    ctx->pc = 0x1D17B8u;
label_1d17b8:
    // 0x1d17b8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d17b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d17bc:
    // 0x1d17bc: 0xc07d3d6  jal         func_1F4F58
label_1d17c0:
    if (ctx->pc == 0x1D17C0u) {
        ctx->pc = 0x1D17C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D17BCu;
        // 0x1d17c0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D17C4u;
        goto label_1d17c4;
    }
    ctx->pc = 0x1D17BCu;
    SET_GPR_U32(ctx, 31, 0x1D17C4u);
    ctx->pc = 0x1D17C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D17BCu;
    // 0x1d17c0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4F58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4F58u, 0x1D17BCu, 0x1D17C4u)) {
        return;
    }
    ctx->pc = 0x1D17C4u;
label_1d17c4:
    // 0x1d17c4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1d17c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d17c8:
    // 0x1d17c8: 0x10c00006  beqz        $a2, . + 4 + (0x6 << 2)
label_1d17cc:
    if (ctx->pc == 0x1D17CCu) {
        ctx->pc = 0x1D17CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D17C8u;
        // 0x1d17cc: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D17D0u;
        goto label_1d17d0;
    }
    ctx->pc = 0x1D17C8u;
    {
        const bool branch_taken_0x1d17c8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D17CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D17C8u;
        // 0x1d17cc: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d17c8) {
            ctx->pc = 0x1D17E4u;
            goto label_1d17e4;
        }
    }
    ctx->pc = 0x1D17D0u;
label_1d17d0:
    // 0x1d17d0: 0x8cc20024  lw          $v0, 0x24($a2)
    ctx->pc = 0x1d17d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 36)));
label_1d17d4:
    // 0x1d17d4: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x1d17d4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_1d17d8:
    // 0x1d17d8: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x1d17d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1d17dc:
    // 0x1d17dc: 0x60f809  jalr        $v1
label_1d17e0:
    if (ctx->pc == 0x1D17E0u) {
        ctx->pc = 0x1D17E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D17DCu;
        // 0x1d17e0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D17E4u;
        goto label_1d17e4;
    }
    ctx->pc = 0x1D17DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1D17E4u);
        ctx->pc = 0x1D17E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D17DCu;
        // 0x1d17e0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D17DCu, 0x1D17E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D17E4u;
label_1d17e4:
    // 0x1d17e4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1d17e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d17e8:
    // 0x1d17e8: 0xc074b8e  jal         func_1D2E38
label_1d17ec:
    if (ctx->pc == 0x1D17ECu) {
        ctx->pc = 0x1D17ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D17E8u;
        // 0x1d17ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D17F0u;
        goto label_1d17f0;
    }
    ctx->pc = 0x1D17E8u;
    SET_GPR_U32(ctx, 31, 0x1D17F0u);
    ctx->pc = 0x1D17ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D17E8u;
    // 0x1d17ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D2E38u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D2E38u, 0x1D17E8u, 0x1D17F0u)) {
        return;
    }
    ctx->pc = 0x1D17F0u;
label_1d17f0:
    // 0x1d17f0: 0xc074444  jal         func_1D1110
label_1d17f4:
    if (ctx->pc == 0x1D17F4u) {
        ctx->pc = 0x1D17F8u;
        goto label_1d17f8;
    }
    ctx->pc = 0x1D17F0u;
    SET_GPR_U32(ctx, 31, 0x1D17F8u);
    ctx->pc = 0x1D1110u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D1110u, 0x1D17F0u, 0x1D17F8u)) {
        return;
    }
    ctx->pc = 0x1D17F8u;
label_1d17f8:
    // 0x1d17f8: 0xc074b44  jal         func_1D2D10
label_1d17fc:
    if (ctx->pc == 0x1D17FCu) {
        ctx->pc = 0x1D1800u;
        goto label_1d1800;
    }
    ctx->pc = 0x1D17F8u;
    SET_GPR_U32(ctx, 31, 0x1D1800u);
    ctx->pc = 0x1D2D10u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D2D10u, 0x1D17F8u, 0x1D1800u)) {
        return;
    }
    ctx->pc = 0x1D1800u;
label_1d1800:
    // 0x1d1800: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x1d1800u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_1d1804:
    // 0x1d1804: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1d1804u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d1808:
    // 0x1d1808: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1d1808u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_1d180c:
    // 0x1d180c: 0x12200013  beqz        $s1, . + 4 + (0x13 << 2)
label_1d1810:
    if (ctx->pc == 0x1D1810u) {
        ctx->pc = 0x1D1810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D180Cu;
        // 0x1d1810: 0xe4409a64  swc1        $f0, -0x659C($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294941284), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D1814u;
        goto label_1d1814;
    }
    ctx->pc = 0x1D180Cu;
    {
        const bool branch_taken_0x1d180c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D180Cu;
        // 0x1d1810: 0xe4409a64  swc1        $f0, -0x659C($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294941284), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d180c) {
            ctx->pc = 0x1D185Cu;
            goto label_1d185c;
        }
    }
    ctx->pc = 0x1D1814u;
label_1d1814:
    // 0x1d1814: 0x3c120034  lui         $s2, 0x34
    ctx->pc = 0x1d1814u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)52 << 16));
label_1d1818:
    // 0x1d1818: 0x8e429b18  lw          $v0, -0x64E8($s2)
    ctx->pc = 0x1d1818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294941464)));
label_1d181c:
    // 0x1d181c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_1d1820:
    if (ctx->pc == 0x1D1820u) {
        ctx->pc = 0x1D1820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D181Cu;
        // 0x1d1820: 0x3c030034  lui         $v1, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D1824u;
        goto label_1d1824;
    }
    ctx->pc = 0x1D181Cu;
    {
        const bool branch_taken_0x1d181c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D181Cu;
        // 0x1d1820: 0x3c030034  lui         $v1, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d181c) {
            ctx->pc = 0x1D1860u;
            goto label_1d1860;
        }
    }
    ctx->pc = 0x1D1824u;
label_1d1824:
    // 0x1d1824: 0xc074444  jal         func_1D1110
label_1d1828:
    if (ctx->pc == 0x1D1828u) {
        ctx->pc = 0x1D1828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1824u;
        // 0x1d1828: 0x3c100034  lui         $s0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D182Cu;
        goto label_1d182c;
    }
    ctx->pc = 0x1D1824u;
    SET_GPR_U32(ctx, 31, 0x1D182Cu);
    ctx->pc = 0x1D1828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1824u;
    // 0x1d1828: 0x3c100034  lui         $s0, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)52 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1110u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D1110u, 0x1D1824u, 0x1D182Cu)) {
        return;
    }
    ctx->pc = 0x1D182Cu;
label_1d182c:
    // 0x1d182c: 0x8e449b18  lw          $a0, -0x64E8($s2)
    ctx->pc = 0x1d182cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294941464)));
label_1d1830:
    // 0x1d1830: 0xc0808b8  jal         func_2022E0
label_1d1834:
    if (ctx->pc == 0x1D1834u) {
        ctx->pc = 0x1D1834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1830u;
        // 0x1d1834: 0x3c110034  lui         $s1, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D1838u;
        goto label_1d1838;
    }
    ctx->pc = 0x1D1830u;
    SET_GPR_U32(ctx, 31, 0x1D1838u);
    ctx->pc = 0x1D1834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1830u;
    // 0x1d1834: 0x3c110034  lui         $s1, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)52 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x1D1830u, 0x1D1838u)) {
        return;
    }
    ctx->pc = 0x1D1838u;
label_1d1838:
    // 0x1d1838: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1d1838u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_1d183c:
    // 0x1d183c: 0x8e049b20  lw          $a0, -0x64E0($s0)
    ctx->pc = 0x1d183cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294941472)));
label_1d1840:
    // 0x1d1840: 0xac409b1c  sw          $zero, -0x64E4($v0)
    ctx->pc = 0x1d1840u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294941468), GPR_U32(ctx, 0));
label_1d1844:
    // 0x1d1844: 0xc0808b8  jal         func_2022E0
label_1d1848:
    if (ctx->pc == 0x1D1848u) {
        ctx->pc = 0x1D1848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1844u;
        // 0x1d1848: 0xae409b18  sw          $zero, -0x64E8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4294941464), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D184Cu;
        goto label_1d184c;
    }
    ctx->pc = 0x1D1844u;
    SET_GPR_U32(ctx, 31, 0x1D184Cu);
    ctx->pc = 0x1D1848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1844u;
    // 0x1d1848: 0xae409b18  sw          $zero, -0x64E8($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294941464), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x1D1844u, 0x1D184Cu)) {
        return;
    }
    ctx->pc = 0x1D184Cu;
label_1d184c:
    // 0x1d184c: 0x8e249b10  lw          $a0, -0x64F0($s1)
    ctx->pc = 0x1d184cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294941456)));
label_1d1850:
    // 0x1d1850: 0xc08a0e2  jal         func_228388
label_1d1854:
    if (ctx->pc == 0x1D1854u) {
        ctx->pc = 0x1D1854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1850u;
        // 0x1d1854: 0xae009b20  sw          $zero, -0x64E0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294941472), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D1858u;
        goto label_1d1858;
    }
    ctx->pc = 0x1D1850u;
    SET_GPR_U32(ctx, 31, 0x1D1858u);
    ctx->pc = 0x1D1854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1850u;
    // 0x1d1854: 0xae009b20  sw          $zero, -0x64E0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294941472), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228388u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x228388u, 0x1D1850u, 0x1D1858u)) {
        return;
    }
    ctx->pc = 0x1D1858u;
label_1d1858:
    // 0x1d1858: 0xae209b10  sw          $zero, -0x64F0($s1)
    ctx->pc = 0x1d1858u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294941456), GPR_U32(ctx, 0));
label_1d185c:
    // 0x1d185c: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x1d185cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
label_1d1860:
    // 0x1d1860: 0x8c629a68  lw          $v0, -0x6598($v1)
    ctx->pc = 0x1d1860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294941288)));
label_1d1864:
    // 0x1d1864: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1d1868:
    if (ctx->pc == 0x1D1868u) {
        ctx->pc = 0x1D1868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1864u;
        // 0x1d1868: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D186Cu;
        goto label_1d186c;
    }
    ctx->pc = 0x1D1864u;
    {
        const bool branch_taken_0x1d1864 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1864u;
        // 0x1d1868: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1864) {
            ctx->pc = 0x1D1878u;
            goto label_1d1878;
        }
    }
    ctx->pc = 0x1D186Cu;
label_1d186c:
    // 0x1d186c: 0xc0603b6  jal         func_180ED8
label_1d1870:
    if (ctx->pc == 0x1D1870u) {
        ctx->pc = 0x1D1870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D186Cu;
        // 0x1d1870: 0xac609a68  sw          $zero, -0x6598($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294941288), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D1874u;
        goto label_1d1874;
    }
    ctx->pc = 0x1D186Cu;
    SET_GPR_U32(ctx, 31, 0x1D1874u);
    ctx->pc = 0x1D1870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D186Cu;
    // 0x1d1870: 0xac609a68  sw          $zero, -0x6598($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294941288), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180ED8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x180ED8u, 0x1D186Cu, 0x1D1874u)) {
        return;
    }
    ctx->pc = 0x1D1874u;
label_1d1874:
    // 0x1d1874: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1d1874u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1d1878:
    // 0x1d1878: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1d1878u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1d187c:
    // 0x1d187c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1d187cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1d1880:
    // 0x1d1880: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d1880u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d1884:
    // 0x1d1884: 0x3e00008  jr          $ra
label_1d1888:
    if (ctx->pc == 0x1D1888u) {
        ctx->pc = 0x1D1888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1884u;
        // 0x1d1888: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D188Cu;
        goto label_1d188c;
    }
    ctx->pc = 0x1D1884u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D1888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1884u;
        // 0x1d1888: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D1884u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D188Cu;
label_1d188c:
    // 0x1d188c: 0x0  nop
    ctx->pc = 0x1d188cu;
    // NOP
    ctx->pc = 0x1d1890u;
}
