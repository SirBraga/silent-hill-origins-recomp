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

// Function: sub_0011EFE8
// Address: 0x11efe8 - 0x11f220
void sub_0011EFE8_0x11efe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011EFE8_0x11efe8");
#endif

    switch (ctx->pc) {
        case 0x11efe8u: goto label_11efe8;
        case 0x11efecu: goto label_11efec;
        case 0x11eff0u: goto label_11eff0;
        case 0x11eff4u: goto label_11eff4;
        case 0x11eff8u: goto label_11eff8;
        case 0x11effcu: goto label_11effc;
        case 0x11f000u: goto label_11f000;
        case 0x11f004u: goto label_11f004;
        case 0x11f008u: goto label_11f008;
        case 0x11f00cu: goto label_11f00c;
        case 0x11f010u: goto label_11f010;
        case 0x11f014u: goto label_11f014;
        case 0x11f018u: goto label_11f018;
        case 0x11f01cu: goto label_11f01c;
        case 0x11f020u: goto label_11f020;
        case 0x11f024u: goto label_11f024;
        case 0x11f028u: goto label_11f028;
        case 0x11f02cu: goto label_11f02c;
        case 0x11f030u: goto label_11f030;
        case 0x11f034u: goto label_11f034;
        case 0x11f038u: goto label_11f038;
        case 0x11f03cu: goto label_11f03c;
        case 0x11f040u: goto label_11f040;
        case 0x11f044u: goto label_11f044;
        case 0x11f048u: goto label_11f048;
        case 0x11f04cu: goto label_11f04c;
        case 0x11f050u: goto label_11f050;
        case 0x11f054u: goto label_11f054;
        case 0x11f058u: goto label_11f058;
        case 0x11f05cu: goto label_11f05c;
        case 0x11f060u: goto label_11f060;
        case 0x11f064u: goto label_11f064;
        case 0x11f068u: goto label_11f068;
        case 0x11f06cu: goto label_11f06c;
        case 0x11f070u: goto label_11f070;
        case 0x11f074u: goto label_11f074;
        case 0x11f078u: goto label_11f078;
        case 0x11f07cu: goto label_11f07c;
        case 0x11f080u: goto label_11f080;
        case 0x11f084u: goto label_11f084;
        case 0x11f088u: goto label_11f088;
        case 0x11f08cu: goto label_11f08c;
        case 0x11f090u: goto label_11f090;
        case 0x11f094u: goto label_11f094;
        case 0x11f098u: goto label_11f098;
        case 0x11f09cu: goto label_11f09c;
        case 0x11f0a0u: goto label_11f0a0;
        case 0x11f0a4u: goto label_11f0a4;
        case 0x11f0a8u: goto label_11f0a8;
        case 0x11f0acu: goto label_11f0ac;
        case 0x11f0b0u: goto label_11f0b0;
        case 0x11f0b4u: goto label_11f0b4;
        case 0x11f0b8u: goto label_11f0b8;
        case 0x11f0bcu: goto label_11f0bc;
        case 0x11f0c0u: goto label_11f0c0;
        case 0x11f0c4u: goto label_11f0c4;
        case 0x11f0c8u: goto label_11f0c8;
        case 0x11f0ccu: goto label_11f0cc;
        case 0x11f0d0u: goto label_11f0d0;
        case 0x11f0d4u: goto label_11f0d4;
        case 0x11f0d8u: goto label_11f0d8;
        case 0x11f0dcu: goto label_11f0dc;
        case 0x11f0e0u: goto label_11f0e0;
        case 0x11f0e4u: goto label_11f0e4;
        case 0x11f0e8u: goto label_11f0e8;
        case 0x11f0ecu: goto label_11f0ec;
        case 0x11f0f0u: goto label_11f0f0;
        case 0x11f0f4u: goto label_11f0f4;
        case 0x11f0f8u: goto label_11f0f8;
        case 0x11f0fcu: goto label_11f0fc;
        case 0x11f100u: goto label_11f100;
        case 0x11f104u: goto label_11f104;
        case 0x11f108u: goto label_11f108;
        case 0x11f10cu: goto label_11f10c;
        case 0x11f110u: goto label_11f110;
        case 0x11f114u: goto label_11f114;
        case 0x11f118u: goto label_11f118;
        case 0x11f11cu: goto label_11f11c;
        case 0x11f120u: goto label_11f120;
        case 0x11f124u: goto label_11f124;
        case 0x11f128u: goto label_11f128;
        case 0x11f12cu: goto label_11f12c;
        case 0x11f130u: goto label_11f130;
        case 0x11f134u: goto label_11f134;
        case 0x11f138u: goto label_11f138;
        case 0x11f13cu: goto label_11f13c;
        case 0x11f140u: goto label_11f140;
        case 0x11f144u: goto label_11f144;
        case 0x11f148u: goto label_11f148;
        case 0x11f14cu: goto label_11f14c;
        case 0x11f150u: goto label_11f150;
        case 0x11f154u: goto label_11f154;
        case 0x11f158u: goto label_11f158;
        case 0x11f15cu: goto label_11f15c;
        case 0x11f160u: goto label_11f160;
        case 0x11f164u: goto label_11f164;
        case 0x11f168u: goto label_11f168;
        case 0x11f16cu: goto label_11f16c;
        case 0x11f170u: goto label_11f170;
        case 0x11f174u: goto label_11f174;
        case 0x11f178u: goto label_11f178;
        case 0x11f17cu: goto label_11f17c;
        case 0x11f180u: goto label_11f180;
        case 0x11f184u: goto label_11f184;
        case 0x11f188u: goto label_11f188;
        case 0x11f18cu: goto label_11f18c;
        case 0x11f190u: goto label_11f190;
        case 0x11f194u: goto label_11f194;
        case 0x11f198u: goto label_11f198;
        case 0x11f19cu: goto label_11f19c;
        case 0x11f1a0u: goto label_11f1a0;
        case 0x11f1a4u: goto label_11f1a4;
        case 0x11f1a8u: goto label_11f1a8;
        case 0x11f1acu: goto label_11f1ac;
        case 0x11f1b0u: goto label_11f1b0;
        case 0x11f1b4u: goto label_11f1b4;
        case 0x11f1b8u: goto label_11f1b8;
        case 0x11f1bcu: goto label_11f1bc;
        case 0x11f1c0u: goto label_11f1c0;
        case 0x11f1c4u: goto label_11f1c4;
        case 0x11f1c8u: goto label_11f1c8;
        case 0x11f1ccu: goto label_11f1cc;
        case 0x11f1d0u: goto label_11f1d0;
        case 0x11f1d4u: goto label_11f1d4;
        case 0x11f1d8u: goto label_11f1d8;
        case 0x11f1dcu: goto label_11f1dc;
        case 0x11f1e0u: goto label_11f1e0;
        case 0x11f1e4u: goto label_11f1e4;
        case 0x11f1e8u: goto label_11f1e8;
        case 0x11f1ecu: goto label_11f1ec;
        case 0x11f1f0u: goto label_11f1f0;
        case 0x11f1f4u: goto label_11f1f4;
        case 0x11f1f8u: goto label_11f1f8;
        case 0x11f1fcu: goto label_11f1fc;
        case 0x11f200u: goto label_11f200;
        case 0x11f204u: goto label_11f204;
        case 0x11f208u: goto label_11f208;
        case 0x11f20cu: goto label_11f20c;
        case 0x11f210u: goto label_11f210;
        case 0x11f214u: goto label_11f214;
        case 0x11f218u: goto label_11f218;
        case 0x11f21cu: goto label_11f21c;
        default: break;
    }

    ctx->pc = 0x11efe8u;

