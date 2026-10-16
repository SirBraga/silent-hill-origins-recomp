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

// Function: sub_00184870
// Address: 0x184870 - 0x184b60
void sub_00184870_0x184870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00184870_0x184870");
#endif

    switch (ctx->pc) {
        case 0x184870u: goto label_184870;
        case 0x184874u: goto label_184874;
        case 0x184878u: goto label_184878;
        case 0x18487cu: goto label_18487c;
        case 0x184880u: goto label_184880;
        case 0x184884u: goto label_184884;
        case 0x184888u: goto label_184888;
        case 0x18488cu: goto label_18488c;
        case 0x184890u: goto label_184890;
        case 0x184894u: goto label_184894;
        case 0x184898u: goto label_184898;
        case 0x18489cu: goto label_18489c;
        case 0x1848a0u: goto label_1848a0;
        case 0x1848a4u: goto label_1848a4;
        case 0x1848a8u: goto label_1848a8;
        case 0x1848acu: goto label_1848ac;
        case 0x1848b0u: goto label_1848b0;
        case 0x1848b4u: goto label_1848b4;
        case 0x1848b8u: goto label_1848b8;
        case 0x1848bcu: goto label_1848bc;
        case 0x1848c0u: goto label_1848c0;
        case 0x1848c4u: goto label_1848c4;
        case 0x1848c8u: goto label_1848c8;
        case 0x1848ccu: goto label_1848cc;
        case 0x1848d0u: goto label_1848d0;
        case 0x1848d4u: goto label_1848d4;
        case 0x1848d8u: goto label_1848d8;
        case 0x1848dcu: goto label_1848dc;
        case 0x1848e0u: goto label_1848e0;
        case 0x1848e4u: goto label_1848e4;
        case 0x1848e8u: goto label_1848e8;
        case 0x1848ecu: goto label_1848ec;
        case 0x1848f0u: goto label_1848f0;
        case 0x1848f4u: goto label_1848f4;
        case 0x1848f8u: goto label_1848f8;
        case 0x1848fcu: goto label_1848fc;
        case 0x184900u: goto label_184900;
        case 0x184904u: goto label_184904;
        case 0x184908u: goto label_184908;
        case 0x18490cu: goto label_18490c;
        case 0x184910u: goto label_184910;
        case 0x184914u: goto label_184914;
        case 0x184918u: goto label_184918;
        case 0x18491cu: goto label_18491c;
        case 0x184920u: goto label_184920;
        case 0x184924u: goto label_184924;
        case 0x184928u: goto label_184928;
        case 0x18492cu: goto label_18492c;
        case 0x184930u: goto label_184930;
        case 0x184934u: goto label_184934;
        case 0x184938u: goto label_184938;
        case 0x18493cu: goto label_18493c;
        case 0x184940u: goto label_184940;
        case 0x184944u: goto label_184944;
        case 0x184948u: goto label_184948;
        case 0x18494cu: goto label_18494c;
        case 0x184950u: goto label_184950;
        case 0x184954u: goto label_184954;
        case 0x184958u: goto label_184958;
        case 0x18495cu: goto label_18495c;
        case 0x184960u: goto label_184960;
        case 0x184964u: goto label_184964;
        case 0x184968u: goto label_184968;
        case 0x18496cu: goto label_18496c;
        case 0x184970u: goto label_184970;
        case 0x184974u: goto label_184974;
        case 0x184978u: goto label_184978;
        case 0x18497cu: goto label_18497c;
        case 0x184980u: goto label_184980;
        case 0x184984u: goto label_184984;
        case 0x184988u: goto label_184988;
        case 0x18498cu: goto label_18498c;
        case 0x184990u: goto label_184990;
        case 0x184994u: goto label_184994;
        case 0x184998u: goto label_184998;
        case 0x18499cu: goto label_18499c;
        case 0x1849a0u: goto label_1849a0;
        case 0x1849a4u: goto label_1849a4;
        case 0x1849a8u: goto label_1849a8;
        case 0x1849acu: goto label_1849ac;
        case 0x1849b0u: goto label_1849b0;
        case 0x1849b4u: goto label_1849b4;
        case 0x1849b8u: goto label_1849b8;
        case 0x1849bcu: goto label_1849bc;
        case 0x1849c0u: goto label_1849c0;
        case 0x1849c4u: goto label_1849c4;
        case 0x1849c8u: goto label_1849c8;
        case 0x1849ccu: goto label_1849cc;
        case 0x1849d0u: goto label_1849d0;
        case 0x1849d4u: goto label_1849d4;
        case 0x1849d8u: goto label_1849d8;
        case 0x1849dcu: goto label_1849dc;
        case 0x1849e0u: goto label_1849e0;
        case 0x1849e4u: goto label_1849e4;
        case 0x1849e8u: goto label_1849e8;
        case 0x1849ecu: goto label_1849ec;
        case 0x1849f0u: goto label_1849f0;
        case 0x1849f4u: goto label_1849f4;
        case 0x1849f8u: goto label_1849f8;
        case 0x1849fcu: goto label_1849fc;
        case 0x184a00u: goto label_184a00;
        case 0x184a04u: goto label_184a04;
        case 0x184a08u: goto label_184a08;
        case 0x184a0cu: goto label_184a0c;
        case 0x184a10u: goto label_184a10;
        case 0x184a14u: goto label_184a14;
        case 0x184a18u: goto label_184a18;
        case 0x184a1cu: goto label_184a1c;
        case 0x184a20u: goto label_184a20;
        case 0x184a24u: goto label_184a24;
        case 0x184a28u: goto label_184a28;
        case 0x184a2cu: goto label_184a2c;
        case 0x184a30u: goto label_184a30;
        case 0x184a34u: goto label_184a34;
        case 0x184a38u: goto label_184a38;
        case 0x184a3cu: goto label_184a3c;
        case 0x184a40u: goto label_184a40;
        case 0x184a44u: goto label_184a44;
        case 0x184a48u: goto label_184a48;
        case 0x184a4cu: goto label_184a4c;
        case 0x184a50u: goto label_184a50;
        case 0x184a54u: goto label_184a54;
        case 0x184a58u: goto label_184a58;
        case 0x184a5cu: goto label_184a5c;
        case 0x184a60u: goto label_184a60;
        case 0x184a64u: goto label_184a64;
        case 0x184a68u: goto label_184a68;
        case 0x184a6cu: goto label_184a6c;
        case 0x184a70u: goto label_184a70;
        case 0x184a74u: goto label_184a74;
        case 0x184a78u: goto label_184a78;
        case 0x184a7cu: goto label_184a7c;
        case 0x184a80u: goto label_184a80;
        case 0x184a84u: goto label_184a84;
        case 0x184a88u: goto label_184a88;
        case 0x184a8cu: goto label_184a8c;
        case 0x184a90u: goto label_184a90;
        case 0x184a94u: goto label_184a94;
        case 0x184a98u: goto label_184a98;
        case 0x184a9cu: goto label_184a9c;
        case 0x184aa0u: goto label_184aa0;
        case 0x184aa4u: goto label_184aa4;
        case 0x184aa8u: goto label_184aa8;
        case 0x184aacu: goto label_184aac;
        case 0x184ab0u: goto label_184ab0;
        case 0x184ab4u: goto label_184ab4;
        case 0x184ab8u: goto label_184ab8;
        case 0x184abcu: goto label_184abc;
        case 0x184ac0u: goto label_184ac0;
        case 0x184ac4u: goto label_184ac4;
        case 0x184ac8u: goto label_184ac8;
        case 0x184accu: goto label_184acc;
        case 0x184ad0u: goto label_184ad0;
        case 0x184ad4u: goto label_184ad4;
        case 0x184ad8u: goto label_184ad8;
        case 0x184adcu: goto label_184adc;
        case 0x184ae0u: goto label_184ae0;
        case 0x184ae4u: goto label_184ae4;
        case 0x184ae8u: goto label_184ae8;
        case 0x184aecu: goto label_184aec;
        case 0x184af0u: goto label_184af0;
        case 0x184af4u: goto label_184af4;
        case 0x184af8u: goto label_184af8;
        case 0x184afcu: goto label_184afc;
        case 0x184b00u: goto label_184b00;
        case 0x184b04u: goto label_184b04;
        case 0x184b08u: goto label_184b08;
        case 0x184b0cu: goto label_184b0c;
        case 0x184b10u: goto label_184b10;
        case 0x184b14u: goto label_184b14;
        case 0x184b18u: goto label_184b18;
        case 0x184b1cu: goto label_184b1c;
        case 0x184b20u: goto label_184b20;
        case 0x184b24u: goto label_184b24;
        case 0x184b28u: goto label_184b28;
        case 0x184b2cu: goto label_184b2c;
        case 0x184b30u: goto label_184b30;
        case 0x184b34u: goto label_184b34;
        case 0x184b38u: goto label_184b38;
        case 0x184b3cu: goto label_184b3c;
        case 0x184b40u: goto label_184b40;
        case 0x184b44u: goto label_184b44;
        case 0x184b48u: goto label_184b48;
        case 0x184b4cu: goto label_184b4c;
        case 0x184b50u: goto label_184b50;
        case 0x184b54u: goto label_184b54;
        case 0x184b58u: goto label_184b58;
        case 0x184b5cu: goto label_184b5c;
        default: break;
    }

    ctx->pc = 0x184870u;

