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

// Function: sub_0022FFD0
// Address: 0x22ffd0 - 0x2302c8
void sub_0022FFD0_0x22ffd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022FFD0_0x22ffd0");
#endif

    switch (ctx->pc) {
        case 0x22ffd0u: goto label_22ffd0;
        case 0x22ffd4u: goto label_22ffd4;
        case 0x22ffd8u: goto label_22ffd8;
        case 0x22ffdcu: goto label_22ffdc;
        case 0x22ffe0u: goto label_22ffe0;
        case 0x22ffe4u: goto label_22ffe4;
        case 0x22ffe8u: goto label_22ffe8;
        case 0x22ffecu: goto label_22ffec;
        case 0x22fff0u: goto label_22fff0;
        case 0x22fff4u: goto label_22fff4;
        case 0x22fff8u: goto label_22fff8;
        case 0x22fffcu: goto label_22fffc;
        case 0x230000u: goto label_230000;
        case 0x230004u: goto label_230004;
        case 0x230008u: goto label_230008;
        case 0x23000cu: goto label_23000c;
        case 0x230010u: goto label_230010;
        case 0x230014u: goto label_230014;
        case 0x230018u: goto label_230018;
        case 0x23001cu: goto label_23001c;
        case 0x230020u: goto label_230020;
        case 0x230024u: goto label_230024;
        case 0x230028u: goto label_230028;
        case 0x23002cu: goto label_23002c;
        case 0x230030u: goto label_230030;
        case 0x230034u: goto label_230034;
        case 0x230038u: goto label_230038;
        case 0x23003cu: goto label_23003c;
        case 0x230040u: goto label_230040;
        case 0x230044u: goto label_230044;
        case 0x230048u: goto label_230048;
        case 0x23004cu: goto label_23004c;
        case 0x230050u: goto label_230050;
        case 0x230054u: goto label_230054;
        case 0x230058u: goto label_230058;
        case 0x23005cu: goto label_23005c;
        case 0x230060u: goto label_230060;
        case 0x230064u: goto label_230064;
        case 0x230068u: goto label_230068;
        case 0x23006cu: goto label_23006c;
        case 0x230070u: goto label_230070;
        case 0x230074u: goto label_230074;
        case 0x230078u: goto label_230078;
        case 0x23007cu: goto label_23007c;
        case 0x230080u: goto label_230080;
        case 0x230084u: goto label_230084;
        case 0x230088u: goto label_230088;
        case 0x23008cu: goto label_23008c;
        case 0x230090u: goto label_230090;
        case 0x230094u: goto label_230094;
        case 0x230098u: goto label_230098;
        case 0x23009cu: goto label_23009c;
        case 0x2300a0u: goto label_2300a0;
        case 0x2300a4u: goto label_2300a4;
        case 0x2300a8u: goto label_2300a8;
        case 0x2300acu: goto label_2300ac;
        case 0x2300b0u: goto label_2300b0;
        case 0x2300b4u: goto label_2300b4;
        case 0x2300b8u: goto label_2300b8;
        case 0x2300bcu: goto label_2300bc;
        case 0x2300c0u: goto label_2300c0;
        case 0x2300c4u: goto label_2300c4;
        case 0x2300c8u: goto label_2300c8;
        case 0x2300ccu: goto label_2300cc;
        case 0x2300d0u: goto label_2300d0;
        case 0x2300d4u: goto label_2300d4;
        case 0x2300d8u: goto label_2300d8;
        case 0x2300dcu: goto label_2300dc;
        case 0x2300e0u: goto label_2300e0;
        case 0x2300e4u: goto label_2300e4;
        case 0x2300e8u: goto label_2300e8;
        case 0x2300ecu: goto label_2300ec;
        case 0x2300f0u: goto label_2300f0;
        case 0x2300f4u: goto label_2300f4;
        case 0x2300f8u: goto label_2300f8;
        case 0x2300fcu: goto label_2300fc;
        case 0x230100u: goto label_230100;
        case 0x230104u: goto label_230104;
        case 0x230108u: goto label_230108;
        case 0x23010cu: goto label_23010c;
        case 0x230110u: goto label_230110;
        case 0x230114u: goto label_230114;
        case 0x230118u: goto label_230118;
        case 0x23011cu: goto label_23011c;
        case 0x230120u: goto label_230120;
        case 0x230124u: goto label_230124;
        case 0x230128u: goto label_230128;
        case 0x23012cu: goto label_23012c;
        case 0x230130u: goto label_230130;
        case 0x230134u: goto label_230134;
        case 0x230138u: goto label_230138;
        case 0x23013cu: goto label_23013c;
        case 0x230140u: goto label_230140;
        case 0x230144u: goto label_230144;
        case 0x230148u: goto label_230148;
        case 0x23014cu: goto label_23014c;
        case 0x230150u: goto label_230150;
        case 0x230154u: goto label_230154;
        case 0x230158u: goto label_230158;
        case 0x23015cu: goto label_23015c;
        case 0x230160u: goto label_230160;
        case 0x230164u: goto label_230164;
        case 0x230168u: goto label_230168;
        case 0x23016cu: goto label_23016c;
        case 0x230170u: goto label_230170;
        case 0x230174u: goto label_230174;
        case 0x230178u: goto label_230178;
        case 0x23017cu: goto label_23017c;
        case 0x230180u: goto label_230180;
        case 0x230184u: goto label_230184;
        case 0x230188u: goto label_230188;
        case 0x23018cu: goto label_23018c;
        case 0x230190u: goto label_230190;
        case 0x230194u: goto label_230194;
        case 0x230198u: goto label_230198;
        case 0x23019cu: goto label_23019c;
        case 0x2301a0u: goto label_2301a0;
        case 0x2301a4u: goto label_2301a4;
        case 0x2301a8u: goto label_2301a8;
        case 0x2301acu: goto label_2301ac;
        case 0x2301b0u: goto label_2301b0;
        case 0x2301b4u: goto label_2301b4;
        case 0x2301b8u: goto label_2301b8;
        case 0x2301bcu: goto label_2301bc;
        case 0x2301c0u: goto label_2301c0;
        case 0x2301c4u: goto label_2301c4;
        case 0x2301c8u: goto label_2301c8;
        case 0x2301ccu: goto label_2301cc;
        case 0x2301d0u: goto label_2301d0;
        case 0x2301d4u: goto label_2301d4;
        case 0x2301d8u: goto label_2301d8;
        case 0x2301dcu: goto label_2301dc;
        case 0x2301e0u: goto label_2301e0;
        case 0x2301e4u: goto label_2301e4;
        case 0x2301e8u: goto label_2301e8;
        case 0x2301ecu: goto label_2301ec;
        case 0x2301f0u: goto label_2301f0;
        case 0x2301f4u: goto label_2301f4;
        case 0x2301f8u: goto label_2301f8;
        case 0x2301fcu: goto label_2301fc;
        case 0x230200u: goto label_230200;
        case 0x230204u: goto label_230204;
        case 0x230208u: goto label_230208;
        case 0x23020cu: goto label_23020c;
        case 0x230210u: goto label_230210;
        case 0x230214u: goto label_230214;
        case 0x230218u: goto label_230218;
        case 0x23021cu: goto label_23021c;
        case 0x230220u: goto label_230220;
        case 0x230224u: goto label_230224;
        case 0x230228u: goto label_230228;
        case 0x23022cu: goto label_23022c;
        case 0x230230u: goto label_230230;
        case 0x230234u: goto label_230234;
        case 0x230238u: goto label_230238;
        case 0x23023cu: goto label_23023c;
        case 0x230240u: goto label_230240;
        case 0x230244u: goto label_230244;
        case 0x230248u: goto label_230248;
        case 0x23024cu: goto label_23024c;
        case 0x230250u: goto label_230250;
        case 0x230254u: goto label_230254;
        case 0x230258u: goto label_230258;
        case 0x23025cu: goto label_23025c;
        case 0x230260u: goto label_230260;
        case 0x230264u: goto label_230264;
        case 0x230268u: goto label_230268;
        case 0x23026cu: goto label_23026c;
        case 0x230270u: goto label_230270;
        case 0x230274u: goto label_230274;
        case 0x230278u: goto label_230278;
        case 0x23027cu: goto label_23027c;
        case 0x230280u: goto label_230280;
        case 0x230284u: goto label_230284;
        case 0x230288u: goto label_230288;
        case 0x23028cu: goto label_23028c;
        case 0x230290u: goto label_230290;
        case 0x230294u: goto label_230294;
        case 0x230298u: goto label_230298;
        case 0x23029cu: goto label_23029c;
        case 0x2302a0u: goto label_2302a0;
        case 0x2302a4u: goto label_2302a4;
        case 0x2302a8u: goto label_2302a8;
        case 0x2302acu: goto label_2302ac;
        case 0x2302b0u: goto label_2302b0;
        case 0x2302b4u: goto label_2302b4;
        case 0x2302b8u: goto label_2302b8;
        case 0x2302bcu: goto label_2302bc;
        case 0x2302c0u: goto label_2302c0;
        case 0x2302c4u: goto label_2302c4;
        default: break;
    }

    ctx->pc = 0x22ffd0u;