label_11efe8:
    // 0x11efe8: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x11efe8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_11efec:
    // 0x11efec: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x11efecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
label_11eff0:
    // 0x11eff0: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x11eff0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
label_11eff4:
    // 0x11eff4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x11eff4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_11eff8:
    // 0x11eff8: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x11eff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
label_11effc:
    // 0x11effc: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x11effcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
label_11f000:
    // 0x11f000: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x11f000u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
label_11f004:
    // 0x11f004: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x11f004u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
label_11f008:
    // 0x11f008: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x11f008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_11f00c:
    // 0x11f00c: 0x7fb70050  sq          $s7, 0x50($sp)
    ctx->pc = 0x11f00cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 23));
label_11f010:
    // 0x11f010: 0x7fbe0040  sq          $fp, 0x40($sp)
    ctx->pc = 0x11f010u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 30));
label_11f014:
    // 0x11f014: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x11f014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_11f018:
    // 0x11f018: 0xc04a16a  jal         func_1285A8
label_11f01c:
    if (ctx->pc == 0x11F01Cu) {
        ctx->pc = 0x11F01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F018u;
        // 0x11f01c: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F020u;
        goto label_11f020;
    }
    ctx->pc = 0x11F018u;
    SET_GPR_U32(ctx, 31, 0x11F020u);
    ctx->pc = 0x11F01Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F018u;
    // 0x11f01c: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1285A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1285A8u, 0x11F018u, 0x11F020u)) {
        return;
    }
    ctx->pc = 0x11F020u;
