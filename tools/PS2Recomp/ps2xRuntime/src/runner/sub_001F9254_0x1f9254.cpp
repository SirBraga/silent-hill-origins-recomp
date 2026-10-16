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

// Function: sub_001F9254
// Address: 0x1f9254 - 0x1f9390
void sub_001F9254_0x1f9254(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F9254_0x1f9254");
#endif

    switch (ctx->pc) {
        case 0x1f9254u: goto label_1f9254;
        case 0x1f9258u: goto label_1f9258;
        case 0x1f925cu: goto label_1f925c;
        case 0x1f9260u: goto label_1f9260;
        case 0x1f9264u: goto label_1f9264;
        case 0x1f9268u: goto label_1f9268;
        case 0x1f926cu: goto label_1f926c;
        case 0x1f9270u: goto label_1f9270;
        case 0x1f9274u: goto label_1f9274;
        case 0x1f9278u: goto label_1f9278;
        case 0x1f927cu: goto label_1f927c;
        case 0x1f9280u: goto label_1f9280;
        case 0x1f9284u: goto label_1f9284;
        case 0x1f9288u: goto label_1f9288;
        case 0x1f928cu: goto label_1f928c;
        case 0x1f9290u: goto label_1f9290;
        case 0x1f9294u: goto label_1f9294;
        case 0x1f9298u: goto label_1f9298;
        case 0x1f929cu: goto label_1f929c;
        case 0x1f92a0u: goto label_1f92a0;
        case 0x1f92a4u: goto label_1f92a4;
        case 0x1f92a8u: goto label_1f92a8;
        case 0x1f92acu: goto label_1f92ac;
        case 0x1f92b0u: goto label_1f92b0;
        case 0x1f92b4u: goto label_1f92b4;
        case 0x1f92b8u: goto label_1f92b8;
        case 0x1f92bcu: goto label_1f92bc;
        case 0x1f92c0u: goto label_1f92c0;
        case 0x1f92c4u: goto label_1f92c4;
        case 0x1f92c8u: goto label_1f92c8;
        case 0x1f92ccu: goto label_1f92cc;
        case 0x1f92d0u: goto label_1f92d0;
        case 0x1f92d4u: goto label_1f92d4;
        case 0x1f92d8u: goto label_1f92d8;
        case 0x1f92dcu: goto label_1f92dc;
        case 0x1f92e0u: goto label_1f92e0;
        case 0x1f92e4u: goto label_1f92e4;
        case 0x1f92e8u: goto label_1f92e8;
        case 0x1f92ecu: goto label_1f92ec;
        case 0x1f92f0u: goto label_1f92f0;
        case 0x1f92f4u: goto label_1f92f4;
        case 0x1f92f8u: goto label_1f92f8;
        case 0x1f92fcu: goto label_1f92fc;
        case 0x1f9300u: goto label_1f9300;
        case 0x1f9304u: goto label_1f9304;
        case 0x1f9308u: goto label_1f9308;
        case 0x1f930cu: goto label_1f930c;
        case 0x1f9310u: goto label_1f9310;
        case 0x1f9314u: goto label_1f9314;
        case 0x1f9318u: goto label_1f9318;
        case 0x1f931cu: goto label_1f931c;
        case 0x1f9320u: goto label_1f9320;
        case 0x1f9324u: goto label_1f9324;
        case 0x1f9328u: goto label_1f9328;
        case 0x1f932cu: goto label_1f932c;
        case 0x1f9330u: goto label_1f9330;
        case 0x1f9334u: goto label_1f9334;
        case 0x1f9338u: goto label_1f9338;
        case 0x1f933cu: goto label_1f933c;
        case 0x1f9340u: goto label_1f9340;
        case 0x1f9344u: goto label_1f9344;
        case 0x1f9348u: goto label_1f9348;
        case 0x1f934cu: goto label_1f934c;
        case 0x1f9350u: goto label_1f9350;
        case 0x1f9354u: goto label_1f9354;
        case 0x1f9358u: goto label_1f9358;
        case 0x1f935cu: goto label_1f935c;
        case 0x1f9360u: goto label_1f9360;
        case 0x1f9364u: goto label_1f9364;
        case 0x1f9368u: goto label_1f9368;
        case 0x1f936cu: goto label_1f936c;
        case 0x1f9370u: goto label_1f9370;
        case 0x1f9374u: goto label_1f9374;
        case 0x1f9378u: goto label_1f9378;
        case 0x1f937cu: goto label_1f937c;
        case 0x1f9380u: goto label_1f9380;
        case 0x1f9384u: goto label_1f9384;
        case 0x1f9388u: goto label_1f9388;
        case 0x1f938cu: goto label_1f938c;
        default: break;
    }

    ctx->pc = 0x1f9254u;

label_1f9254:
    // 0x1f9254: 0x3c080020  lui         $t0, 0x20
    ctx->pc = 0x1f9254u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32 << 16));