label_22ffd0:
    // 0x22ffd0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x22ffd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_22ffd4:
    // 0x22ffd4: 0x8f82840c  lw          $v0, -0x7BF4($gp)
    ctx->pc = 0x22ffd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935564)));
label_22ffd8:
    // 0x22ffd8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x22ffd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_22ffdc:
    // 0x22ffdc: 0x3c120010  lui         $s2, 0x10
    ctx->pc = 0x22ffdcu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)16 << 16));
label_22ffe0:
    // 0x22ffe0: 0x8f838408  lw          $v1, -0x7BF8($gp)
    ctx->pc = 0x22ffe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935560)));
label_22ffe4:
    // 0x22ffe4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x22ffe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_22ffe8:
    // 0x22ffe8: 0x42900b  movn        $s2, $v0, $v0
    ctx->pc = 0x22ffe8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2));
label_22ffec:
    // 0x22ffec: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x22ffecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_22fff0:
    // 0x22fff0: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
label_22fff4:
    if (ctx->pc == 0x22FFF4u) {
        ctx->pc = 0x22FFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FFF0u;
        // 0x22fff4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FFF8u;
        goto label_22fff8;
    }
    ctx->pc = 0x22FFF0u;
    {
        const bool branch_taken_0x22fff0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x22FFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FFF0u;
        // 0x22fff4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fff0) {
            ctx->pc = 0x230024u;
            goto label_230024;
        }
    }
    ctx->pc = 0x22FFF8u;