label_11f020:
    // 0x11f020: 0xa2602d98  sb          $zero, 0x2D98($s3)
    ctx->pc = 0x11f020u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 11672), (uint8_t)GPR_U32(ctx, 0));
label_11f024:
    // 0x11f024: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x11f024u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_11f028:
    // 0x11f028: 0xa2602d9b  sb          $zero, 0x2D9B($s3)
    ctx->pc = 0x11f028u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 11675), (uint8_t)GPR_U32(ctx, 0));
label_11f02c:
    // 0x11f02c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x11f02cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_11f030:
    // 0x11f030: 0xa2602d9a  sb          $zero, 0x2D9A($s3)
    ctx->pc = 0x11f030u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 11674), (uint8_t)GPR_U32(ctx, 0));
label_11f034:
    // 0x11f034: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x11f034u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_11f038:
    // 0x11f038: 0xa2602d99  sb          $zero, 0x2D99($s3)
    ctx->pc = 0x11f038u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 11673), (uint8_t)GPR_U32(ctx, 0));
label_11f03c:
    // 0x11f03c: 0xc07f1c0  jal         func_1FC700
label_11f040:
    if (ctx->pc == 0x11F040u) {
        ctx->pc = 0x11F040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F03Cu;
        // 0x11f040: 0x8c4645d0  lw          $a2, 0x45D0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17872)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F044u;
        goto label_11f044;
    }
    ctx->pc = 0x11F03Cu;
    SET_GPR_U32(ctx, 31, 0x11F044u);
    ctx->pc = 0x11F040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F03Cu;
    // 0x11f040: 0x8c4645d0  lw          $a2, 0x45D0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17872)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC700u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC700u, 0x11F03Cu, 0x11F044u)) {
        return;
    }
    ctx->pc = 0x11F044u;
label_11f044:
    // 0x11f044: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x11f044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_11f048:
    // 0x11f048: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x11f048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_11f04c:
    // 0x11f04c: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
label_11f050:
    if (ctx->pc == 0x11F050u) {
        ctx->pc = 0x11F050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F04Cu;
        // 0x11f050: 0x27b10010  addiu       $s1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F054u;
        goto label_11f054;
    }
    ctx->pc = 0x11F04Cu;
    {
        const bool branch_taken_0x11f04c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F04Cu;
        // 0x11f050: 0x27b10010  addiu       $s1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f04c) {
            ctx->pc = 0x11F0B4u;
            goto label_11f0b4;
        }
    }
    ctx->pc = 0x11F054u;
label_11f054:
    // 0x11f054: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x11f054u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11f058:
    // 0x11f058: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x11f058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_11f05c:
    // 0x11f05c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x11f05cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_11f060:
    // 0x11f060: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
label_11f064:
    if (ctx->pc == 0x11F064u) {
        ctx->pc = 0x11F064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F060u;
        // 0x11f064: 0x24420008  addiu       $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F068u;
        goto label_11f068;
    }
    ctx->pc = 0x11F060u;
    {
        const bool branch_taken_0x11f060 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x11f060) {
            ctx->pc = 0x11F064u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11F060u;
            // 0x11f064: 0x24420008  addiu       $v0, $v0, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11F078u;
            goto label_11f078;
        }
    }
    ctx->pc = 0x11F068u;
label_11f068:
    // 0x11f068: 0x10720005  beq         $v1, $s2, . + 4 + (0x5 << 2)
