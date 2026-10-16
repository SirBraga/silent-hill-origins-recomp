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

// Function: sub_0014F418
// Address: 0x14f418 - 0x14f540
void sub_0014F418_0x14f418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014F418_0x14f418");
#endif

    switch (ctx->pc) {
        case 0x14f440u: goto label_14f440;
        case 0x14f494u: goto label_14f494;
        case 0x14f49cu: goto label_14f49c;
        case 0x14f4b8u: goto label_14f4b8;
        case 0x14f50cu: goto label_14f50c;
        case 0x14f514u: goto label_14f514;
        default: break;
    }

    ctx->pc = 0x14f418u;

    // 0x14f418: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x14f418u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x14f41c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x14f41cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x14f420: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x14f420u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x14f424: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14f424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14f428: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x14f428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x14f42c: 0x8c900008  lw          $s0, 0x8($a0)
    ctx->pc = 0x14f42cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x14f430: 0x1200001d  beqz        $s0, . + 4 + (0x1D << 2)
    ctx->pc = 0x14F430u;
    {
        const bool branch_taken_0x14f430 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F430u;
        // 0x14f434: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f430) {
            ctx->pc = 0x14F4A8u;
            goto label_14f4a8;
        }
    }
    ctx->pc = 0x14F438u;
    // 0x14f438: 0x8e030184  lw          $v1, 0x184($s0)
    ctx->pc = 0x14f438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
    // 0x14f43c: 0x0  nop
    ctx->pc = 0x14f43cu;
    // NOP
label_14f440:
    // 0x14f440: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x14F440u;
    {
        const bool branch_taken_0x14f440 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f440) {
            ctx->pc = 0x14F444u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14F440u;
            // 0x14f444: 0x8e030180  lw          $v1, 0x180($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14F454u;
            goto label_14f454;
        }
    }
    ctx->pc = 0x14F448u;
    // 0x14f448: 0x8e020180  lw          $v0, 0x180($s0)
    ctx->pc = 0x14f448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
    // 0x14f44c: 0xac620180  sw          $v0, 0x180($v1)
    ctx->pc = 0x14f44cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 384), GPR_U32(ctx, 2));
    // 0x14f450: 0x8e030180  lw          $v1, 0x180($s0)
    ctx->pc = 0x14f450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
label_14f454:
    // 0x14f454: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x14F454u;
    {
        const bool branch_taken_0x14f454 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f454) {
            ctx->pc = 0x14F458u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14F454u;
            // 0x14f458: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14F468u;
            goto label_14f468;
        }
    }
    ctx->pc = 0x14F45Cu;
    // 0x14f45c: 0x8e020184  lw          $v0, 0x184($s0)
    ctx->pc = 0x14f45cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
    // 0x14f460: 0xac620184  sw          $v0, 0x184($v1)
    ctx->pc = 0x14f460u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 388), GPR_U32(ctx, 2));
    // 0x14f464: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x14f464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_14f468:
    // 0x14f468: 0x54500004  bnel        $v0, $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14F468u;
    {
        const bool branch_taken_0x14f468 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x14f468) {
            ctx->pc = 0x14F46Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14F468u;
            // 0x14f46c: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14F47Cu;
            goto label_14f47c;
        }
    }
    ctx->pc = 0x14F470u;
    // 0x14f470: 0x8e020180  lw          $v0, 0x180($s0)
    ctx->pc = 0x14f470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
    // 0x14f474: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x14f474u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x14f478: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x14f478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_14f47c:
    // 0x14f47c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x14f47cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x14f480: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x14F480u;
    {
        const bool branch_taken_0x14f480 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F480u;
        // 0x14f484: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f480) {
            ctx->pc = 0x14F49Cu;
            goto label_14f49c;
        }
    }
    ctx->pc = 0x14F488u;
    // 0x14f488: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14f488u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f48c: 0xc053bc6  jal         func_14EF18
    ctx->pc = 0x14F48Cu;
    SET_GPR_U32(ctx, 31, 0x14F494u);
    ctx->pc = 0x14F490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F48Cu;
    // 0x14f490: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14EF18u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x14EF18u, 0x14F48Cu, 0x14F494u)) {
        return;
    }
    ctx->pc = 0x14F494u;
label_14f494:
    // 0x14f494: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x14F494u;
    SET_GPR_U32(ctx, 31, 0x14F49Cu);
    ctx->pc = 0x14F498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F494u;
    // 0x14f498: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x14F494u, 0x14F49Cu)) {
        return;
    }
    ctx->pc = 0x14F49Cu;
label_14f49c:
    // 0x14f49c: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x14f49cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x14f4a0: 0x5600ffe7  bnel        $s0, $zero, . + 4 + (-0x19 << 2)
    ctx->pc = 0x14F4A0u;
    {
        const bool branch_taken_0x14f4a0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x14f4a0) {
            ctx->pc = 0x14F4A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14F4A0u;
            // 0x14f4a4: 0x8e030184  lw          $v1, 0x184($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14F440u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14f440;
        }
    }
    ctx->pc = 0x14F4A8u;
