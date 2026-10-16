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

// Function: sub_001D1668
// Address: 0x1d1668 - 0x1d1770
void sub_001D1668_0x1d1668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D1668_0x1d1668");
#endif

    switch (ctx->pc) {
        case 0x1d1680u: goto label_1d1680;
        case 0x1d1694u: goto label_1d1694;
        case 0x1d169cu: goto label_1d169c;
        case 0x1d16bcu: goto label_1d16bc;
        case 0x1d16d0u: goto label_1d16d0;
        case 0x1d16d8u: goto label_1d16d8;
        case 0x1d16e0u: goto label_1d16e0;
        case 0x1d171cu: goto label_1d171c;
        case 0x1d1750u: goto label_1d1750;
        default: break;
    }

    ctx->pc = 0x1d1668u;

    // 0x1d1668: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d1668u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d166c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d166cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d1670: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1d1670u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1d1674: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d1674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d1678: 0xc0603e4  jal         func_180F90
    ctx->pc = 0x1D1678u;
    SET_GPR_U32(ctx, 31, 0x1D1680u);
    ctx->pc = 0x1D167Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1678u;
    // 0x1d167c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180F90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x180F90u, 0x1D1678u, 0x1D1680u)) {
        return;
    }
    ctx->pc = 0x1D1680u;
label_1d1680:
    // 0x1d1680: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D1680u;
    {
        const bool branch_taken_0x1d1680 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1680u;
        // 0x1d1684: 0x3c030034  lui         $v1, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1680) {
            ctx->pc = 0x1D1694u;
            goto label_1d1694;
        }
    }
    ctx->pc = 0x1D1688u;
    // 0x1d1688: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d1688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d168c: 0xc06039c  jal         func_180E70
    ctx->pc = 0x1D168Cu;
    SET_GPR_U32(ctx, 31, 0x1D1694u);
    ctx->pc = 0x1D1690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D168Cu;
    // 0x1d1690: 0xac629a68  sw          $v0, -0x6598($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294941288), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180E70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x180E70u, 0x1D168Cu, 0x1D1694u)) {
        return;
    }
    ctx->pc = 0x1D1694u;
label_1d1694:
    // 0x1d1694: 0xc074566  jal         func_1D1598
    ctx->pc = 0x1D1694u;
    SET_GPR_U32(ctx, 31, 0x1D169Cu);
    ctx->pc = 0x1D1698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1694u;
    // 0x1d1698: 0x3c100034  lui         $s0, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)52 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1598u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D1598u, 0x1D1694u, 0x1D169Cu)) {
        return;
    }
    ctx->pc = 0x1D169Cu;
label_1d169c:
    // 0x1d169c: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1d169cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1d16a0: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x1d16a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x1d16a4: 0x3c050034  lui         $a1, 0x34
    ctx->pc = 0x1d16a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)52 << 16));
    // 0x1d16a8: 0xac409b34  sw          $zero, -0x64CC($v0)
    ctx->pc = 0x1d16a8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x339B34u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x339B34u, _value); } while (0);
    // 0x1d16ac: 0x24849b38  addiu       $a0, $a0, -0x64C8
    ctx->pc = 0x1d16acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941496));
    // 0x1d16b0: 0x24a59b3c  addiu       $a1, $a1, -0x64C4
    ctx->pc = 0x1d16b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941500));
    // 0x1d16b4: 0xc074b74  jal         func_1D2DD0
    ctx->pc = 0x1D16B4u;
    SET_GPR_U32(ctx, 31, 0x1D16BCu);
    ctx->pc = 0x1D16B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D16B4u;
    // 0x1d16b8: 0xae119b30  sw          $s1, -0x64D0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294941488), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D2DD0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D2DD0u, 0x1D16B4u, 0x1D16BCu)) {
        return;
    }
    ctx->pc = 0x1D16BCu;
label_1d16bc:
    // 0x1d16bc: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x1d16bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x1d16c0: 0x3c050034  lui         $a1, 0x34
    ctx->pc = 0x1d16c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)52 << 16));
    // 0x1d16c4: 0x24849b40  addiu       $a0, $a0, -0x64C0
    ctx->pc = 0x1d16c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941504));
    // 0x1d16c8: 0xc074ba4  jal         func_1D2E90
    ctx->pc = 0x1D16C8u;
    SET_GPR_U32(ctx, 31, 0x1D16D0u);
    ctx->pc = 0x1D16CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D16C8u;
    // 0x1d16cc: 0x24a59b44  addiu       $a1, $a1, -0x64BC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941508));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D2E90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D2E90u, 0x1D16C8u, 0x1D16D0u)) {
        return;
    }
    ctx->pc = 0x1D16D0u;