label_11f06c:
    if (ctx->pc == 0x11F06Cu) {
        ctx->pc = 0x11F06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F068u;
        // 0x11f06c: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F070u;
        goto label_11f070;
    }
    ctx->pc = 0x11F068u;
    {
        const bool branch_taken_0x11f068 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 18));
        ctx->pc = 0x11F06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F068u;
        // 0x11f06c: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f068) {
            ctx->pc = 0x11F080u;
            goto label_11f080;
        }
    }
    ctx->pc = 0x11F070u;
label_11f070:
    // 0x11f070: 0x10000007  b           . + 4 + (0x7 << 2)
label_11f074:
    if (ctx->pc == 0x11F074u) {
        ctx->pc = 0x11F074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F070u;
        // 0x11f074: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F078u;
        goto label_11f078;
    }
    ctx->pc = 0x11F070u;
    {
        const bool branch_taken_0x11f070 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F070u;
        // 0x11f074: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f070) {
            ctx->pc = 0x11F090u;
            goto label_11f090;
        }
    }
    ctx->pc = 0x11F078u;
label_11f078:
    // 0x11f078: 0x10000003  b           . + 4 + (0x3 << 2)
label_11f07c:
    if (ctx->pc == 0x11F07Cu) {
        ctx->pc = 0x11F07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F078u;
        // 0x11f07c: 0xae622d90  sw          $v0, 0x2D90($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 11664), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F080u;
        goto label_11f080;
    }
    ctx->pc = 0x11F078u;
    {
        const bool branch_taken_0x11f078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F078u;
        // 0x11f07c: 0xae622d90  sw          $v0, 0x2D90($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 11664), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f078) {
            ctx->pc = 0x11F088u;
            goto label_11f088;
        }
    }
    ctx->pc = 0x11F080u;
label_11f080:
    // 0x11f080: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x11f080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_11f084:
    // 0x11f084: 0xae622d94  sw          $v0, 0x2D94($s3)
    ctx->pc = 0x11f084u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 11668), GPR_U32(ctx, 2));
label_11f088:
    // 0x11f088: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x11f088u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_11f08c:
    // 0x11f08c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x11f08cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_11f090:
    // 0x11f090: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x11f090u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11f094:
    // 0x11f094: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x11f094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_11f098:
    // 0x11f098: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x11f098u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_11f09c:
    // 0x11f09c: 0xc07f0c8  jal         func_1FC320
label_11f0a0:
    if (ctx->pc == 0x11F0A0u) {
        ctx->pc = 0x11F0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F09Cu;
        // 0x11f0a0: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F0A4u;
        goto label_11f0a4;
    }
    ctx->pc = 0x11F09Cu;
    SET_GPR_U32(ctx, 31, 0x11F0A4u);
    ctx->pc = 0x11F0A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F09Cu;
    // 0x11f0a0: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC320u, 0x11F09Cu, 0x11F0A4u)) {
        return;
    }
    ctx->pc = 0x11F0A4u;
label_11f0a4:
    // 0x11f0a4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x11f0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_11f0a8:
    // 0x11f0a8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x11f0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_11f0ac:
    // 0x11f0ac: 0x5460ffec  bnel        $v1, $zero, . + 4 + (-0x14 << 2)
label_11f0b0:
    if (ctx->pc == 0x11F0B0u) {
        ctx->pc = 0x11F0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F0ACu;
        // 0x11f0b0: 0x8c430004  lw          $v1, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F0B4u;
        goto label_11f0b4;
    }
    ctx->pc = 0x11F0ACu;
    {
        const bool branch_taken_0x11f0ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x11f0ac) {
            ctx->pc = 0x11F0B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11F0ACu;
            // 0x11f0b0: 0x8c430004  lw          $v1, 0x4($v0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11F060u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11f060;
        }
    }
    ctx->pc = 0x11F0B4u;
label_11f0b4:
    // 0x11f0b4: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x11f0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
label_11f0b8:
    // 0x11f0b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11f0b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_11f0bc:
    // 0x11f0bc: 0x8c461a68  lw          $a2, 0x1A68($v0)
    ctx->pc = 0x11f0bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6760)));
label_11f0c0:
    // 0x11f0c0: 0xc07f1c0  jal         func_1FC700
