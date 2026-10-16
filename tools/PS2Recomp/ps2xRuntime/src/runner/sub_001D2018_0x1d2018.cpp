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

// Function: sub_001D2018
// Address: 0x1d2018 - 0x1d2118
void sub_001D2018_0x1d2018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D2018_0x1d2018");
#endif

    switch (ctx->pc) {
        case 0x1d2018u: goto label_1d2018;
        case 0x1d201cu: goto label_1d201c;
        case 0x1d2020u: goto label_1d2020;
        case 0x1d2024u: goto label_1d2024;
        case 0x1d2028u: goto label_1d2028;
        case 0x1d202cu: goto label_1d202c;
        case 0x1d2030u: goto label_1d2030;
        case 0x1d2034u: goto label_1d2034;
        case 0x1d2038u: goto label_1d2038;
        case 0x1d203cu: goto label_1d203c;
        case 0x1d2040u: goto label_1d2040;
        case 0x1d2044u: goto label_1d2044;
        case 0x1d2048u: goto label_1d2048;
        case 0x1d204cu: goto label_1d204c;
        case 0x1d2050u: goto label_1d2050;
        case 0x1d2054u: goto label_1d2054;
        case 0x1d2058u: goto label_1d2058;
        case 0x1d205cu: goto label_1d205c;
        case 0x1d2060u: goto label_1d2060;
        case 0x1d2064u: goto label_1d2064;
        case 0x1d2068u: goto label_1d2068;
        case 0x1d206cu: goto label_1d206c;
        case 0x1d2070u: goto label_1d2070;
        case 0x1d2074u: goto label_1d2074;
        case 0x1d2078u: goto label_1d2078;
        case 0x1d207cu: goto label_1d207c;
        case 0x1d2080u: goto label_1d2080;
        case 0x1d2084u: goto label_1d2084;
        case 0x1d2088u: goto label_1d2088;
        case 0x1d208cu: goto label_1d208c;
        case 0x1d2090u: goto label_1d2090;
        case 0x1d2094u: goto label_1d2094;
        case 0x1d2098u: goto label_1d2098;
        case 0x1d209cu: goto label_1d209c;
        case 0x1d20a0u: goto label_1d20a0;
        case 0x1d20a4u: goto label_1d20a4;
        case 0x1d20a8u: goto label_1d20a8;
        case 0x1d20acu: goto label_1d20ac;
        case 0x1d20b0u: goto label_1d20b0;
        case 0x1d20b4u: goto label_1d20b4;
        case 0x1d20b8u: goto label_1d20b8;
        case 0x1d20bcu: goto label_1d20bc;
        case 0x1d20c0u: goto label_1d20c0;
        case 0x1d20c4u: goto label_1d20c4;
        case 0x1d20c8u: goto label_1d20c8;
        case 0x1d20ccu: goto label_1d20cc;
        case 0x1d20d0u: goto label_1d20d0;
        case 0x1d20d4u: goto label_1d20d4;
        case 0x1d20d8u: goto label_1d20d8;
        case 0x1d20dcu: goto label_1d20dc;
        case 0x1d20e0u: goto label_1d20e0;
        case 0x1d20e4u: goto label_1d20e4;
        case 0x1d20e8u: goto label_1d20e8;
        case 0x1d20ecu: goto label_1d20ec;
        case 0x1d20f0u: goto label_1d20f0;
        case 0x1d20f4u: goto label_1d20f4;
        case 0x1d20f8u: goto label_1d20f8;
        case 0x1d20fcu: goto label_1d20fc;
        case 0x1d2100u: goto label_1d2100;
        case 0x1d2104u: goto label_1d2104;
        case 0x1d2108u: goto label_1d2108;
        case 0x1d210cu: goto label_1d210c;
        case 0x1d2110u: goto label_1d2110;
        case 0x1d2114u: goto label_1d2114;
        default: break;
    }

    ctx->pc = 0x1d2018u;

