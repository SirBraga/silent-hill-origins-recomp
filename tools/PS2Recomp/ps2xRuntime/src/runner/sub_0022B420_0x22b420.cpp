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

// Function: sub_0022B420
// Address: 0x22b420 - 0x22b5a8
void sub_0022B420_0x22b420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022B420_0x22b420");
#endif

    switch (ctx->pc) {
        case 0x22b464u: goto label_22b464;
        case 0x22b4b0u: goto label_22b4b0;
        case 0x22b4f0u: goto label_22b4f0;
        case 0x22b51cu: goto label_22b51c;
        case 0x22b528u: goto label_22b528;
        case 0x22b534u: goto label_22b534;
        case 0x22b540u: goto label_22b540;
        case 0x22b564u: goto label_22b564;
        case 0x22b580u: goto label_22b580;
        default: break;
    }

    ctx->pc = 0x22b420u;

    // 0x22b420: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x22b420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x22b424: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x22b424u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x22b428: 0xac253ea0  sw          $a1, 0x3EA0($at)
    ctx->pc = 0x22b428u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x6B3EA0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B3EA0u, _value); } while (0);
    // 0x22b42c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22b42cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x22b430: 0x3c02005c  lui         $v0, 0x5C
    ctx->pc = 0x22b430u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
    // 0x22b434: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x22b434u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b438: 0x3c080070  lui         $t0, 0x70
    ctx->pc = 0x22b438u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)112 << 16));
    // 0x22b43c: 0x8c440448  lw          $a0, 0x448($v0)
    ctx->pc = 0x22b43cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5C0448u));
    // 0x22b440: 0x3c090004  lui         $t1, 0x4
    ctx->pc = 0x22b440u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4 << 16));
    // 0x22b444: 0x8f8583e8  lw          $a1, -0x7C18($gp)
    ctx->pc = 0x22b444u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935528)));
    // 0x22b448: 0x25082e20  addiu       $t0, $t0, 0x2E20
    ctx->pc = 0x22b448u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 11808));
    // 0x22b44c: 0x8f8783ec  lw          $a3, -0x7C14($gp)
    ctx->pc = 0x22b44cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935532)));
    // 0x22b450: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x22b450u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x22b454: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x22b454u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x22b458: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22b458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22b45c: 0xc0930ce  jal         func_24C338
    ctx->pc = 0x22B45Cu;
    SET_GPR_U32(ctx, 31, 0x22B464u);
    ctx->pc = 0x22B460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B45Cu;
    // 0x22b460: 0x35290006  ori         $t1, $t1, 0x6 (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)6);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24C338u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24C338u, 0x22B45Cu, 0x22B464u)) {
        return;
    }
    ctx->pc = 0x22B464u;
label_22b464:
    // 0x22b464: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x22b464u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x22b468: 0x8c843ea0  lw          $a0, 0x3EA0($a0)
    ctx->pc = 0x22b468u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6B3EA0u));
    // 0x22b46c: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x22b46cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x22b470: 0x24700fc8  addiu       $s0, $v1, 0xFC8
    ctx->pc = 0x22b470u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4040));
    // 0x22b474: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x22b474u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x22b478: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22B478u;
    {
        const bool branch_taken_0x22b478 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22B47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B478u;
        // 0x22b47c: 0xac820008  sw          $v0, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b478) {
            ctx->pc = 0x22B488u;
            goto label_22b488;
        }
    }
    ctx->pc = 0x22B480u;
    // 0x22b480: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x22B480u;
    {
        const bool branch_taken_0x22b480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B480u;
        // 0x22b484: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b480) {
            ctx->pc = 0x22B594u;
            goto label_22b594;
        }
    }
    ctx->pc = 0x22B488u;