label_11f0c4:
    if (ctx->pc == 0x11F0C4u) {
        ctx->pc = 0x11F0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F0C0u;
        // 0x11f0c4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F0C8u;
        goto label_11f0c8;
    }
    ctx->pc = 0x11F0C0u;
    SET_GPR_U32(ctx, 31, 0x11F0C8u);
    ctx->pc = 0x11F0C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F0C0u;
    // 0x11f0c4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC700u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC700u, 0x11F0C0u, 0x11F0C8u)) {
        return;
    }
    ctx->pc = 0x11F0C8u;
label_11f0c8:
    // 0x11f0c8: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x11f0c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_11f0cc:
    // 0x11f0cc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x11f0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_11f0d0:
    // 0x11f0d0: 0x10400046  beqz        $v0, . + 4 + (0x46 << 2)
label_11f0d4:
    if (ctx->pc == 0x11F0D4u) {
        ctx->pc = 0x11F0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F0D0u;
        // 0x11f0d4: 0x3c020073  lui         $v0, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F0D8u;
        goto label_11f0d8;
    }
    ctx->pc = 0x11F0D0u;
    {
        const bool branch_taken_0x11f0d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F0D0u;
        // 0x11f0d4: 0x3c020073  lui         $v0, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f0d0) {
            ctx->pc = 0x11F1ECu;
            goto label_11f1ec;
        }
    }
    ctx->pc = 0x11F0D8u;
label_11f0d8:
    // 0x11f0d8: 0x3c1e0069  lui         $fp, 0x69
    ctx->pc = 0x11f0d8u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)105 << 16));
label_11f0dc:
    // 0x11f0dc: 0x2457108c  addiu       $s7, $v0, 0x108C
    ctx->pc = 0x11f0dcu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 4236));
label_11f0e0:
    // 0x11f0e0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x11f0e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_11f0e4:
    // 0x11f0e4: 0x0  nop
    ctx->pc = 0x11f0e4u;
    // NOP
label_11f0e8:
    // 0x11f0e8: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x11f0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_11f0ec:
    // 0x11f0ec: 0x14400035  bnez        $v0, . + 4 + (0x35 << 2)
label_11f0f0:
    if (ctx->pc == 0x11F0F0u) {
        ctx->pc = 0x11F0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F0ECu;
        // 0x11f0f0: 0x8fa30010  lw          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F0F4u;
        goto label_11f0f4;
    }
    ctx->pc = 0x11F0ECu;
    {
        const bool branch_taken_0x11f0ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11F0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F0ECu;
        // 0x11f0f0: 0x8fa30010  lw          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f0ec) {
            ctx->pc = 0x11F1C4u;
            goto label_11f1c4;
        }
    }
    ctx->pc = 0x11F0F4u;
label_11f0f4:
    // 0x11f0f4: 0x24940008  addiu       $s4, $a0, 0x8
    ctx->pc = 0x11f0f4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_11f0f8:
    // 0x11f0f8: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x11f0f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_11f0fc:
    // 0x11f0fc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x11f0fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_11f100:
    // 0x11f100: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11f100u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11f104:
    // 0x11f104: 0xc08063c  jal         func_2018F0
label_11f108:
    if (ctx->pc == 0x11F108u) {
        ctx->pc = 0x11F108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F104u;
        // 0x11f108: 0x27a70024  addiu       $a3, $sp, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F10Cu;
        goto label_11f10c;
    }
    ctx->pc = 0x11F104u;
    SET_GPR_U32(ctx, 31, 0x11F10Cu);
    ctx->pc = 0x11F108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F104u;
    // 0x11f108: 0x27a70024  addiu       $a3, $sp, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2018F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2018F0u, 0x11F104u, 0x11F10Cu)) {
        return;
    }
    ctx->pc = 0x11F10Cu;
label_11f10c:
    // 0x11f10c: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
label_11f110:
    if (ctx->pc == 0x11F110u) {
        ctx->pc = 0x11F110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F10Cu;
        // 0x11f110: 0x27c4b670  addiu       $a0, $fp, -0x4990 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 4294948464));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F114u;
        goto label_11f114;
    }
    ctx->pc = 0x11F10Cu;
    {
        const bool branch_taken_0x11f10c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F10Cu;
        // 0x11f110: 0x27c4b670  addiu       $a0, $fp, -0x4990 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 4294948464));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f10c) {
            ctx->pc = 0x11F1C0u;
            goto label_11f1c0;
        }
    }
    ctx->pc = 0x11F114u;