label_184870:
    // 0x184870: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x184870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_184874:
    // 0x184874: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x184874u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_184878:
    // 0x184878: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x184878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
label_18487c:
    // 0x18487c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x18487cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_184880:
    // 0x184880: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x184880u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_184884:
    // 0x184884: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x184884u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_184888:
    // 0x184888: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x184888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_18488c:
    // 0x18488c: 0x244285b0  addiu       $v0, $v0, -0x7A50
    ctx->pc = 0x18488cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935984));
label_184890:
    // 0x184890: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x184890u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_184894:
    // 0x184894: 0x3c110073  lui         $s1, 0x73
    ctx->pc = 0x184894u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)115 << 16));
label_184898:
    // 0x184898: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x184898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_18489c:
    // 0x18489c: 0x26310fc8  addiu       $s1, $s1, 0xFC8
    ctx->pc = 0x18489cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4040));
label_1848a0:
    // 0x1848a0: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x1848a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
label_1848a4:
    // 0x1848a4: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x1848a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1848a8:
    // 0x1848a8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1848a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1848ac:
    // 0x1848ac: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1848acu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1848b0:
    // 0x1848b0: 0xe68c0014  swc1        $f12, 0x14($s4)
    ctx->pc = 0x1848b0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 20), bits); }
label_1848b4:
    // 0x1848b4: 0x3c040004  lui         $a0, 0x4
    ctx->pc = 0x1848b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4 << 16));