label_22b488:
    // 0x22b488: 0x3c02005c  lui         $v0, 0x5C
    ctx->pc = 0x22b488u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
    // 0x22b48c: 0x3c080070  lui         $t0, 0x70
    ctx->pc = 0x22b48cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)112 << 16));
    // 0x22b490: 0x8c440460  lw          $a0, 0x460($v0)
    ctx->pc = 0x22b490u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5C0460u));
    // 0x22b494: 0x3c090004  lui         $t1, 0x4
    ctx->pc = 0x22b494u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4 << 16));
    // 0x22b498: 0x8f8583f0  lw          $a1, -0x7C10($gp)
    ctx->pc = 0x22b498u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935536)));
    // 0x22b49c: 0x25082e48  addiu       $t0, $t0, 0x2E48
    ctx->pc = 0x22b49cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 11848));
    // 0x22b4a0: 0x8f8783f4  lw          $a3, -0x7C0C($gp)
    ctx->pc = 0x22b4a0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935540)));
    // 0x22b4a4: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x22b4a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x22b4a8: 0xc0930ce  jal         func_24C338
    ctx->pc = 0x22B4A8u;
    SET_GPR_U32(ctx, 31, 0x22B4B0u);
    ctx->pc = 0x22B4ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B4A8u;
    // 0x22b4ac: 0x35290408  ori         $t1, $t1, 0x408 (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)1032);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24C338u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24C338u, 0x22B4A8u, 0x22B4B0u)) {
        return;
    }
    ctx->pc = 0x22B4B0u;
label_22b4b0:
    // 0x22b4b0: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x22b4b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x22b4b4: 0x8c633ea0  lw          $v1, 0x3EA0($v1)
    ctx->pc = 0x22b4b4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B3EA0u));
    // 0x22b4b8: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x22b4b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x22b4bc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22B4BCu;
    {
        const bool branch_taken_0x22b4bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22B4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B4BCu;
        // 0x22b4c0: 0xac62000c  sw          $v0, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b4bc) {
            ctx->pc = 0x22B4CCu;
            goto label_22b4cc;
        }
    }
    ctx->pc = 0x22B4C4u;
    // 0x22b4c4: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x22B4C4u;
    {
        const bool branch_taken_0x22b4c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B4C4u;
        // 0x22b4c8: 0x8c640008  lw          $a0, 0x8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b4c4) {
            ctx->pc = 0x22B578u;
            goto label_22b578;
        }
    }
    ctx->pc = 0x22B4CCu;
label_22b4cc:
    // 0x22b4cc: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x22b4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x22b4d0: 0x8c423ea4  lw          $v0, 0x3EA4($v0)
    ctx->pc = 0x22b4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B3EA4u));
    // 0x22b4d4: 0xac630004  sw          $v1, 0x4($v1)
    ctx->pc = 0x22b4d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 3));
    // 0x22b4d8: 0xac630000  sw          $v1, 0x0($v1)
    ctx->pc = 0x22b4d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 3));
    // 0x22b4dc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x22b4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x22b4e0: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x22b4e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x22b4e4: 0xac223ea4  sw          $v0, 0x3EA4($at)
    ctx->pc = 0x22b4e4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B3EA4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B3EA4u, _value); } while (0);
    // 0x22b4e8: 0xc08aab2  jal         func_22AAC8
    ctx->pc = 0x22B4E8u;
    SET_GPR_U32(ctx, 31, 0x22B4F0u);
    ctx->pc = 0x22AAC8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22AAC8u, 0x22B4E8u, 0x22B4F0u)) {
        return;
    }
    ctx->pc = 0x22B4F0u;
label_22b4f0:
    // 0x22b4f0: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x22b4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x22b4f4: 0x8c633ea0  lw          $v1, 0x3EA0($v1)
    ctx->pc = 0x22b4f4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B3EA0u));
    // 0x22b4f8: 0xaf8283d0  sw          $v0, -0x7C30($gp)
    ctx->pc = 0x22b4f8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935504), GPR_U32(ctx, 2));
    // 0x22b4fc: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x22b4fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x22b500: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x22B500u;
    {
        const bool branch_taken_0x22b500 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B500u;
        // 0x22b504: 0xac620010  sw          $v0, 0x10($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b500) {
            ctx->pc = 0x22B55Cu;
            goto label_22b55c;
        }
    }
    ctx->pc = 0x22B508u;
    // 0x22b508: 0x3c040023  lui         $a0, 0x23
    ctx->pc = 0x22b508u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)35 << 16));
    // 0x22b50c: 0xac600020  sw          $zero, 0x20($v1)
    ctx->pc = 0x22b50cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 0));
    // 0x22b510: 0xac60001c  sw          $zero, 0x1C($v1)
    ctx->pc = 0x22b510u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 0));
    // 0x22b514: 0xc08aa7a  jal         func_22A9E8
    ctx->pc = 0x22B514u;
    SET_GPR_U32(ctx, 31, 0x22B51Cu);
    ctx->pc = 0x22B518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B514u;
    // 0x22b518: 0x2484a958  addiu       $a0, $a0, -0x56A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A9E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22A9E8u, 0x22B514u, 0x22B51Cu)) {
        return;
    }
    ctx->pc = 0x22B51Cu;