label_11f114:
    // 0x11f114: 0x8ee20024  lw          $v0, 0x24($s7)
    ctx->pc = 0x11f114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 36)));
label_11f118:
    // 0x11f118: 0x40f809  jalr        $v0
label_11f11c:
    if (ctx->pc == 0x11F11Cu) {
        ctx->pc = 0x11F11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F118u;
        // 0x11f11c: 0x8fa50020  lw          $a1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F120u;
        goto label_11f120;
    }
    ctx->pc = 0x11F118u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11F120u);
        ctx->pc = 0x11F11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F118u;
        // 0x11f11c: 0x8fa50020  lw          $a1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11F118u, 0x11F120u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11F120u;
label_11f120:
    // 0x11f120: 0x14400028  bnez        $v0, . + 4 + (0x28 << 2)
label_11f124:
    if (ctx->pc == 0x11F124u) {
        ctx->pc = 0x11F124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F120u;
        // 0x11f124: 0x8fa30010  lw          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F128u;
        goto label_11f128;
    }
    ctx->pc = 0x11F120u;
    {
        const bool branch_taken_0x11f120 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11F124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F120u;
        // 0x11f124: 0x8fa30010  lw          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f120) {
            ctx->pc = 0x11F1C4u;
            goto label_11f1c4;
        }
    }
    ctx->pc = 0x11F128u;
label_11f128:
    // 0x11f128: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x11f128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_11f12c:
    // 0x11f12c: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
label_11f130:
    if (ctx->pc == 0x11F130u) {
        ctx->pc = 0x11F130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F12Cu;
        // 0x11f130: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F134u;
        goto label_11f134;
    }
    ctx->pc = 0x11F12Cu;
    {
        const bool branch_taken_0x11f12c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F12Cu;
        // 0x11f130: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f12c) {
            ctx->pc = 0x11F1C8u;
            goto label_11f1c8;
        }
    }
    ctx->pc = 0x11F134u;
label_11f134:
    // 0x11f134: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x11f134u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11f138:
    // 0x11f138: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x11f138u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11f13c:
    // 0x11f13c: 0x3c150034  lui         $s5, 0x34
    ctx->pc = 0x11f13cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)52 << 16));
label_11f140:
    // 0x11f140: 0x26712d9c  addiu       $s1, $s3, 0x2D9C
    ctx->pc = 0x11f140u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 11676));
label_11f144:
    // 0x11f144: 0x26702d90  addiu       $s0, $s3, 0x2D90
    ctx->pc = 0x11f144u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 11664));
label_11f148:
    // 0x11f148: 0x52560001  beql        $s2, $s6, . + 4 + (0x1 << 2)
label_11f14c:
    if (ctx->pc == 0x11F14Cu) {
        ctx->pc = 0x11F14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F148u;
        // 0x11f14c: 0xa2722d9b  sb          $s2, 0x2D9B($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 11675), (uint8_t)GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F150u;
        goto label_11f150;
    }
    ctx->pc = 0x11F148u;
    {
        const bool branch_taken_0x11f148 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 22));
        if (branch_taken_0x11f148) {
            ctx->pc = 0x11F14Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11F148u;
            // 0x11f14c: 0xa2722d9b  sb          $s2, 0x2D9B($s3) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 19), 11675), (uint8_t)GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11F150u;
            goto label_11f150;
        }
    }
    ctx->pc = 0x11F150u;
label_11f150:
    // 0x11f150: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x11f150u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_11f154:
    // 0x11f154: 0xc065c68  jal         func_1971A0
label_11f158:
    if (ctx->pc == 0x11F158u) {
        ctx->pc = 0x11F158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F154u;
        // 0x11f158: 0x8fa50024  lw          $a1, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F15Cu;
        goto label_11f15c;
    }
    ctx->pc = 0x11F154u;
    SET_GPR_U32(ctx, 31, 0x11F15Cu);
    ctx->pc = 0x11F158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F154u;
    // 0x11f158: 0x8fa50024  lw          $a1, 0x24($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1971A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1971A0u, 0x11F154u, 0x11F15Cu)) {
        return;
    }
    ctx->pc = 0x11F15Cu;