label_14f4a8:
    // 0x14f4a8: 0x8e300008  lw          $s0, 0x8($s1)
    ctx->pc = 0x14f4a8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x14f4ac: 0x1200001c  beqz        $s0, . + 4 + (0x1C << 2)
    ctx->pc = 0x14F4ACu;
    {
        const bool branch_taken_0x14f4ac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F4ACu;
        // 0x14f4b0: 0x26320008  addiu       $s2, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f4ac) {
            ctx->pc = 0x14F520u;
            goto label_14f520;
        }
    }
    ctx->pc = 0x14F4B4u;
    // 0x14f4b4: 0x8e030184  lw          $v1, 0x184($s0)
    ctx->pc = 0x14f4b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
label_14f4b8:
    // 0x14f4b8: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x14F4B8u;
    {
        const bool branch_taken_0x14f4b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f4b8) {
            ctx->pc = 0x14F4BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14F4B8u;
            // 0x14f4bc: 0x8e030180  lw          $v1, 0x180($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14F4CCu;
            goto label_14f4cc;
        }
    }
    ctx->pc = 0x14F4C0u;
    // 0x14f4c0: 0x8e020180  lw          $v0, 0x180($s0)
    ctx->pc = 0x14f4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
    // 0x14f4c4: 0xac620180  sw          $v0, 0x180($v1)
    ctx->pc = 0x14f4c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 384), GPR_U32(ctx, 2));
    // 0x14f4c8: 0x8e030180  lw          $v1, 0x180($s0)
    ctx->pc = 0x14f4c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
label_14f4cc:
    // 0x14f4cc: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x14F4CCu;
    {
        const bool branch_taken_0x14f4cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f4cc) {
            ctx->pc = 0x14F4D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14F4CCu;
            // 0x14f4d0: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14F4E0u;
            goto label_14f4e0;
        }
    }
    ctx->pc = 0x14F4D4u;
    // 0x14f4d4: 0x8e020184  lw          $v0, 0x184($s0)
    ctx->pc = 0x14f4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
    // 0x14f4d8: 0xac620184  sw          $v0, 0x184($v1)
    ctx->pc = 0x14f4d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 388), GPR_U32(ctx, 2));
    // 0x14f4dc: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x14f4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_14f4e0:
    // 0x14f4e0: 0x54500004  bnel        $v0, $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14F4E0u;
    {
        const bool branch_taken_0x14f4e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x14f4e0) {
            ctx->pc = 0x14F4E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14F4E0u;
            // 0x14f4e4: 0x8e420004  lw          $v0, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14F4F4u;
            goto label_14f4f4;
        }
    }
    ctx->pc = 0x14F4E8u;
    // 0x14f4e8: 0x8e020180  lw          $v0, 0x180($s0)
    ctx->pc = 0x14f4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
    // 0x14f4ec: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x14f4ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x14f4f0: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x14f4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_14f4f4:
    // 0x14f4f4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x14f4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x14f4f8: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x14F4F8u;
    {
        const bool branch_taken_0x14f4f8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F4F8u;
        // 0x14f4fc: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f4f8) {
            ctx->pc = 0x14F514u;
            goto label_14f514;
        }
    }
    ctx->pc = 0x14F500u;
    // 0x14f500: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14f500u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f504: 0xc053bc6  jal         func_14EF18
    ctx->pc = 0x14F504u;
    SET_GPR_U32(ctx, 31, 0x14F50Cu);
    ctx->pc = 0x14F508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F504u;
    // 0x14f508: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14EF18u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x14EF18u, 0x14F504u, 0x14F50Cu)) {
        return;
    }
    ctx->pc = 0x14F50Cu;
label_14f50c:
    // 0x14f50c: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x14F50Cu;
    SET_GPR_U32(ctx, 31, 0x14F514u);
    ctx->pc = 0x14F510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F50Cu;
    // 0x14f510: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x14F50Cu, 0x14F514u)) {
        return;
    }
    ctx->pc = 0x14F514u;
label_14f514:
    // 0x14f514: 0x8e300008  lw          $s0, 0x8($s1)
    ctx->pc = 0x14f514u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x14f518: 0x5600ffe7  bnel        $s0, $zero, . + 4 + (-0x19 << 2)
    ctx->pc = 0x14F518u;
    {
        const bool branch_taken_0x14f518 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x14f518) {
            ctx->pc = 0x14F51Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14F518u;
            // 0x14f51c: 0x8e030184  lw          $v1, 0x184($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14F4B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14f4b8;
        }
    }
    ctx->pc = 0x14F520u;
label_14f520:
    // 0x14f520: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x14f520u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
    // 0x14f524: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x14f524u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x14f528: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x14f528u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14f52c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x14f52cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14f530: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x14f530u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14f534: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14f534u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14f538: 0x3e00008  jr          $ra
    ctx->pc = 0x14F538u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14F53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F538u;
        // 0x14f53c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14F538u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14F540u;
}