label_22b51c:
    // 0x22b51c: 0x3c040023  lui         $a0, 0x23
    ctx->pc = 0x22b51cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)35 << 16));
    // 0x22b520: 0xc08aa84  jal         func_22AA10
    ctx->pc = 0x22B520u;
    SET_GPR_U32(ctx, 31, 0x22B528u);
    ctx->pc = 0x22B524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B520u;
    // 0x22b524: 0x2484a4f8  addiu       $a0, $a0, -0x5B08 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22AA10u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22AA10u, 0x22B520u, 0x22B528u)) {
        return;
    }
    ctx->pc = 0x22B528u;
label_22b528:
    // 0x22b528: 0x3c040023  lui         $a0, 0x23
    ctx->pc = 0x22b528u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)35 << 16));
    // 0x22b52c: 0xc08ac92  jal         func_22B248
    ctx->pc = 0x22B52Cu;
    SET_GPR_U32(ctx, 31, 0x22B534u);
    ctx->pc = 0x22B530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B52Cu;
    // 0x22b530: 0x2484a548  addiu       $a0, $a0, -0x5AB8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944072));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22B248u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22B248u, 0x22B52Cu, 0x22B534u)) {
        return;
    }
    ctx->pc = 0x22B534u;
label_22b534:
    // 0x22b534: 0x3c040023  lui         $a0, 0x23
    ctx->pc = 0x22b534u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)35 << 16));
    // 0x22b538: 0xc08ac9c  jal         func_22B270
    ctx->pc = 0x22B538u;
    SET_GPR_U32(ctx, 31, 0x22B540u);
    ctx->pc = 0x22B53Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B538u;
    // 0x22b53c: 0x24849650  addiu       $a0, $a0, -0x69B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22B270u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22B270u, 0x22B538u, 0x22B540u)) {
        return;
    }
    ctx->pc = 0x22B540u;
label_22b540:
    // 0x22b540: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x22b540u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x22b544: 0x8c633ea0  lw          $v1, 0x3EA0($v1)
    ctx->pc = 0x22b544u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B3EA0u));
    // 0x22b548: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x22b548u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b54c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x22b54cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x22b550: 0xa4600028  sh          $zero, 0x28($v1)
    ctx->pc = 0x22b550u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 40), (uint16_t)GPR_U32(ctx, 0));
    // 0x22b554: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x22B554u;
    {
        const bool branch_taken_0x22b554 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B554u;
        // 0x22b558: 0xac600024  sw          $zero, 0x24($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b554) {
            ctx->pc = 0x22B594u;
            goto label_22b594;
        }
    }
    ctx->pc = 0x22B55Cu;
label_22b55c:
    // 0x22b55c: 0xc093106  jal         func_24C418
    ctx->pc = 0x22B55Cu;
    SET_GPR_U32(ctx, 31, 0x22B564u);
    ctx->pc = 0x22B560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B55Cu;
    // 0x22b560: 0x8c64000c  lw          $a0, 0xC($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24C418u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24C418u, 0x22B55Cu, 0x22B564u)) {
        return;
    }
    ctx->pc = 0x22B564u;
label_22b564:
    // 0x22b564: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x22b564u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x22b568: 0x8c633ea0  lw          $v1, 0x3EA0($v1)
    ctx->pc = 0x22b568u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B3EA0u));
    // 0x22b56c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x22b56cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x22b570: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x22b570u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x22b574: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x22b574u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
label_22b578:
    // 0x22b578: 0xc093106  jal         func_24C418
    ctx->pc = 0x22B578u;
    SET_GPR_U32(ctx, 31, 0x22B580u);
    ctx->pc = 0x24C418u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24C418u, 0x22B578u, 0x22B580u)) {
        return;
    }
    ctx->pc = 0x22B580u;
label_22b580:
    // 0x22b580: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x22b580u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x22b584: 0x8c633ea0  lw          $v1, 0x3EA0($v1)
    ctx->pc = 0x22b584u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B3EA0u));
    // 0x22b588: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x22b588u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b58c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x22b58cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x22b590: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x22b590u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
label_22b594:
    // 0x22b594: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x22b594u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22b598: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x22b598u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22b59c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22b59cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22b5a0: 0x3e00008  jr          $ra
    ctx->pc = 0x22B5A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22B5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B5A0u;
        // 0x22b5a4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22B5A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22B5A8u;
}