label_11f15c:
    // 0x11f15c: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_11f160:
    if (ctx->pc == 0x11F160u) {
        ctx->pc = 0x11F160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F15Cu;
        // 0x11f160: 0x26660040  addiu       $a2, $s3, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F164u;
        goto label_11f164;
    }
    ctx->pc = 0x11F15Cu;
    {
        const bool branch_taken_0x11f15c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F15Cu;
        // 0x11f160: 0x26660040  addiu       $a2, $s3, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f15c) {
            ctx->pc = 0x11F1ACu;
            goto label_11f1ac;
        }
    }
    ctx->pc = 0x11F164u;
label_11f164:
    // 0x11f164: 0x8cc200e4  lw          $v0, 0xE4($a2)
    ctx->pc = 0x11f164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 228)));
label_11f168:
    // 0x11f168: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_11f16c:
    if (ctx->pc == 0x11F16Cu) {
        ctx->pc = 0x11F16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F168u;
        // 0x11f16c: 0x8ea48668  lw          $a0, -0x7998($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294936168)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F170u;
        goto label_11f170;
    }
    ctx->pc = 0x11F168u;
    {
        const bool branch_taken_0x11f168 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F168u;
        // 0x11f16c: 0x8ea48668  lw          $a0, -0x7998($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294936168)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f168) {
            ctx->pc = 0x11F178u;
            goto label_11f178;
        }
    }
    ctx->pc = 0x11F170u;
label_11f170:
    // 0x11f170: 0x10000002  b           . + 4 + (0x2 << 2)
label_11f174:
    if (ctx->pc == 0x11F174u) {
        ctx->pc = 0x11F174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F170u;
        // 0x11f174: 0x8cc600d8  lw          $a2, 0xD8($a2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F178u;
        goto label_11f178;
    }
    ctx->pc = 0x11F170u;
    {
        const bool branch_taken_0x11f170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F170u;
        // 0x11f174: 0x8cc600d8  lw          $a2, 0xD8($a2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 216)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f170) {
            ctx->pc = 0x11F17Cu;
            goto label_11f17c;
        }
    }
    ctx->pc = 0x11F178u;
label_11f178:
    // 0x11f178: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11f178u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11f17c:
    // 0x11f17c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x11f17cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_11f180:
    // 0x11f180: 0x26672d98  addiu       $a3, $s3, 0x2D98
    ctx->pc = 0x11f180u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 11672));
label_11f184:
    // 0x11f184: 0xc058d5a  jal         func_163568
label_11f188:
    if (ctx->pc == 0x11F188u) {
        ctx->pc = 0x11F188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F184u;
        // 0x11f188: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F18Cu;
        goto label_11f18c;
    }
    ctx->pc = 0x11F184u;
    SET_GPR_U32(ctx, 31, 0x11F18Cu);
    ctx->pc = 0x11F188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F184u;
    // 0x11f188: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x163568u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x163568u, 0x11F184u, 0x11F18Cu)) {
        return;
    }
    ctx->pc = 0x11F18Cu;
label_11f18c:
    // 0x11f18c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x11f18cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11f190:
    // 0x11f190: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
label_11f194:
    if (ctx->pc == 0x11F194u) {
        ctx->pc = 0x11F194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F190u;
        // 0x11f194: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F198u;
        goto label_11f198;
    }
    ctx->pc = 0x11F190u;
    {
        const bool branch_taken_0x11f190 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x11f190) {
            ctx->pc = 0x11F194u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11F190u;
            // 0x11f194: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11F1B0u;
            goto label_11f1b0;
        }
    }
    ctx->pc = 0x11F198u;
label_11f198:
    // 0x11f198: 0x8c620660  lw          $v0, 0x660($v1)
    ctx->pc = 0x11f198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1632)));
label_11f19c:
    // 0x11f19c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_11f1a0:
    if (ctx->pc == 0x11F1A0u) {
        ctx->pc = 0x11F1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F19Cu;
        // 0x11f1a0: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F1A4u;
        goto label_11f1a4;
    }
    ctx->pc = 0x11F19Cu;
    {
        const bool branch_taken_0x11f19c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11f19c) {
            ctx->pc = 0x11F1A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11F19Cu;
            // 0x11f1a0: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11F1B0u;
            goto label_11f1b0;
        }
    }
    ctx->pc = 0x11F1A4u;