label_22fff8:
    // 0x22fff8: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x22fff8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_22fffc:
    // 0x22fffc: 0x3c050004  lui         $a1, 0x4
    ctx->pc = 0x22fffcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4 << 16));
label_230000:
    // 0x230000: 0x8c6210d0  lw          $v0, 0x10D0($v1)
    ctx->pc = 0x230000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4304)));
label_230004:
    // 0x230004: 0x26440080  addiu       $a0, $s2, 0x80
    ctx->pc = 0x230004u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
label_230008:
    // 0x230008: 0x40f809  jalr        $v0
label_23000c:
    if (ctx->pc == 0x23000Cu) {
        ctx->pc = 0x23000Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230008u;
        // 0x23000c: 0x34a50411  ori         $a1, $a1, 0x411 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1041);
        ctx->in_delay_slot = false;
        ctx->pc = 0x230010u;
        goto label_230010;
    }
    ctx->pc = 0x230008u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x230010u);
        ctx->pc = 0x23000Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230008u;
        // 0x23000c: 0x34a50411  ori         $a1, $a1, 0x411 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1041);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x230008u, 0x230010u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x230010u;
label_230010:
    // 0x230010: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_230014:
    if (ctx->pc == 0x230014u) {
        ctx->pc = 0x230014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230010u;
        // 0x230014: 0xaf828408  sw          $v0, -0x7BF8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935560), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230018u;
        goto label_230018;
    }
    ctx->pc = 0x230010u;
    {
        const bool branch_taken_0x230010 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x230014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230010u;
        // 0x230014: 0xaf828408  sw          $v0, -0x7BF8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935560), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230010) {
            ctx->pc = 0x230020u;
            goto label_230020;
        }
    }
    ctx->pc = 0x230018u;
label_230018:
    // 0x230018: 0x100000a5  b           . + 4 + (0xA5 << 2)
label_23001c:
    if (ctx->pc == 0x23001Cu) {
        ctx->pc = 0x23001Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230018u;
        // 0x23001c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230020u;
        goto label_230020;
    }
    ctx->pc = 0x230018u;
    {
        const bool branch_taken_0x230018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23001Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230018u;
        // 0x23001c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230018) {
            ctx->pc = 0x2302B0u;
            goto label_2302b0;
        }
    }
    ctx->pc = 0x230020u;
label_230020:
    // 0x230020: 0xaf80840c  sw          $zero, -0x7BF4($gp)
    ctx->pc = 0x230020u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935564), GPR_U32(ctx, 0));
label_230024:
    // 0x230024: 0x8f828408  lw          $v0, -0x7BF8($gp)
    ctx->pc = 0x230024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935560)));
label_230028:
    // 0x230028: 0x3c11ffff  lui         $s1, 0xFFFF
    ctx->pc = 0x230028u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65535 << 16));
label_23002c:
    // 0x23002c: 0x3631ff80  ori         $s1, $s1, 0xFF80
    ctx->pc = 0x23002cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)65408);
label_230030:
    // 0x230030: 0x2442007f  addiu       $v0, $v0, 0x7F
    ctx->pc = 0x230030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 127));
label_230034:
    // 0x230034: 0xc08bf18  jal         func_22FC60