label_1848b8:
    // 0x1848b8: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x1848b8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
label_1848bc:
    // 0x1848bc: 0x129040  sll         $s2, $s2, 1
    ctx->pc = 0x1848bcu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
label_1848c0:
    // 0x1848c0: 0xae850010  sw          $a1, 0x10($s4)
    ctx->pc = 0x1848c0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 5));
label_1848c4:
    // 0x1848c4: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1848c4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1848c8:
    // 0x1848c8: 0xae820004  sw          $v0, 0x4($s4)
    ctx->pc = 0x1848c8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
label_1848cc:
    // 0x1848cc: 0xae80000c  sw          $zero, 0xC($s4)
    ctx->pc = 0x1848ccu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 0));
label_1848d0:
    // 0x1848d0: 0x8e220108  lw          $v0, 0x108($s1)
    ctx->pc = 0x1848d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 264)));
label_1848d4:
    // 0x1848d4: 0x40f809  jalr        $v0
label_1848d8:
    if (ctx->pc == 0x1848D8u) {
        ctx->pc = 0x1848D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1848D4u;
        // 0x1848d8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1848DCu;
        goto label_1848dc;
    }
    ctx->pc = 0x1848D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1848DCu);
        ctx->pc = 0x1848D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1848D4u;
        // 0x1848d8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1848D4u, 0x1848DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1848DCu;
label_1848dc:
    // 0x1848dc: 0xae820008  sw          $v0, 0x8($s4)
    ctx->pc = 0x1848dcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 2));
label_1848e0:
    // 0x1848e0: 0x26700001  addiu       $s0, $s3, 0x1
    ctx->pc = 0x1848e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1848e4:
    // 0x1848e4: 0x108100  sll         $s0, $s0, 4
    ctx->pc = 0x1848e4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_1848e8:
    // 0x1848e8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1848e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1848ec:
    // 0x1848ec: 0x8e220108  lw          $v0, 0x108($s1)
    ctx->pc = 0x1848ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 264)));
label_1848f0:
    // 0x1848f0: 0x40f809  jalr        $v0
label_1848f4:
    if (ctx->pc == 0x1848F4u) {
        ctx->pc = 0x1848F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1848F0u;
        // 0x1848f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1848F8u;
        goto label_1848f8;
    }
    ctx->pc = 0x1848F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1848F8u);
        ctx->pc = 0x1848F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1848F0u;
        // 0x1848f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1848F0u, 0x1848F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1848F8u;
label_1848f8:
    // 0x1848f8: 0xae82001c  sw          $v0, 0x1C($s4)
    ctx->pc = 0x1848f8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 28), GPR_U32(ctx, 2));
label_1848fc:
    // 0x1848fc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1848fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_184900:
    // 0x184900: 0xae930024  sw          $s3, 0x24($s4)
    ctx->pc = 0x184900u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 36), GPR_U32(ctx, 19));
label_184904:
    // 0x184904: 0xae800020  sw          $zero, 0x20($s4)
    ctx->pc = 0x184904u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 32), GPR_U32(ctx, 0));
label_184908:
    // 0x184908: 0x8e220108  lw          $v0, 0x108($s1)
    ctx->pc = 0x184908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 264)));
label_18490c:
    // 0x18490c: 0x40f809  jalr        $v0
label_184910:
    if (ctx->pc == 0x184910u) {
        ctx->pc = 0x184910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18490Cu;
        // 0x184910: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184914u;
        goto label_184914;
    }
    ctx->pc = 0x18490Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x184914u);
        ctx->pc = 0x184910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18490Cu;
        // 0x184910: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18490Cu, 0x184914u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x184914u;