label_11f1a4:
    // 0x11f1a4: 0x8c620040  lw          $v0, 0x40($v1)
    ctx->pc = 0x11f1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
label_11f1a8:
    // 0x11f1a8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x11f1a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_11f1ac:
    // 0x11f1ac: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x11f1acu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_11f1b0:
    // 0x11f1b0: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x11f1b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_11f1b4:
    // 0x11f1b4: 0x2e420002  sltiu       $v0, $s2, 0x2
    ctx->pc = 0x11f1b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_11f1b8:
    // 0x11f1b8: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
label_11f1bc:
    if (ctx->pc == 0x11F1BCu) {
        ctx->pc = 0x11F1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F1B8u;
        // 0x11f1bc: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F1C0u;
        goto label_11f1c0;
    }
    ctx->pc = 0x11F1B8u;
    {
        const bool branch_taken_0x11f1b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11F1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F1B8u;
        // 0x11f1bc: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f1b8) {
            ctx->pc = 0x11F148u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11f148;
        }
    }
    ctx->pc = 0x11F1C0u;
label_11f1c0:
    // 0x11f1c0: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x11f1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_11f1c4:
    // 0x11f1c4: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x11f1c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_11f1c8:
    // 0x11f1c8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x11f1c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11f1cc:
    // 0x11f1cc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x11f1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_11f1d0:
    // 0x11f1d0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x11f1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_11f1d4:
    // 0x11f1d4: 0xc07f0c8  jal         func_1FC320
label_11f1d8:
    if (ctx->pc == 0x11F1D8u) {
        ctx->pc = 0x11F1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F1D4u;
        // 0x11f1d8: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F1DCu;
        goto label_11f1dc;
    }
    ctx->pc = 0x11F1D4u;
    SET_GPR_U32(ctx, 31, 0x11F1DCu);
    ctx->pc = 0x11F1D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F1D4u;
    // 0x11f1d8: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC320u, 0x11F1D4u, 0x11F1DCu)) {
        return;
    }
    ctx->pc = 0x11F1DCu;
label_11f1dc:
    // 0x11f1dc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x11f1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_11f1e0:
    // 0x11f1e0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x11f1e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_11f1e4:
    // 0x11f1e4: 0x1460ffc0  bnez        $v1, . + 4 + (-0x40 << 2)
label_11f1e8:
    if (ctx->pc == 0x11F1E8u) {
        ctx->pc = 0x11F1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F1E4u;
        // 0x11f1e8: 0x8fa40010  lw          $a0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F1ECu;
        goto label_11f1ec;
    }
    ctx->pc = 0x11F1E4u;
    {
        const bool branch_taken_0x11f1e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x11F1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F1E4u;
        // 0x11f1e8: 0x8fa40010  lw          $a0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f1e4) {
            ctx->pc = 0x11F0E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11f0e8;
        }
    }
    ctx->pc = 0x11F1ECu;
label_11f1ec:
    // 0x11f1ec: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x11f1ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_11f1f0:
    // 0x11f1f0: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x11f1f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_11f1f4:
    // 0x11f1f4: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x11f1f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_11f1f8:
    // 0x11f1f8: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x11f1f8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_11f1fc:
    // 0x11f1fc: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x11f1fcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_11f200:
    // 0x11f200: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x11f200u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_11f204:
    // 0x11f204: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x11f204u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_11f208:
    // 0x11f208: 0x7bb70050  lq          $s7, 0x50($sp)
    ctx->pc = 0x11f208u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_11f20c:
    // 0x11f20c: 0x7bbe0040  lq          $fp, 0x40($sp)
    ctx->pc = 0x11f20cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_11f210:
    // 0x11f210: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x11f210u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_11f214:
    // 0x11f214: 0x3e00008  jr          $ra
label_11f218:
    if (ctx->pc == 0x11F218u) {
        ctx->pc = 0x11F218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F214u;
        // 0x11f218: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F21Cu;
        goto label_11f21c;
    }
    ctx->pc = 0x11F214u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11F218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F214u;
        // 0x11f218: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11F214u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11F21Cu;
label_11f21c:
    // 0x11f21c: 0x0  nop
    ctx->pc = 0x11f21cu;
    // NOP
    ctx->pc = 0x11f220u;
}