label_1d2018:
    // 0x1d2018: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1d2018u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1d201c:
    // 0x1d201c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1d201cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_1d2020:
    // 0x1d2020: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1d2020u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1d2024:
    // 0x1d2024: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1d2024u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1d2028:
    // 0x1d2028: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1d2028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_1d202c:
    // 0x1d202c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d202cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1d2030:
    // 0x1d2030: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d2030u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1d2034:
    // 0x1d2034: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1d2034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d2038:
    // 0x1d2038: 0x2442fff3  addiu       $v0, $v0, -0xD
    ctx->pc = 0x1d2038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967283));
label_1d203c:
    // 0x1d203c: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1d203cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_1d2040:
    // 0x1d2040: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1d2044:
    if (ctx->pc == 0x1D2044u) {
        ctx->pc = 0x1D2044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2040u;
        // 0x1d2044: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2048u;
        goto label_1d2048;
    }
    ctx->pc = 0x1D2040u;
    {
        const bool branch_taken_0x1d2040 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2040u;
        // 0x1d2044: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2040) {
            ctx->pc = 0x1D2050u;
            goto label_1d2050;
        }
    }
    ctx->pc = 0x1D2048u;
label_1d2048:
    // 0x1d2048: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1d2048u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_1d204c:
    // 0x1d204c: 0xac409b48  sw          $zero, -0x64B8($v0)
    ctx->pc = 0x1d204cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294941512), GPR_U32(ctx, 0));
label_1d2050:
    // 0x1d2050: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1d2050u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1d2054:
    // 0x1d2054: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
label_1d2058:
    if (ctx->pc == 0x1D2058u) {
        ctx->pc = 0x1D2058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2054u;
        // 0x1d2058: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D205Cu;
        goto label_1d205c;
    }
    ctx->pc = 0x1D2054u;
    {
        const bool branch_taken_0x1d2054 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D2058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2054u;
        // 0x1d2058: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2054) {
            ctx->pc = 0x1D2078u;
            goto label_1d2078;
        }
    }
    ctx->pc = 0x1D205Cu;
label_1d205c:
    // 0x1d205c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1d205cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1d2060:
    // 0x1d2060: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
label_1d2064:
    if (ctx->pc == 0x1D2064u) {
        ctx->pc = 0x1D2064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2060u;
        // 0x1d2064: 0x2482fff6  addiu       $v0, $a0, -0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967286));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2068u;
        goto label_1d2068;
    }
    ctx->pc = 0x1D2060u;
    {
        const bool branch_taken_0x1d2060 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D2064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2060u;
        // 0x1d2064: 0x2482fff6  addiu       $v0, $a0, -0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967286));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2060) {
            ctx->pc = 0x1D207Cu;
            goto label_1d207c;
        }
    }
    ctx->pc = 0x1D2068u;
label_1d2068:
    // 0x1d2068: 0xc074846  jal         func_1D2118
label_1d206c:
    if (ctx->pc == 0x1D206Cu) {
        ctx->pc = 0x1D206Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2068u;
        // 0x1d206c: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2070u;
        goto label_1d2070;
    }
    ctx->pc = 0x1D2068u;
    SET_GPR_U32(ctx, 31, 0x1D2070u);
    ctx->pc = 0x1D206Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2068u;
    // 0x1d206c: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D2118u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D2118u, 0x1D2068u, 0x1D2070u)) {
        return;
    }
    ctx->pc = 0x1D2070u;
label_1d2070:
    // 0x1d2070: 0x1000001f  b           . + 4 + (0x1F << 2)
label_1d2074:
    if (ctx->pc == 0x1D2074u) {
        ctx->pc = 0x1D2074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2070u;
        // 0x1d2074: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2078u;
        goto label_1d2078;
    }
    ctx->pc = 0x1D2070u;
    {
        const bool branch_taken_0x1d2070 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2070u;
        // 0x1d2074: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2070) {
            ctx->pc = 0x1D20F0u;
            goto label_1d20f0;
        }
    }
    ctx->pc = 0x1D2078u;
label_1d2078:
    // 0x1d2078: 0x2482fff6  addiu       $v0, $a0, -0xA
    ctx->pc = 0x1d2078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967286));