label_184914:
    // 0x184914: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x184914u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_184918:
    // 0x184918: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x184918u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18491c:
    // 0x18491c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x18491cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_184920:
    // 0x184920: 0x8e84001c  lw          $a0, 0x1C($s4)
    ctx->pc = 0x184920u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
label_184924:
    // 0x184924: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x184924u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_184928:
    // 0x184928: 0xae920034  sw          $s2, 0x34($s4)
    ctx->pc = 0x184928u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 52), GPR_U32(ctx, 18));
label_18492c:
    // 0x18492c: 0xae800030  sw          $zero, 0x30($s4)
    ctx->pc = 0x18492cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 48), GPR_U32(ctx, 0));
label_184930:
    // 0x184930: 0xae800028  sw          $zero, 0x28($s4)
    ctx->pc = 0x184930u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 40), GPR_U32(ctx, 0));
label_184934:
    // 0x184934: 0xae800038  sw          $zero, 0x38($s4)
    ctx->pc = 0x184934u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 56), GPR_U32(ctx, 0));
label_184938:
    // 0x184938: 0xae80003c  sw          $zero, 0x3C($s4)
    ctx->pc = 0x184938u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 60), GPR_U32(ctx, 0));
label_18493c:
    // 0x18493c: 0xae800040  sw          $zero, 0x40($s4)
    ctx->pc = 0x18493cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 64), GPR_U32(ctx, 0));
label_184940:
    // 0x184940: 0xae800044  sw          $zero, 0x44($s4)
    ctx->pc = 0x184940u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 68), GPR_U32(ctx, 0));
label_184944:
    // 0x184944: 0xae800048  sw          $zero, 0x48($s4)
    ctx->pc = 0x184944u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 72), GPR_U32(ctx, 0));
label_184948:
    // 0x184948: 0xae800054  sw          $zero, 0x54($s4)
    ctx->pc = 0x184948u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 84), GPR_U32(ctx, 0));
label_18494c:
    // 0x18494c: 0xae800018  sw          $zero, 0x18($s4)
    ctx->pc = 0x18494cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 0));
label_184950:
    // 0x184950: 0xae80004c  sw          $zero, 0x4C($s4)
    ctx->pc = 0x184950u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 76), GPR_U32(ctx, 0));
label_184954:
    // 0x184954: 0xae800068  sw          $zero, 0x68($s4)
    ctx->pc = 0x184954u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 104), GPR_U32(ctx, 0));
label_184958:
    // 0x184958: 0xae800064  sw          $zero, 0x64($s4)
    ctx->pc = 0x184958u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 100), GPR_U32(ctx, 0));
label_18495c:
    // 0x18495c: 0xe6800050  swc1        $f0, 0x50($s4)
    ctx->pc = 0x18495cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 80), bits); }
label_184960:
    // 0x184960: 0xc0c493d  jal         func_3124F4
label_184964:
    if (ctx->pc == 0x184964u) {
        ctx->pc = 0x184964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184960u;
        // 0x184964: 0xae82002c  sw          $v0, 0x2C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184968u;
        goto label_184968;
    }
    ctx->pc = 0x184960u;
    SET_GPR_U32(ctx, 31, 0x184968u);
    ctx->pc = 0x184964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184960u;
    // 0x184964: 0xae82002c  sw          $v0, 0x2C($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 44), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x184960u, 0x184968u)) {
        return;
    }
    ctx->pc = 0x184968u;
label_184968:
    // 0x184968: 0x8e84002c  lw          $a0, 0x2C($s4)
    ctx->pc = 0x184968u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 44)));
label_18496c:
    // 0x18496c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x18496cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_184970:
    // 0x184970: 0xc0c493d  jal         func_3124F4
label_184974:
    if (ctx->pc == 0x184974u) {
        ctx->pc = 0x184974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184970u;
        // 0x184974: 0x8e860034  lw          $a2, 0x34($s4) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184978u;
        goto label_184978;
    }
    ctx->pc = 0x184970u;
    SET_GPR_U32(ctx, 31, 0x184978u);
    ctx->pc = 0x184974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184970u;
    // 0x184974: 0x8e860034  lw          $a2, 0x34($s4) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 52)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x184970u, 0x184978u)) {
        return;
    }
    ctx->pc = 0x184978u;
label_184978:
    // 0x184978: 0x8e840010  lw          $a0, 0x10($s4)
    ctx->pc = 0x184978u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_18497c:
    // 0x18497c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x18497cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_184980:
    // 0x184980: 0xae800060  sw          $zero, 0x60($s4)
    ctx->pc = 0x184980u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 96), GPR_U32(ctx, 0));
label_184984:
    // 0x184984: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x184984u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_184988:
    // 0x184988: 0xae800058  sw          $zero, 0x58($s4)
    ctx->pc = 0x184988u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 88), GPR_U32(ctx, 0));