label_230038:
    if (ctx->pc == 0x230038u) {
        ctx->pc = 0x230038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230034u;
        // 0x230038: 0x518024  and         $s0, $v0, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23003Cu;
        goto label_23003c;
    }
    ctx->pc = 0x230034u;
    SET_GPR_U32(ctx, 31, 0x23003Cu);
    ctx->pc = 0x230038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230034u;
    // 0x230038: 0x518024  and         $s0, $v0, $s1 (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FC60u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22FC60u, 0x230034u, 0x23003Cu)) {
        return;
    }
    ctx->pc = 0x23003Cu;
label_23003c:
    // 0x23003c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_230040:
    if (ctx->pc == 0x230040u) {
        ctx->pc = 0x230040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23003Cu;
        // 0x230040: 0x97828406  lhu         $v0, -0x7BFA($gp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294935558)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230044u;
        goto label_230044;
    }
    ctx->pc = 0x23003Cu;
    {
        const bool branch_taken_0x23003c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x230040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23003Cu;
        // 0x230040: 0x97828406  lhu         $v0, -0x7BFA($gp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294935558)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23003c) {
            ctx->pc = 0x230068u;
            goto label_230068;
        }
    }
    ctx->pc = 0x230044u;
label_230044:
    // 0x230044: 0x8f82840c  lw          $v0, -0x7BF4($gp)
    ctx->pc = 0x230044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935564)));
label_230048:
    // 0x230048: 0x14400099  bnez        $v0, . + 4 + (0x99 << 2)
label_23004c:
    if (ctx->pc == 0x23004Cu) {
        ctx->pc = 0x23004Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230048u;
        // 0x23004c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230050u;
        goto label_230050;
    }
    ctx->pc = 0x230048u;
    {
        const bool branch_taken_0x230048 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23004Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230048u;
        // 0x23004c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230048) {
            ctx->pc = 0x2302B0u;
            goto label_2302b0;
        }
    }
    ctx->pc = 0x230050u;
label_230050:
    // 0x230050: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x230050u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_230054:
    // 0x230054: 0x8c6210d4  lw          $v0, 0x10D4($v1)
    ctx->pc = 0x230054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4308)));
label_230058:
    // 0x230058: 0x40f809  jalr        $v0
label_23005c:
    if (ctx->pc == 0x23005Cu) {
        ctx->pc = 0x23005Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230058u;
        // 0x23005c: 0x8f848408  lw          $a0, -0x7BF8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935560)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230060u;
        goto label_230060;
    }
    ctx->pc = 0x230058u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x230060u);
        ctx->pc = 0x23005Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230058u;
        // 0x23005c: 0x8f848408  lw          $a0, -0x7BF8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935560)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x230058u, 0x230060u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x230060u;
label_230060:
    // 0x230060: 0x10000093  b           . + 4 + (0x93 << 2)
label_230064:
    if (ctx->pc == 0x230064u) {
        ctx->pc = 0x230064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230060u;
        // 0x230064: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230068u;
        goto label_230068;
    }
    ctx->pc = 0x230060u;
    {
        const bool branch_taken_0x230060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230060u;
        // 0x230064: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230060) {
            ctx->pc = 0x2302B0u;
            goto label_2302b0;
        }
    }
    ctx->pc = 0x230068u;
label_230068:
    // 0x230068: 0x2643f800  addiu       $v1, $s2, -0x800
    ctx->pc = 0x230068u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294965248));
label_23006c:
    // 0x23006c: 0xaf9083fc  sw          $s0, -0x7C04($gp)
    ctx->pc = 0x23006cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935548), GPR_U32(ctx, 16));
label_230070:
    // 0x230070: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x230070u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_230074:
    // 0x230074: 0x26100800  addiu       $s0, $s0, 0x800
    ctx->pc = 0x230074u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2048));
label_230078:
    // 0x230078: 0x629023  subu        $s2, $v1, $v0
    ctx->pc = 0x230078u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_23007c:
    // 0x23007c: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x23007cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
label_230080:
    // 0x230080: 0xac303ec0  sw          $s0, 0x3EC0($at)
    ctx->pc = 0x230080u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 16064), GPR_U32(ctx, 16));
label_230084:
    // 0x230084: 0x121042  srl         $v0, $s2, 1
    ctx->pc = 0x230084u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
label_230088:
    // 0x230088: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x230088u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
label_23008c:
    // 0x23008c: 0xa0203ecc  sb          $zero, 0x3ECC($at)
    ctx->pc = 0x23008cu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 16076), (uint8_t)GPR_U32(ctx, 0));
label_230090:
    // 0x230090: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x230090u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
label_230094:
    // 0x230094: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x230094u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
label_230098:
    // 0x230098: 0xa4203f10  sh          $zero, 0x3F10($at)
    ctx->pc = 0x230098u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 16144), (uint16_t)GPR_U32(ctx, 0));