label_1d207c:
    // 0x1d207c: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1d207cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_1d2080:
    // 0x1d2080: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_1d2084:
    if (ctx->pc == 0x1D2084u) {
        ctx->pc = 0x1D2084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2080u;
        // 0x1d2084: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2088u;
        goto label_1d2088;
    }
    ctx->pc = 0x1D2080u;
    {
        const bool branch_taken_0x1d2080 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2080u;
        // 0x1d2084: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2080) {
            ctx->pc = 0x1D20B8u;
            goto label_1d20b8;
        }
    }
    ctx->pc = 0x1D2088u;
label_1d2088:
    // 0x1d2088: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_1d208c:
    if (ctx->pc == 0x1D208Cu) {
        ctx->pc = 0x1D208Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2088u;
        // 0x1d208c: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2090u;
        goto label_1d2090;
    }
    ctx->pc = 0x1D2088u;
    {
        const bool branch_taken_0x1d2088 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D208Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2088u;
        // 0x1d208c: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2088) {
            ctx->pc = 0x1D20A0u;
            goto label_1d20a0;
        }
    }
    ctx->pc = 0x1D2090u;
label_1d2090:
    // 0x1d2090: 0xc0744b2  jal         func_1D12C8
label_1d2094:
    if (ctx->pc == 0x1D2094u) {
        ctx->pc = 0x1D2098u;
        goto label_1d2098;
    }
    ctx->pc = 0x1D2090u;
    SET_GPR_U32(ctx, 31, 0x1D2098u);
    ctx->pc = 0x1D12C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D12C8u, 0x1D2090u, 0x1D2098u)) {
        return;
    }
    ctx->pc = 0x1D2098u;
label_1d2098:
    // 0x1d2098: 0x10000016  b           . + 4 + (0x16 << 2)
label_1d209c:
    if (ctx->pc == 0x1D209Cu) {
        ctx->pc = 0x1D209Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2098u;
        // 0x1d209c: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D20A0u;
        goto label_1d20a0;
    }
    ctx->pc = 0x1D2098u;
    {
        const bool branch_taken_0x1d2098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D209Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2098u;
        // 0x1d209c: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2098) {
            ctx->pc = 0x1D20F4u;
            goto label_1d20f4;
        }
    }
    ctx->pc = 0x1D20A0u;
label_1d20a0:
    // 0x1d20a0: 0x14620014  bne         $v1, $v0, . + 4 + (0x14 << 2)
label_1d20a4:
    if (ctx->pc == 0x1D20A4u) {
        ctx->pc = 0x1D20A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D20A0u;
        // 0x1d20a4: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D20A8u;
        goto label_1d20a8;
    }
    ctx->pc = 0x1D20A0u;
    {
        const bool branch_taken_0x1d20a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D20A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D20A0u;
        // 0x1d20a4: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d20a0) {
            ctx->pc = 0x1D20F4u;
            goto label_1d20f4;
        }
    }
    ctx->pc = 0x1D20A8u;
label_1d20a8:
    // 0x1d20a8: 0xc0745dc  jal         func_1D1770
label_1d20ac:
    if (ctx->pc == 0x1D20ACu) {
        ctx->pc = 0x1D20ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D20A8u;
        // 0x1d20ac: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D20B0u;
        goto label_1d20b0;
    }
    ctx->pc = 0x1D20A8u;
    SET_GPR_U32(ctx, 31, 0x1D20B0u);
    ctx->pc = 0x1D20ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D20A8u;
    // 0x1d20ac: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1770u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D1770u, 0x1D20A8u, 0x1D20B0u)) {
        return;
    }
    ctx->pc = 0x1D20B0u;
label_1d20b0:
    // 0x1d20b0: 0x10000010  b           . + 4 + (0x10 << 2)
label_1d20b4:
    if (ctx->pc == 0x1D20B4u) {
        ctx->pc = 0x1D20B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D20B0u;
        // 0x1d20b4: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D20B8u;
        goto label_1d20b8;
    }
    ctx->pc = 0x1D20B0u;
    {
        const bool branch_taken_0x1d20b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D20B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D20B0u;
        // 0x1d20b4: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d20b0) {
            ctx->pc = 0x1D20F4u;
            goto label_1d20f4;
        }
    }
    ctx->pc = 0x1D20B8u;