label_18498c:
    // 0x18498c: 0xc081444  jal         func_205110
label_184990:
    if (ctx->pc == 0x184990u) {
        ctx->pc = 0x184990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18498Cu;
        // 0x184990: 0xae80005c  sw          $zero, 0x5C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 92), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184994u;
        goto label_184994;
    }
    ctx->pc = 0x18498Cu;
    SET_GPR_U32(ctx, 31, 0x184994u);
    ctx->pc = 0x184990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18498Cu;
    // 0x184990: 0xae80005c  sw          $zero, 0x5C($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 92), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205110u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x205110u, 0x18498Cu, 0x184994u)) {
        return;
    }
    ctx->pc = 0x184994u;
label_184994:
    // 0x184994: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x184994u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_184998:
    // 0x184998: 0x10800013  beqz        $a0, . + 4 + (0x13 << 2)
label_18499c:
    if (ctx->pc == 0x18499Cu) {
        ctx->pc = 0x18499Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184998u;
        // 0x18499c: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1849A0u;
        goto label_1849a0;
    }
    ctx->pc = 0x184998u;
    {
        const bool branch_taken_0x184998 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x18499Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184998u;
        // 0x18499c: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184998) {
            ctx->pc = 0x1849E8u;
            goto label_1849e8;
        }
    }
    ctx->pc = 0x1849A0u;
label_1849a0:
    // 0x1849a0: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x1849a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_1849a4:
    // 0x1849a4: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
label_1849a8:
    if (ctx->pc == 0x1849A8u) {
        ctx->pc = 0x1849ACu;
        goto label_1849ac;
    }
    ctx->pc = 0x1849A4u;
    {
        const bool branch_taken_0x1849a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1849a4) {
            ctx->pc = 0x1849DCu;
            goto label_1849dc;
        }
    }
    ctx->pc = 0x1849ACu;
label_1849ac:
    // 0x1849ac: 0xdc750010  ld          $s5, 0x10($v1)
    ctx->pc = 0x1849acu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 3), 16)));
label_1849b0:
    // 0x1849b0: 0xdc630000  ld          $v1, 0x0($v1)
    ctx->pc = 0x1849b0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 0)));
label_1849b4:
    // 0x1849b4: 0x1512fa  dsrl        $v0, $s5, 11
    ctx->pc = 0x1849b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) >> 11);
label_1849b8:
    // 0x1849b8: 0x212f8  dsll        $v0, $v0, 11
    ctx->pc = 0x1849b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 11);
label_1849bc:
    // 0x1849bc: 0x75182f  dsubu       $v1, $v1, $s5
    ctx->pc = 0x1849bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) - GPR_U64(ctx, 21));
label_1849c0:
    // 0x1849c0: 0x2a2102f  dsubu       $v0, $s5, $v0
    ctx->pc = 0x1849c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) - GPR_U64(ctx, 2));
label_1849c4:
    // 0x1849c4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1849c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_1849c8:
    // 0x1849c8: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1849c8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_1849cc:
    // 0x1849cc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1849ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_1849d0:
    // 0x1849d0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1849d0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_1849d4:
    // 0x1849d4: 0xae830058  sw          $v1, 0x58($s4)
    ctx->pc = 0x1849d4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 88), GPR_U32(ctx, 3));
label_1849d8:
    // 0x1849d8: 0xae82005c  sw          $v0, 0x5C($s4)
    ctx->pc = 0x1849d8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 92), GPR_U32(ctx, 2));
label_1849dc:
    // 0x1849dc: 0xc0817e6  jal         func_205F98
label_1849e0:
    if (ctx->pc == 0x1849E0u) {
        ctx->pc = 0x1849E4u;
        goto label_1849e4;
    }
    ctx->pc = 0x1849DCu;
    SET_GPR_U32(ctx, 31, 0x1849E4u);
    ctx->pc = 0x205F98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x205F98u, 0x1849DCu, 0x1849E4u)) {
        return;
    }
    ctx->pc = 0x1849E4u;
label_1849e4:
    // 0x1849e4: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1849e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_1849e8:
    // 0x1849e8: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1849e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_1849ec:
    // 0x1849ec: 0x24448a38  addiu       $a0, $v0, -0x75C8
    ctx->pc = 0x1849ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937144));
label_1849f0:
    // 0x1849f0: 0x24718580  addiu       $s1, $v1, -0x7A80
    ctx->pc = 0x1849f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935936));
label_1849f4:
    // 0x1849f4: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x1849f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_1849f8:
    // 0x1849f8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1849fc:
    if (ctx->pc == 0x1849FCu) {
        ctx->pc = 0x1849FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1849F8u;
        // 0x1849fc: 0x3a0802d  daddu       $s0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184A00u;
        goto label_184a00;
    }
    ctx->pc = 0x1849F8u;
    {
        const bool branch_taken_0x1849f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1849FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1849F8u;
        // 0x1849fc: 0x3a0802d  daddu       $s0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1849f8) {
            ctx->pc = 0x184A10u;
            goto label_184a10;
        }
    }
    ctx->pc = 0x184A00u;