label_1f9258:
    // 0x1f9258: 0x8fc505e0  lw          $a1, 0x5E0($fp)
    ctx->pc = 0x1f9258u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1504)));
label_1f925c:
    // 0x1f925c: 0xc07e9e0  jal         func_1FA780
label_1f9260:
    if (ctx->pc == 0x1F9260u) {
        ctx->pc = 0x1F9260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F925Cu;
        // 0x1f9260: 0x25049254  addiu       $a0, $t0, -0x6DAC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 4294939220));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F9264u;
        goto label_1f9264;
    }
    ctx->pc = 0x1F925Cu;
    SET_GPR_U32(ctx, 31, 0x1F9264u);
    ctx->pc = 0x1F9260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F925Cu;
    // 0x1f9260: 0x25049254  addiu       $a0, $t0, -0x6DAC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 4294939220));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA780u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FA780u, 0x1F925Cu, 0x1F9264u)) {
        return;
    }
    ctx->pc = 0x1F9264u;
label_1f9264:
    // 0x1f9264: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1f9264u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f9268:
    // 0x1f9268: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_1f926c:
    if (ctx->pc == 0x1F926Cu) {
        ctx->pc = 0x1F926Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9268u;
        // 0x1f926c: 0xafc205e0  sw          $v0, 0x5E0($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 1504), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F9270u;
        goto label_1f9270;
    }
    ctx->pc = 0x1F9268u;
    {
        const bool branch_taken_0x1f9268 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F926Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9268u;
        // 0x1f926c: 0xafc205e0  sw          $v0, 0x5E0($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 1504), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9268) {
            ctx->pc = 0x1F927Cu;
            goto label_1f927c;
        }
    }
    ctx->pc = 0x1F9270u;
label_1f9270:
    // 0x1f9270: 0xc07e10c  jal         func_1F8430
label_1f9274:
    if (ctx->pc == 0x1F9274u) {
        ctx->pc = 0x1F9278u;
        goto label_1f9278;
    }
    ctx->pc = 0x1F9270u;
    SET_GPR_U32(ctx, 31, 0x1F9278u);
    ctx->pc = 0x1F8430u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F8430u, 0x1F9270u, 0x1F9278u)) {
        return;
    }
    ctx->pc = 0x1F9278u;
label_1f9278:
    // 0x1f9278: 0x8fc305e0  lw          $v1, 0x5E0($fp)
    ctx->pc = 0x1f9278u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1504)));
label_1f927c:
    // 0x1f927c: 0x27c20700  addiu       $v0, $fp, 0x700
    ctx->pc = 0x1f927cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 1792));
label_1f9280:
    // 0x1f9280: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1f9280u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1f9284:
    // 0x1f9284: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1f9284u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_1f9288:
    // 0x1f9288: 0x8fc205ec  lw          $v0, 0x5EC($fp)
    ctx->pc = 0x1f9288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1516)));
label_1f928c:
    // 0x1f928c: 0x248302e0  addiu       $v1, $a0, 0x2E0
    ctx->pc = 0x1f928cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 736));
label_1f9290:
    // 0x1f9290: 0xdc850000  ld          $a1, 0x0($a0)
    ctx->pc = 0x1f9290u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 4), 0)));
label_1f9294:
    // 0x1f9294: 0xdc860008  ld          $a2, 0x8($a0)
    ctx->pc = 0x1f9294u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 4), 8)));
label_1f9298:
    // 0x1f9298: 0xdc870010  ld          $a3, 0x10($a0)
    ctx->pc = 0x1f9298u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 4), 16)));
label_1f929c:
    // 0x1f929c: 0xdc880018  ld          $t0, 0x18($a0)
    ctx->pc = 0x1f929cu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 4), 24)));
label_1f92a0:
    // 0x1f92a0: 0xfc450000  sd          $a1, 0x0($v0)
    ctx->pc = 0x1f92a0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 5));
label_1f92a4:
    // 0x1f92a4: 0xfc460008  sd          $a2, 0x8($v0)
    ctx->pc = 0x1f92a4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 6));
label_1f92a8:
    // 0x1f92a8: 0xfc470010  sd          $a3, 0x10($v0)
    ctx->pc = 0x1f92a8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 16), GPR_U64(ctx, 7));
label_1f92ac:
    // 0x1f92ac: 0xfc480018  sd          $t0, 0x18($v0)
    ctx->pc = 0x1f92acu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 24), GPR_U64(ctx, 8));
label_1f92b0:
    // 0x1f92b0: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x1f92b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
label_1f92b4:
    // 0x1f92b4: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x1f92b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
label_1f92b8:
    // 0x1f92b8: 0x0  nop
    ctx->pc = 0x1f92b8u;
    // NOP