label_1d20b8:
    // 0x1d20b8: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_1d20bc:
    if (ctx->pc == 0x1D20BCu) {
        ctx->pc = 0x1D20BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D20B8u;
        // 0x1d20bc: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D20C0u;
        goto label_1d20c0;
    }
    ctx->pc = 0x1D20B8u;
    {
        const bool branch_taken_0x1d20b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D20BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D20B8u;
        // 0x1d20bc: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d20b8) {
            ctx->pc = 0x1D20D0u;
            goto label_1d20d0;
        }
    }
    ctx->pc = 0x1D20C0u;
label_1d20c0:
    // 0x1d20c0: 0x38840003  xori        $a0, $a0, 0x3
    ctx->pc = 0x1d20c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)3);
label_1d20c4:
    // 0x1d20c4: 0xc0745dc  jal         func_1D1770
label_1d20c8:
    if (ctx->pc == 0x1D20C8u) {
        ctx->pc = 0x1D20C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D20C4u;
        // 0x1d20c8: 0x2c840001  sltiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D20CCu;
        goto label_1d20cc;
    }
    ctx->pc = 0x1D20C4u;
    SET_GPR_U32(ctx, 31, 0x1D20CCu);
    ctx->pc = 0x1D20C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D20C4u;
    // 0x1d20c8: 0x2c840001  sltiu       $a0, $a0, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1770u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D1770u, 0x1D20C4u, 0x1D20CCu)) {
        return;
    }
    ctx->pc = 0x1D20CCu;
label_1d20cc:
    // 0x1d20cc: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1d20ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_1d20d0:
    // 0x1d20d0: 0x8c439b38  lw          $v1, -0x64C8($v0)
    ctx->pc = 0x1d20d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294941496)));
label_1d20d4:
    // 0x1d20d4: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_1d20d8:
    if (ctx->pc == 0x1D20D8u) {
        ctx->pc = 0x1D20D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D20D4u;
        // 0x1d20d8: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D20DCu;
        goto label_1d20dc;
    }
    ctx->pc = 0x1D20D4u;
    {
        const bool branch_taken_0x1d20d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D20D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D20D4u;
        // 0x1d20d8: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d20d4) {
            ctx->pc = 0x1D20F0u;
            goto label_1d20f0;
        }
    }
    ctx->pc = 0x1D20DCu;
label_1d20dc:
    // 0x1d20dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d20dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d20e0:
    // 0x1d20e0: 0x8c469b3c  lw          $a2, -0x64C4($v0)
    ctx->pc = 0x1d20e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294941500)));
label_1d20e4:
    // 0x1d20e4: 0x60f809  jalr        $v1
label_1d20e8:
    if (ctx->pc == 0x1D20E8u) {
        ctx->pc = 0x1D20E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D20E4u;
        // 0x1d20e8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D20ECu;
        goto label_1d20ec;
    }
    ctx->pc = 0x1D20E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1D20ECu);
        ctx->pc = 0x1D20E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D20E4u;
        // 0x1d20e8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D20E4u, 0x1D20ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D20ECu;
label_1d20ec:
    // 0x1d20ec: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1d20ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d20f0:
    // 0x1d20f0: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x1d20f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1d20f4:
    // 0x1d20f4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1d20f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1d20f8:
    // 0x1d20f8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1d20f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1d20fc:
    // 0x1d20fc: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1d20fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1d2100:
    // 0x1d2100: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d2100u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d2104:
    // 0x1d2104: 0x3e00008  jr          $ra
label_1d2108:
    if (ctx->pc == 0x1D2108u) {
        ctx->pc = 0x1D2108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2104u;
        // 0x1d2108: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D210Cu;
        goto label_1d210c;
    }
    ctx->pc = 0x1D2104u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D2108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2104u;
        // 0x1d2108: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D2104u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D210Cu;
label_1d210c:
    // 0x1d210c: 0x0  nop
    ctx->pc = 0x1d210cu;
    // NOP
label_1d2110:
    // 0x1d2110: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1d2110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1d2114:
    // 0x1d2114: 0x0  nop
    ctx->pc = 0x1d2114u;
    // NOP
    ctx->pc = 0x1d2118u;
}