label_184a00:
    // 0x184a00: 0xc061560  jal         func_185580
label_184a04:
    if (ctx->pc == 0x184A04u) {
        ctx->pc = 0x184A08u;
        goto label_184a08;
    }
    ctx->pc = 0x184A00u;
    SET_GPR_U32(ctx, 31, 0x184A08u);
    ctx->pc = 0x185580u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x185580u, 0x184A00u, 0x184A08u)) {
        return;
    }
    ctx->pc = 0x184A08u;
label_184a08:
    // 0x184a08: 0x10000005  b           . + 4 + (0x5 << 2)
label_184a0c:
    if (ctx->pc == 0x184A0Cu) {
        ctx->pc = 0x184A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184A08u;
        // 0x184a0c: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184A10u;
        goto label_184a10;
    }
    ctx->pc = 0x184A08u;
    {
        const bool branch_taken_0x184a08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x184A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184A08u;
        // 0x184a0c: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184a08) {
            ctx->pc = 0x184A20u;
            goto label_184a20;
        }
    }
    ctx->pc = 0x184A10u;
label_184a10:
    // 0x184a10: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x184a10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_184a14:
    // 0x184a14: 0x24830010  addiu       $v1, $a0, 0x10
    ctx->pc = 0x184a14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_184a18:
    // 0x184a18: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x184a18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_184a1c:
    // 0x184a1c: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x184a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_184a20:
    // 0x184a20: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x184a20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_184a24:
    // 0x184a24: 0xc0c4ab8  jal         func_312AE0
label_184a28:
    if (ctx->pc == 0x184A28u) {
        ctx->pc = 0x184A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184A24u;
        // 0x184a28: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184A2Cu;
        goto label_184a2c;
    }
    ctx->pc = 0x184A24u;
    SET_GPR_U32(ctx, 31, 0x184A2Cu);
    ctx->pc = 0x184A28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184A24u;
    // 0x184a28: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312AE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x312AE0u, 0x184A24u, 0x184A2Cu)) {
        return;
    }
    ctx->pc = 0x184A2Cu;
label_184a2c:
    // 0x184a2c: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x184a2cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
label_184a30:
    // 0x184a30: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x184a30u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_184a34:
    // 0x184a34: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x184a34u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_184a38:
    // 0x184a38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x184a38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_184a3c:
    // 0x184a3c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x184a3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_184a40:
    // 0x184a40: 0xc0615e2  jal         func_185788
label_184a44:
    if (ctx->pc == 0x184A44u) {
        ctx->pc = 0x184A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184A40u;
        // 0x184a44: 0x34c6ffff  ori         $a2, $a2, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x184A48u;
        goto label_184a48;
    }
    ctx->pc = 0x184A40u;
    SET_GPR_U32(ctx, 31, 0x184A48u);
    ctx->pc = 0x184A44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184A40u;
    // 0x184a44: 0x34c6ffff  ori         $a2, $a2, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x185788u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x185788u, 0x184A40u, 0x184A48u)) {
        return;
    }
    ctx->pc = 0x184A48u;
label_184a48:
    // 0x184a48: 0x3c10006a  lui         $s0, 0x6A
    ctx->pc = 0x184a48u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)106 << 16));
label_184a4c:
    // 0x184a4c: 0x26108588  addiu       $s0, $s0, -0x7A78
    ctx->pc = 0x184a4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294935944));
label_184a50:
    // 0x184a50: 0xc0c4ab8  jal         func_312AE0
label_184a54:
    if (ctx->pc == 0x184A54u) {
        ctx->pc = 0x184A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184A50u;
        // 0x184a54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184A58u;
        goto label_184a58;
    }
    ctx->pc = 0x184A50u;
    SET_GPR_U32(ctx, 31, 0x184A58u);
    ctx->pc = 0x184A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184A50u;
    // 0x184a54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312AE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x312AE0u, 0x184A50u, 0x184A58u)) {
        return;
    }
    ctx->pc = 0x184A58u;
label_184a58:
    // 0x184a58: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x184a58u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
label_184a5c:
    // 0x184a5c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x184a5cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_184a60:
    // 0x184a60: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x184a60u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_184a64:
    // 0x184a64: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x184a64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_184a68:
    // 0x184a68: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x184a68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_184a6c:
    // 0x184a6c: 0xc0615e2  jal         func_185788