label_23009c:
    // 0x23009c: 0x2022021  addu        $a0, $s0, $v0
    ctx->pc = 0x23009cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_2300a0:
    // 0x2300a0: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x2300a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
label_2300a4:
    // 0x2300a4: 0xac223ec8  sw          $v0, 0x3EC8($at)
    ctx->pc = 0x2300a4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 16072), GPR_U32(ctx, 2));
label_2300a8:
    // 0x2300a8: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2300a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_2300ac:
    // 0x2300ac: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x2300acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
label_2300b0:
    // 0x2300b0: 0xac243ec4  sw          $a0, 0x3EC4($at)
    ctx->pc = 0x2300b0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 16068), GPR_U32(ctx, 4));
label_2300b4:
    // 0x2300b4: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x2300b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
label_2300b8:
    // 0x2300b8: 0xac223f0c  sw          $v0, 0x3F0C($at)
    ctx->pc = 0x2300b8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 16140), GPR_U32(ctx, 2));
label_2300bc:
    // 0x2300bc: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x2300bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
label_2300c0:
    // 0x2300c0: 0xa4203f12  sh          $zero, 0x3F12($at)
    ctx->pc = 0x2300c0u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 16146), (uint16_t)GPR_U32(ctx, 0));
label_2300c4:
    // 0x2300c4: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x2300c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
label_2300c8:
    // 0x2300c8: 0xac303ee4  sw          $s0, 0x3EE4($at)
    ctx->pc = 0x2300c8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 16100), GPR_U32(ctx, 16));
label_2300cc:
    // 0x2300cc: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x2300ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
label_2300d0:
    // 0x2300d0: 0xac20412c  sw          $zero, 0x412C($at)
    ctx->pc = 0x2300d0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 16684), GPR_U32(ctx, 0));
label_2300d4:
    // 0x2300d4: 0x26030080  addiu       $v1, $s0, 0x80
    ctx->pc = 0x2300d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
label_2300d8:
    // 0x2300d8: 0x26020078  addiu       $v0, $s0, 0x78
    ctx->pc = 0x2300d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
label_2300dc:
    // 0x2300dc: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x2300dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
label_2300e0:
    // 0x2300e0: 0xac223ee0  sw          $v0, 0x3EE0($at)
    ctx->pc = 0x2300e0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 16096), GPR_U32(ctx, 2));
label_2300e4:
    // 0x2300e4: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x2300e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
label_2300e8:
    // 0x2300e8: 0xac233edc  sw          $v1, 0x3EDC($at)
    ctx->pc = 0x2300e8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 16092), GPR_U32(ctx, 3));
label_2300ec:
    // 0x2300ec: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x2300ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
label_2300f0:
    // 0x2300f0: 0xac243ed0  sw          $a0, 0x3ED0($at)
    ctx->pc = 0x2300f0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 16080), GPR_U32(ctx, 4));
label_2300f4:
    // 0x2300f4: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x2300f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
label_2300f8:
    // 0x2300f8: 0xac243ed8  sw          $a0, 0x3ED8($at)
    ctx->pc = 0x2300f8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 16088), GPR_U32(ctx, 4));
label_2300fc:
    // 0x2300fc: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x2300fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
label_230100:
    // 0x230100: 0xac204160  sw          $zero, 0x4160($at)
    ctx->pc = 0x230100u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 16736), GPR_U32(ctx, 0));
label_230104:
    // 0x230104: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x230104u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
label_230108:
    // 0x230108: 0xac203ee8  sw          $zero, 0x3EE8($at)
    ctx->pc = 0x230108u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 16104), GPR_U32(ctx, 0));
label_23010c:
    // 0x23010c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x23010cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_230110:
    // 0x230110: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x230110u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
label_230114:
    // 0x230114: 0xac203ef0  sw          $zero, 0x3EF0($at)
    ctx->pc = 0x230114u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 16112), GPR_U32(ctx, 0));
label_230118:
    // 0x230118: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x230118u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
label_23011c:
    // 0x23011c: 0xac203ef4  sw          $zero, 0x3EF4($at)
    ctx->pc = 0x23011cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 16116), GPR_U32(ctx, 0));
label_230120:
    // 0x230120: 0x70424389  pcpyld      $t0, $v0, $v0
    ctx->pc = 0x230120u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 2)));
label_230124:
    // 0x230124: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x230124u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_230128:
    // 0x230128: 0x8f8283fc  lw          $v0, -0x7C04($gp)
    ctx->pc = 0x230128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935548)));
label_23012c:
    // 0x23012c: 0x71900  sll         $v1, $a3, 4
    ctx->pc = 0x23012cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