label_1f92bc:
    // 0x1f92bc: 0x1483fff4  bne         $a0, $v1, . + 4 + (-0xC << 2)
label_1f92c0:
    if (ctx->pc == 0x1F92C0u) {
        ctx->pc = 0x1F92C4u;
        goto label_1f92c4;
    }
    ctx->pc = 0x1F92BCu;
    {
        const bool branch_taken_0x1f92bc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1f92bc) {
            ctx->pc = 0x1F9290u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f9290;
        }
    }
    ctx->pc = 0x1F92C4u;
label_1f92c4:
    // 0x1f92c4: 0xdc830000  ld          $v1, 0x0($a0)
    ctx->pc = 0x1f92c4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 0)));
label_1f92c8:
    // 0x1f92c8: 0xdc850008  ld          $a1, 0x8($a0)
    ctx->pc = 0x1f92c8u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 4), 8)));
label_1f92cc:
    // 0x1f92cc: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x1f92ccu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
label_1f92d0:
    // 0x1f92d0: 0xfc450008  sd          $a1, 0x8($v0)
    ctx->pc = 0x1f92d0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 5));
label_1f92d4:
    // 0x1f92d4: 0x27c20690  addiu       $v0, $fp, 0x690
    ctx->pc = 0x1f92d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 1680));
label_1f92d8:
    // 0x1f92d8: 0x8fc405e8  lw          $a0, 0x5E8($fp)
    ctx->pc = 0x1f92d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1512)));
label_1f92dc:
    // 0x1f92dc: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1f92dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1f92e0:
    // 0x1f92e0: 0x8fc605ec  lw          $a2, 0x5EC($fp)
    ctx->pc = 0x1f92e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1516)));
label_1f92e4:
    // 0x1f92e4: 0x8fc705f0  lw          $a3, 0x5F0($fp)
    ctx->pc = 0x1f92e4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1520)));
label_1f92e8:
    // 0x1f92e8: 0xc07e326  jal         func_1F8C98
label_1f92ec:
    if (ctx->pc == 0x1F92ECu) {
        ctx->pc = 0x1F92ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F92E8u;
        // 0x1f92ec: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F92F0u;
        goto label_1f92f0;
    }
    ctx->pc = 0x1F92E8u;
    SET_GPR_U32(ctx, 31, 0x1F92F0u);
    ctx->pc = 0x1F92ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F92E8u;
    // 0x1f92ec: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8C98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F8C98u, 0x1F92E8u, 0x1F92F0u)) {
        return;
    }
    ctx->pc = 0x1F92F0u;
label_1f92f0:
    // 0x1f92f0: 0x8fc605e0  lw          $a2, 0x5E0($fp)
    ctx->pc = 0x1f92f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1504)));
label_1f92f4:
    // 0x1f92f4: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x1f92f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
label_1f92f8:
    // 0x1f92f8: 0x8fc805ec  lw          $t0, 0x5EC($fp)
    ctx->pc = 0x1f92f8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1516)));
label_1f92fc:
    // 0x1f92fc: 0x24659320  addiu       $a1, $v1, -0x6CE0
    ctx->pc = 0x1f92fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939424));
label_1f9300:
    // 0x1f9300: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1f9300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1f9304:
    // 0x1f9304: 0x27c40690  addiu       $a0, $fp, 0x690
    ctx->pc = 0x1f9304u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 1680));
label_1f9308:
    // 0x1f9308: 0x8d070000  lw          $a3, 0x0($t0)
    ctx->pc = 0x1f9308u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_1f930c:
    // 0x1f930c: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x1f930cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
label_1f9310:
    // 0x1f9310: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f9310u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f9314:
    // 0x1f9314: 0x671823  subu        $v1, $v1, $a3
    ctx->pc = 0x1f9314u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_1f9318:
    // 0x1f9318: 0x10000003  b           . + 4 + (0x3 << 2)
label_1f931c:
    if (ctx->pc == 0x1F931Cu) {
        ctx->pc = 0x1F931Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9318u;
        // 0x1f931c: 0x8fc205e8  lw          $v0, 0x5E8($fp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1512)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F9320u;
        goto label_1f9320;
    }
    ctx->pc = 0x1F9318u;
    {
        const bool branch_taken_0x1f9318 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F931Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9318u;
        // 0x1f931c: 0x8fc205e8  lw          $v0, 0x5E8($fp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1512)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9318) {
            ctx->pc = 0x1F9328u;
            goto label_1f9328;
        }
    }
    ctx->pc = 0x1F9320u;
label_1f9320:
    // 0x1f9320: 0x800008  jr          $a0