label_184a70:
    if (ctx->pc == 0x184A70u) {
        ctx->pc = 0x184A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184A6Cu;
        // 0x184a70: 0x34c6ffff  ori         $a2, $a2, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x184A74u;
        goto label_184a74;
    }
    ctx->pc = 0x184A6Cu;
    SET_GPR_U32(ctx, 31, 0x184A74u);
    ctx->pc = 0x184A70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184A6Cu;
    // 0x184a70: 0x34c6ffff  ori         $a2, $a2, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x185788u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x185788u, 0x184A6Cu, 0x184A74u)) {
        return;
    }
    ctx->pc = 0x184A74u;
label_184a74:
    // 0x184a74: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x184a74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_184a78:
    // 0x184a78: 0x8c62fff0  lw          $v0, -0x10($v1)
    ctx->pc = 0x184a78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967280)));
label_184a7c:
    // 0x184a7c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_184a80:
    if (ctx->pc == 0x184A80u) {
        ctx->pc = 0x184A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184A7Cu;
        // 0x184a80: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184A84u;
        goto label_184a84;
    }
    ctx->pc = 0x184A7Cu;
    {
        const bool branch_taken_0x184a7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x184A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184A7Cu;
        // 0x184a80: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184a7c) {
            ctx->pc = 0x184A90u;
            goto label_184a90;
        }
    }
    ctx->pc = 0x184A84u;
label_184a84:
    // 0x184a84: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x184a84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_184a88:
    // 0x184a88: 0x10000003  b           . + 4 + (0x3 << 2)
label_184a8c:
    if (ctx->pc == 0x184A8Cu) {
        ctx->pc = 0x184A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184A88u;
        // 0x184a8c: 0x24448598  addiu       $a0, $v0, -0x7A68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935960));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184A90u;
        goto label_184a90;
    }
    ctx->pc = 0x184A88u;
    {
        const bool branch_taken_0x184a88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x184A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184A88u;
        // 0x184a8c: 0x24448598  addiu       $a0, $v0, -0x7A68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935960));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184a88) {
            ctx->pc = 0x184A98u;
            goto label_184a98;
        }
    }
    ctx->pc = 0x184A90u;
label_184a90:
    // 0x184a90: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x184a90u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
label_184a94:
    // 0x184a94: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x184a94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_184a98:
    // 0x184a98: 0xc060aec  jal         func_182BB0
label_184a9c:
    if (ctx->pc == 0x184A9Cu) {
        ctx->pc = 0x184A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184A98u;
        // 0x184a9c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184AA0u;
        goto label_184aa0;
    }
    ctx->pc = 0x184A98u;
    SET_GPR_U32(ctx, 31, 0x184AA0u);
    ctx->pc = 0x184A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184A98u;
    // 0x184a9c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x182BB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x182BB0u, 0x184A98u, 0x184AA0u)) {
        return;
    }
    ctx->pc = 0x184AA0u;
label_184aa0:
    // 0x184aa0: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x184aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
label_184aa4:
    // 0x184aa4: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x184aa4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
label_184aa8:
    // 0x184aa8: 0x24a58880  addiu       $a1, $a1, -0x7780
    ctx->pc = 0x184aa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936704));
label_184aac:
    // 0x184aac: 0xac748a30  sw          $s4, -0x75D0($v1)
    ctx->pc = 0x184aacu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294937136), GPR_U32(ctx, 20));
label_184ab0:
    // 0x184ab0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x184ab0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_184ab4:
    // 0x184ab4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x184ab4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_184ab8:
    // 0x184ab8: 0xc07fc98  jal         func_1FF260
label_184abc:
    if (ctx->pc == 0x184ABCu) {
        ctx->pc = 0x184ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184AB8u;
        // 0x184abc: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        ctx->pc = 0x184AC0u;
        goto label_184ac0;
    }
    ctx->pc = 0x184AB8u;
    SET_GPR_U32(ctx, 31, 0x184AC0u);
    ctx->pc = 0x184ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184AB8u;
    // 0x184abc: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x184AB8u, 0x184AC0u)) {
        return;
    }
    ctx->pc = 0x184AC0u;
label_184ac0:
    // 0x184ac0: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x184ac0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
label_184ac4:
    // 0x184ac4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x184ac4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_184ac8:
    // 0x184ac8: 0x24a58898  addiu       $a1, $a1, -0x7768
    ctx->pc = 0x184ac8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936728));
label_184acc:
    // 0x184acc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x184accu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_184ad0:
    // 0x184ad0: 0xc07fc98  jal         func_1FF260
label_184ad4:
    if (ctx->pc == 0x184AD4u) {
        ctx->pc = 0x184AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184AD0u;
        // 0x184ad4: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        ctx->pc = 0x184AD8u;
        goto label_184ad8;
    }
    ctx->pc = 0x184AD0u;
    SET_GPR_U32(ctx, 31, 0x184AD8u);
    ctx->pc = 0x184AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184AD0u;
    // 0x184ad4: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x184AD0u, 0x184AD8u)) {
        return;
    }
    ctx->pc = 0x184AD8u;