label_230130:
    // 0x230130: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x230130u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_230134:
    // 0x230134: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x230134u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_230138:
    // 0x230138: 0x28e40080  slti        $a0, $a3, 0x80
    ctx->pc = 0x230138u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)128) ? 1 : 0);
label_23013c:
    // 0x23013c: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
label_230140:
    if (ctx->pc == 0x230140u) {
        ctx->pc = 0x230140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23013Cu;
        // 0x230140: 0x7c680000  sq          $t0, 0x0($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230144u;
        goto label_230144;
    }
    ctx->pc = 0x23013Cu;
    {
        const bool branch_taken_0x23013c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x230140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23013Cu;
        // 0x230140: 0x7c680000  sq          $t0, 0x0($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23013c) {
            ctx->pc = 0x230128u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_230128;
        }
    }
    ctx->pc = 0x230144u;
label_230144:
    // 0x230144: 0x8f8683fc  lw          $a2, -0x7C04($gp)
    ctx->pc = 0x230144u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935548)));
label_230148:
    // 0x230148: 0x3403c000  ori         $v1, $zero, 0xC000
    ctx->pc = 0x230148u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49152);
label_23014c:
    // 0x23014c: 0x31afc  dsll32      $v1, $v1, 11
    ctx->pc = 0x23014cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 11));
label_230150:
    // 0x230150: 0x3c021100  lui         $v0, 0x1100
    ctx->pc = 0x230150u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4352 << 16));
label_230154:
    // 0x230154: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x230154u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_230158:
    // 0x230158: 0x70624389  pcpyld      $t0, $v1, $v0
    ctx->pc = 0x230158u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_23015c:
    // 0x23015c: 0x3c040600  lui         $a0, 0x600
    ctx->pc = 0x23015cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1536 << 16));
label_230160:
    // 0x230160: 0x34848000  ori         $a0, $a0, 0x8000
    ctx->pc = 0x230160u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32768);
label_230164:
    // 0x230164: 0x7cc80070  sq          $t0, 0x70($a2)
    ctx->pc = 0x230164u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 112), GPR_VEC(ctx, 8));
label_230168:
    // 0x230168: 0x34039800  ori         $v1, $zero, 0x9800
    ctx->pc = 0x230168u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)38912);
label_23016c:
    // 0x23016c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x23016cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_230170:
    // 0x230170: 0x34638800  ori         $v1, $v1, 0x8800
    ctx->pc = 0x230170u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34816);
label_230174:
    // 0x230174: 0x31b78  dsll        $v1, $v1, 13
    ctx->pc = 0x230174u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 13);
label_230178:
    // 0x230178: 0x70a44389  pcpyld      $t0, $a1, $a0
    ctx->pc = 0x230178u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
label_23017c:
    // 0x23017c: 0x3c066000  lui         $a2, 0x6000
    ctx->pc = 0x23017cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)24576 << 16));
label_230180:
    // 0x230180: 0x34c60040  ori         $a2, $a2, 0x40
    ctx->pc = 0x230180u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)64);
label_230184:
    // 0x230184: 0x8f8283fc  lw          $v0, -0x7C04($gp)
    ctx->pc = 0x230184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935548)));
label_230188:
    // 0x230188: 0x2404007f  addiu       $a0, $zero, 0x7F
    ctx->pc = 0x230188u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
label_23018c:
    // 0x23018c: 0x24070040  addiu       $a3, $zero, 0x40
    ctx->pc = 0x23018cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_230190:
    // 0x230190: 0x7c480200  sq          $t0, 0x200($v0)
    ctx->pc = 0x230190u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 512), GPR_VEC(ctx, 8));
label_230194:
    // 0x230194: 0x70634389  pcpyld      $t0, $v1, $v1
    ctx->pc = 0x230194u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 3)));
label_230198:
    // 0x230198: 0x8f8283fc  lw          $v0, -0x7C04($gp)
    ctx->pc = 0x230198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935548)));
label_23019c:
    // 0x23019c: 0x7c480210  sq          $t0, 0x210($v0)
    ctx->pc = 0x23019cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 528), GPR_VEC(ctx, 8));
label_2301a0:
    // 0x2301a0: 0x70a64389  pcpyld      $t0, $a1, $a2
    ctx->pc = 0x2301a0u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 5), GPR_VEC(ctx, 6)));
label_2301a4:
    // 0x2301a4: 0x8f8283fc  lw          $v0, -0x7C04($gp)
    ctx->pc = 0x2301a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935548)));
label_2301a8:
    // 0x2301a8: 0x7c4803f0  sq          $t0, 0x3F0($v0)
    ctx->pc = 0x2301a8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 1008), GPR_VEC(ctx, 8));