label_1d16d0:
    // 0x1d16d0: 0xc0744b2  jal         func_1D12C8
    ctx->pc = 0x1D16D0u;
    SET_GPR_U32(ctx, 31, 0x1D16D8u);
    ctx->pc = 0x1D12C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D12C8u, 0x1D16D0u, 0x1D16D8u)) {
        return;
    }
    ctx->pc = 0x1D16D8u;
label_1d16d8:
    // 0x1d16d8: 0xc074b30  jal         func_1D2CC0
    ctx->pc = 0x1D16D8u;
    SET_GPR_U32(ctx, 31, 0x1D16E0u);
    ctx->pc = 0x1D2CC0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D2CC0u, 0x1D16D8u, 0x1D16E0u)) {
        return;
    }
    ctx->pc = 0x1D16E0u;
label_1d16e0:
    // 0x1d16e0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1d16e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1d16e4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1d16e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d16e8: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x1d16e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x1d16ec: 0x8e049b30  lw          $a0, -0x64D0($s0)
    ctx->pc = 0x1d16ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294941488)));
    // 0x1d16f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d16f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d16f4: 0x1482000b  bne         $a0, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1D16F4u;
    {
        const bool branch_taken_0x1d16f4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D16F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D16F4u;
        // 0x1d16f8: 0xe4609a64  swc1        $f0, -0x659C($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294941284), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d16f4) {
            ctx->pc = 0x1D1724u;
            goto label_1d1724;
        }
    }
    ctx->pc = 0x1D16FCu;
    // 0x1d16fc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1d16fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1d1700: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x1d1700u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x1d1704: 0x24420d38  addiu       $v0, $v0, 0xD38
    ctx->pc = 0x1d1704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3384));
    // 0x1d1708: 0x3c04001d  lui         $a0, 0x1D
    ctx->pc = 0x1d1708u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)29 << 16));
    // 0x1d170c: 0xac629b14  sw          $v0, -0x64EC($v1)
    ctx->pc = 0x1d170cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x339B14u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x339B14u, _value); } while (0);
    // 0x1d1710: 0x24842018  addiu       $a0, $a0, 0x2018
    ctx->pc = 0x1d1710u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8216));
    // 0x1d1714: 0xc074bfe  jal         func_1D2FF8
    ctx->pc = 0x1D1714u;
    SET_GPR_U32(ctx, 31, 0x1D171Cu);
    ctx->pc = 0x1D1718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1714u;
    // 0x1d1718: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D2FF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D2FF8u, 0x1D1714u, 0x1D171Cu)) {
        return;
    }
    ctx->pc = 0x1D171Cu;
label_1d171c:
    // 0x1d171c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1D171Cu;
    {
        const bool branch_taken_0x1d171c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D171Cu;
        // 0x1d1720: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d171c) {
            ctx->pc = 0x1D1754u;
            goto label_1d1754;
        }
    }
    ctx->pc = 0x1D1724u;
label_1d1724:
    // 0x1d1724: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1d1724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d1728: 0x1482000a  bne         $a0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1D1728u;
    {
        const bool branch_taken_0x1d1728 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D172Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1728u;
        // 0x1d172c: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1728) {
            ctx->pc = 0x1D1754u;
            goto label_1d1754;
        }
    }
    ctx->pc = 0x1D1730u;
    // 0x1d1730: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1d1730u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1d1734: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x1d1734u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x1d1738: 0x24420d48  addiu       $v0, $v0, 0xD48
    ctx->pc = 0x1d1738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3400));
    // 0x1d173c: 0x3c04001d  lui         $a0, 0x1D
    ctx->pc = 0x1d173cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)29 << 16));
    // 0x1d1740: 0xac629b14  sw          $v0, -0x64EC($v1)
    ctx->pc = 0x1d1740u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x339B14u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x339B14u, _value); } while (0);
    // 0x1d1744: 0x24842018  addiu       $a0, $a0, 0x2018
    ctx->pc = 0x1d1744u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8216));
    // 0x1d1748: 0xc074c12  jal         func_1D3048
    ctx->pc = 0x1D1748u;
    SET_GPR_U32(ctx, 31, 0x1D1750u);
    ctx->pc = 0x1D174Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1748u;
    // 0x1d174c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3048u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D3048u, 0x1D1748u, 0x1D1750u)) {
        return;
    }
    ctx->pc = 0x1D1750u;
label_1d1750:
    // 0x1d1750: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1d1750u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_1d1754:
    // 0x1d1754: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1d1754u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d1758: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d1758u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d175c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d175cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d1760: 0xac409b48  sw          $zero, -0x64B8($v0)
    ctx->pc = 0x1d1760u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294941512), GPR_U32(ctx, 0));
    // 0x1d1764: 0x3e00008  jr          $ra
    ctx->pc = 0x1D1764u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D1768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1764u;
        // 0x1d1768: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D1764u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D176Cu;
    // 0x1d176c: 0x0  nop
    ctx->pc = 0x1d176cu;
    // NOP
    ctx->pc = 0x1d1770u;
}