label_184ad8:
    // 0x184ad8: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x184ad8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_184adc:
    // 0x184adc: 0x24c5fff0  addiu       $a1, $a2, -0x10
    ctx->pc = 0x184adcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967280));
label_184ae0:
    // 0x184ae0: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x184ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_184ae4:
    // 0x184ae4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x184ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_184ae8:
    // 0x184ae8: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
label_184aec:
    if (ctx->pc == 0x184AECu) {
        ctx->pc = 0x184AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184AE8u;
        // 0x184aec: 0xaca20008  sw          $v0, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184AF0u;
        goto label_184af0;
    }
    ctx->pc = 0x184AE8u;
    {
        const bool branch_taken_0x184ae8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x184AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184AE8u;
        // 0x184aec: 0xaca20008  sw          $v0, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184ae8) {
            ctx->pc = 0x184B38u;
            goto label_184b38;
        }
    }
    ctx->pc = 0x184AF0u;
label_184af0:
    // 0x184af0: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x184af0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_184af4:
    // 0x184af4: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x184af4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_184af8:
    // 0x184af8: 0x2c420081  sltiu       $v0, $v0, 0x81
    ctx->pc = 0x184af8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)129) ? 1 : 0);
label_184afc:
    // 0x184afc: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_184b00:
    if (ctx->pc == 0x184B00u) {
        ctx->pc = 0x184B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184AFCu;
        // 0x184b00: 0x24620017  addiu       $v0, $v1, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 23));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184B04u;
        goto label_184b04;
    }
    ctx->pc = 0x184AFCu;
    {
        const bool branch_taken_0x184afc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x184B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184AFCu;
        // 0x184b00: 0x24620017  addiu       $v0, $v1, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184afc) {
            ctx->pc = 0x184B14u;
            goto label_184b14;
        }
    }
    ctx->pc = 0x184B04u;
label_184b04:
    // 0x184b04: 0xc0c5486  jal         func_315218
label_184b08:
    if (ctx->pc == 0x184B08u) {
        ctx->pc = 0x184B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184B04u;
        // 0x184b08: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184B0Cu;
        goto label_184b0c;
    }
    ctx->pc = 0x184B04u;
    SET_GPR_U32(ctx, 31, 0x184B0Cu);
    ctx->pc = 0x184B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184B04u;
    // 0x184b08: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x315218u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x315218u, 0x184B04u, 0x184B0Cu)) {
        return;
    }
    ctx->pc = 0x184B0Cu;
label_184b0c:
    // 0x184b0c: 0x1000000b  b           . + 4 + (0xB << 2)
label_184b10:
    if (ctx->pc == 0x184B10u) {
        ctx->pc = 0x184B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184B0Cu;
        // 0x184b10: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184B14u;
        goto label_184b14;
    }
    ctx->pc = 0x184B0Cu;
    {
        const bool branch_taken_0x184b0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x184B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184B0Cu;
        // 0x184b10: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184b0c) {
            ctx->pc = 0x184B3Cu;
            goto label_184b3c;
        }
    }
    ctx->pc = 0x184B14u;
label_184b14:
    // 0x184b14: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x184b14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
label_184b18:
    // 0x184b18: 0x210c2  srl         $v0, $v0, 3
    ctx->pc = 0x184b18u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
label_184b1c:
    // 0x184b1c: 0x24848290  addiu       $a0, $a0, -0x7D70
    ctx->pc = 0x184b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935184));
label_184b20:
    // 0x184b20: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x184b20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_184b24:
    // 0x184b24: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x184b24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_184b28:
    // 0x184b28: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x184b28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_184b2c:
    // 0x184b2c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x184b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_184b30:
    // 0x184b30: 0xacc3fff0  sw          $v1, -0x10($a2)
    ctx->pc = 0x184b30u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294967280), GPR_U32(ctx, 3));
label_184b34:
    // 0x184b34: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x184b34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
label_184b38:
    // 0x184b38: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x184b38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_184b3c:
    // 0x184b3c: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x184b3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_184b40:
    // 0x184b40: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x184b40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_184b44:
    // 0x184b44: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x184b44u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_184b48:
    // 0x184b48: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x184b48u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_184b4c:
    // 0x184b4c: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x184b4cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_184b50:
    // 0x184b50: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x184b50u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_184b54:
    // 0x184b54: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x184b54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_184b58:
    // 0x184b58: 0x3e00008  jr          $ra
label_184b5c:
    if (ctx->pc == 0x184B5Cu) {
        ctx->pc = 0x184B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184B58u;
        // 0x184b5c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184B60u;
        goto label_fallthrough_0x184b58;
    }
    ctx->pc = 0x184B58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x184B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184B58u;
        // 0x184b5c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x184B58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x184b58:
    ctx->pc = 0x184B60u;
}