label_2301ac:
    // 0x2301ac: 0x70854389  pcpyld      $t0, $a0, $a1
    ctx->pc = 0x2301acu;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
label_2301b0:
    // 0x2301b0: 0x8f8283fc  lw          $v0, -0x7C04($gp)
    ctx->pc = 0x2301b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935548)));
label_2301b4:
    // 0x2301b4: 0x71900  sll         $v1, $a3, 4
    ctx->pc = 0x2301b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
label_2301b8:
    // 0x2301b8: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2301b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_2301bc:
    // 0x2301bc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2301bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2301c0:
    // 0x2301c0: 0x28e40080  slti        $a0, $a3, 0x80
    ctx->pc = 0x2301c0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)128) ? 1 : 0);
label_2301c4:
    // 0x2301c4: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
label_2301c8:
    if (ctx->pc == 0x2301C8u) {
        ctx->pc = 0x2301C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2301C4u;
        // 0x2301c8: 0x7c680000  sq          $t0, 0x0($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2301CCu;
        goto label_2301cc;
    }
    ctx->pc = 0x2301C4u;
    {
        const bool branch_taken_0x2301c4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2301C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2301C4u;
        // 0x2301c8: 0x7c680000  sq          $t0, 0x0($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2301c4) {
            ctx->pc = 0x2301B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2301b0;
        }
    }
    ctx->pc = 0x2301CCu;
label_2301cc:
    // 0x2301cc: 0x9f8283fc  lwu         $v0, -0x7C04($gp)
    ctx->pc = 0x2301ccu;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294935548)));
label_2301d0:
    // 0x2301d0: 0x3c043000  lui         $a0, 0x3000
    ctx->pc = 0x2301d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)12288 << 16));
label_2301d4:
    // 0x2301d4: 0x34840021  ori         $a0, $a0, 0x21
    ctx->pc = 0x2301d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)33);
label_2301d8:
    // 0x2301d8: 0x34069800  ori         $a2, $zero, 0x9800
    ctx->pc = 0x2301d8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)38912);
label_2301dc:
    // 0x2301dc: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x2301dcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
label_2301e0:
    // 0x2301e0: 0x34c68800  ori         $a2, $a2, 0x8800
    ctx->pc = 0x2301e0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)34816);
label_2301e4:
    // 0x2301e4: 0x63378  dsll        $a2, $a2, 13
    ctx->pc = 0x2301e4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 13);
label_2301e8:
    // 0x2301e8: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x2301e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
label_2301ec:
    // 0x2301ec: 0x34630022  ori         $v1, $v1, 0x22
    ctx->pc = 0x2301ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34);
label_2301f0:
    // 0x2301f0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2301f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_2301f4:
    // 0x2301f4: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x2301f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
label_2301f8:
    // 0x2301f8: 0x442025  or          $a0, $v0, $a0
    ctx->pc = 0x2301f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_2301fc:
    // 0x2301fc: 0x24a53670  addiu       $a1, $a1, 0x3670
    ctx->pc = 0x2301fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13936));
label_230200:
    // 0x230200: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x230200u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_230204:
    // 0x230204: 0x70c44389  pcpyld      $t0, $a2, $a0
    ctx->pc = 0x230204u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 6), GPR_VEC(ctx, 4)));
label_230208:
    // 0x230208: 0x7ca80000  sq          $t0, 0x0($a1)
    ctx->pc = 0x230208u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 8));
label_23020c:
    // 0x23020c: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x23020cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
label_230210:
    // 0x230210: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x230210u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
label_230214:
    // 0x230214: 0x8ca53ec8  lw          $a1, 0x3EC8($a1)
    ctx->pc = 0x230214u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16072)));
label_230218:
    // 0x230218: 0x70c24389  pcpyld      $t0, $a2, $v0
    ctx->pc = 0x230218u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 6), GPR_VEC(ctx, 2)));
label_23021c:
    // 0x23021c: 0x24633690  addiu       $v1, $v1, 0x3690
    ctx->pc = 0x23021cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13968));
label_230220:
    // 0x230220: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x230220u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
label_230224:
    // 0x230224: 0x7c680000  sq          $t0, 0x0($v1)
    ctx->pc = 0x230224u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 8));
label_230228:
    // 0x230228: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x230228u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
label_23022c:
    // 0x23022c: 0x24423680  addiu       $v0, $v0, 0x3680
    ctx->pc = 0x23022cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13952));
label_230230:
    // 0x230230: 0x70c74389  pcpyld      $t0, $a2, $a3
    ctx->pc = 0x230230u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 6), GPR_VEC(ctx, 7)));