label_1f9324:
    if (ctx->pc == 0x1F9324u) {
        ctx->pc = 0x1F9324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9320u;
        // 0x1f9324: 0x3a3e821  addu        $sp, $sp, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F9328u;
        goto label_1f9328;
    }
    ctx->pc = 0x1F9320u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = 0x1F9324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9320u;
        // 0x1f9324: 0x3a3e821  addu        $sp, $sp, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F9320u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1F9328u;
label_1f9328:
    // 0x1f9328: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x1f9328u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1f932c:
    // 0x1f932c: 0xdfbf0690  ld          $ra, 0x690($sp)
    ctx->pc = 0x1f932cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1680)));
label_1f9330:
    // 0x1f9330: 0xdfbe0680  ld          $fp, 0x680($sp)
    ctx->pc = 0x1f9330u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 1664)));
label_1f9334:
    // 0x1f9334: 0xdfb70670  ld          $s7, 0x670($sp)
    ctx->pc = 0x1f9334u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 1648)));
label_1f9338:
    // 0x1f9338: 0xdfb60660  ld          $s6, 0x660($sp)
    ctx->pc = 0x1f9338u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 1632)));
label_1f933c:
    // 0x1f933c: 0xdfb50650  ld          $s5, 0x650($sp)
    ctx->pc = 0x1f933cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 1616)));
label_1f9340:
    // 0x1f9340: 0xdfb40640  ld          $s4, 0x640($sp)
    ctx->pc = 0x1f9340u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 1600)));
label_1f9344:
    // 0x1f9344: 0xdfb30630  ld          $s3, 0x630($sp)
    ctx->pc = 0x1f9344u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 1584)));
label_1f9348:
    // 0x1f9348: 0xdfb20620  ld          $s2, 0x620($sp)
    ctx->pc = 0x1f9348u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 1568)));
label_1f934c:
    // 0x1f934c: 0xdfb10610  ld          $s1, 0x610($sp)
    ctx->pc = 0x1f934cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 1552)));
label_1f9350:
    // 0x1f9350: 0xdfb00600  ld          $s0, 0x600($sp)
    ctx->pc = 0x1f9350u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 1536)));
label_1f9354:
    // 0x1f9354: 0xc7bf06f8  lwc1        $f31, 0x6F8($sp)
    ctx->pc = 0x1f9354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1784)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[31] = f; }
label_1f9358:
    // 0x1f9358: 0xc7be06f0  lwc1        $f30, 0x6F0($sp)
    ctx->pc = 0x1f9358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1776)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[30] = f; }
label_1f935c:
    // 0x1f935c: 0xc7bd06e8  lwc1        $f29, 0x6E8($sp)
    ctx->pc = 0x1f935cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[29] = f; }
label_1f9360:
    // 0x1f9360: 0xc7bc06e0  lwc1        $f28, 0x6E0($sp)
    ctx->pc = 0x1f9360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1760)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
label_1f9364:
    // 0x1f9364: 0xc7bb06d8  lwc1        $f27, 0x6D8($sp)
    ctx->pc = 0x1f9364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
label_1f9368:
    // 0x1f9368: 0xc7ba06d0  lwc1        $f26, 0x6D0($sp)
    ctx->pc = 0x1f9368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
label_1f936c:
    // 0x1f936c: 0xc7b906c8  lwc1        $f25, 0x6C8($sp)
    ctx->pc = 0x1f936cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
label_1f9370:
    // 0x1f9370: 0xc7b806c0  lwc1        $f24, 0x6C0($sp)
    ctx->pc = 0x1f9370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_1f9374:
    // 0x1f9374: 0xc7b706b8  lwc1        $f23, 0x6B8($sp)
    ctx->pc = 0x1f9374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_1f9378:
    // 0x1f9378: 0xc7b606b0  lwc1        $f22, 0x6B0($sp)
    ctx->pc = 0x1f9378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_1f937c:
    // 0x1f937c: 0xc7b506a8  lwc1        $f21, 0x6A8($sp)
    ctx->pc = 0x1f937cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1f9380:
    // 0x1f9380: 0xc7b406a0  lwc1        $f20, 0x6A0($sp)
    ctx->pc = 0x1f9380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1696)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1f9384:
    // 0x1f9384: 0x3e00008  jr          $ra
label_1f9388:
    if (ctx->pc == 0x1F9388u) {
        ctx->pc = 0x1F9388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9384u;
        // 0x1f9388: 0x27bd0700  addiu       $sp, $sp, 0x700 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1792));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F938Cu;
        goto label_1f938c;
    }
    ctx->pc = 0x1F9384u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F9388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9384u;
        // 0x1f9388: 0x27bd0700  addiu       $sp, $sp, 0x700 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1792));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F9384u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F938Cu;
label_1f938c:
    // 0x1f938c: 0x0  nop
    ctx->pc = 0x1f938cu;
    // NOP
    ctx->pc = 0x1f9390u;
}