label_230234:
    // 0x230234: 0x8f8483fc  lw          $a0, -0x7C04($gp)
    ctx->pc = 0x230234u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935548)));
label_230238:
    // 0x230238: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x230238u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_23023c:
    // 0x23023c: 0x7c480000  sq          $t0, 0x0($v0)
    ctx->pc = 0x23023cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 8));
label_230240:
    // 0x230240: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x230240u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_230244:
    // 0x230244: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x230244u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
label_230248:
    // 0x230248: 0x70674389  pcpyld      $t0, $v1, $a3
    ctx->pc = 0x230248u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 7)));
label_23024c:
    // 0x23024c: 0x244236a0  addiu       $v0, $v0, 0x36A0
    ctx->pc = 0x23024cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13984));
label_230250:
    // 0x230250: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x230250u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_230254:
    // 0x230254: 0x7c480000  sq          $t0, 0x0($v0)
    ctx->pc = 0x230254u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 8));
label_230258:
    // 0x230258: 0xc0c86e4  jal         func_321B90
label_23025c:
    if (ctx->pc == 0x23025Cu) {
        ctx->pc = 0x23025Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230258u;
        // 0x23025c: 0x24a507ff  addiu       $a1, $a1, 0x7FF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2047));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230260u;
        goto label_230260;
    }
    ctx->pc = 0x230258u;
    SET_GPR_U32(ctx, 31, 0x230260u);
    ctx->pc = 0x23025Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230258u;
    // 0x23025c: 0x24a507ff  addiu       $a1, $a1, 0x7FF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2047));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321B90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321B90u, 0x230258u, 0x230260u)) {
        return;
    }
    ctx->pc = 0x230260u;
label_230260:
    // 0x230260: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x230260u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
label_230264:
    // 0x230264: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x230264u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
label_230268:
    // 0x230268: 0xa0203ef8  sb          $zero, 0x3EF8($at)
    ctx->pc = 0x230268u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 16120), (uint8_t)GPR_U32(ctx, 0));
label_23026c:
    // 0x23026c: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x23026cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
label_230270:
    // 0x230270: 0xac223ea8  sw          $v0, 0x3EA8($at)
    ctx->pc = 0x230270u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 16040), GPR_U32(ctx, 2));
label_230274:
    // 0x230274: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x230274u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
label_230278:
    // 0x230278: 0xac203eac  sw          $zero, 0x3EAC($at)
    ctx->pc = 0x230278u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 16044), GPR_U32(ctx, 0));
label_23027c:
    // 0x23027c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23027cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_230280:
    // 0x230280: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x230280u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
label_230284:
    // 0x230284: 0xac203eb0  sw          $zero, 0x3EB0($at)
    ctx->pc = 0x230284u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 16048), GPR_U32(ctx, 0));
label_230288:
    // 0x230288: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x230288u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
label_23028c:
    // 0x23028c: 0xac203eb4  sw          $zero, 0x3EB4($at)
    ctx->pc = 0x23028cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 16052), GPR_U32(ctx, 0));
label_230290:
    // 0x230290: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x230290u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
label_230294:
    // 0x230294: 0xac203eb8  sw          $zero, 0x3EB8($at)
    ctx->pc = 0x230294u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 16056), GPR_U32(ctx, 0));
label_230298:
    // 0x230298: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x230298u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
label_23029c:
    // 0x23029c: 0xa020415c  sb          $zero, 0x415C($at)
    ctx->pc = 0x23029cu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 16732), (uint8_t)GPR_U32(ctx, 0));
label_2302a0:
    // 0x2302a0: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x2302a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
label_2302a4:
    // 0x2302a4: 0xac204164  sw          $zero, 0x4164($at)
    ctx->pc = 0x2302a4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 16740), GPR_U32(ctx, 0));
label_2302a8:
    // 0x2302a8: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x2302a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
label_2302ac:
    // 0x2302ac: 0xa0203f08  sb          $zero, 0x3F08($at)
    ctx->pc = 0x2302acu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 16136), (uint8_t)GPR_U32(ctx, 0));
label_2302b0:
    // 0x2302b0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2302b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2302b4:
    // 0x2302b4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2302b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2302b8:
    // 0x2302b8: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2302b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2302bc:
    // 0x2302bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2302bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2302c0:
    // 0x2302c0: 0x3e00008  jr          $ra
label_2302c4:
    if (ctx->pc == 0x2302C4u) {
        ctx->pc = 0x2302C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2302C0u;
        // 0x2302c4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2302C8u;
        goto label_fallthrough_0x2302c0;
    }
    ctx->pc = 0x2302C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2302C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2302C0u;
        // 0x2302c4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2302C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2302c0:
    ctx->pc = 0x2302C8u;
}
