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

// Function: sub_0015D1B0
// Address: 0x15d1b0 - 0x15d3f8
void sub_0015D1B0_0x15d1b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015D1B0_0x15d1b0");
#endif

    switch (ctx->pc) {
        case 0x15d1e8u: goto label_15d1e8;
        case 0x15d1fcu: goto label_15d1fc;
        case 0x15d220u: goto label_15d220;
        case 0x15d248u: goto label_15d248;
        case 0x15d26cu: goto label_15d26c;
        case 0x15d284u: goto label_15d284;
        case 0x15d29cu: goto label_15d29c;
        case 0x15d2d8u: goto label_15d2d8;
        case 0x15d2fcu: goto label_15d2fc;
        case 0x15d318u: goto label_15d318;
        case 0x15d3b8u: goto label_15d3b8;
        default: break;
    }

    ctx->pc = 0x15d1b0u;

    // 0x15d1b0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x15d1b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x15d1b4: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x15d1b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x15d1b8: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x15d1b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x15d1bc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x15d1bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d1c0: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x15d1c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x15d1c4: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x15d1c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x15d1c8: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x15d1c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x15d1cc: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x15d1ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x15d1d0: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x15d1d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
    // 0x15d1d4: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x15d1d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
    // 0x15d1d8: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x15d1d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
    // 0x15d1dc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x15d1dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x15d1e0: 0xc04efda  jal         func_13BF68
    ctx->pc = 0x15D1E0u;
    SET_GPR_U32(ctx, 31, 0x15D1E8u);
    ctx->pc = 0x15D1E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D1E0u;
    // 0x15d1e4: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13BF68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13BF68u, 0x15D1E0u, 0x15D1E8u)) {
        return;
    }
    ctx->pc = 0x15D1E8u;
label_15d1e8:
    // 0x15d1e8: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x15d1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x15d1ec: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x15d1ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d1f0: 0x8c461a68  lw          $a2, 0x1A68($v0)
    ctx->pc = 0x15d1f0u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x701A68u));
    // 0x15d1f4: 0xc07f1c0  jal         func_1FC700
    ctx->pc = 0x15D1F4u;
    SET_GPR_U32(ctx, 31, 0x15D1FCu);
    ctx->pc = 0x15D1F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D1F4u;
    // 0x15d1f8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC700u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC700u, 0x15D1F4u, 0x15D1FCu)) {
        return;
    }
    ctx->pc = 0x15D1FCu;
label_15d1fc:
    // 0x15d1fc: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x15d1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15d200: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x15d200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15d204: 0x10600038  beqz        $v1, . + 4 + (0x38 << 2)
    ctx->pc = 0x15D204u;
    {
        const bool branch_taken_0x15d204 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D204u;
        // 0x15d208: 0x27b40010  addiu       $s4, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d204) {
            ctx->pc = 0x15D2E8u;
            goto label_15d2e8;
        }
    }
    ctx->pc = 0x15D20Cu;
    // 0x15d20c: 0x3c1e0069  lui         $fp, 0x69
    ctx->pc = 0x15d20cu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)105 << 16));
    // 0x15d210: 0x3c170069  lui         $s7, 0x69
    ctx->pc = 0x15d210u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)105 << 16));
    // 0x15d214: 0x3c160069  lui         $s6, 0x69
    ctx->pc = 0x15d214u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)105 << 16));
    // 0x15d218: 0x3c150069  lui         $s5, 0x69
    ctx->pc = 0x15d218u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)105 << 16));
    // 0x15d21c: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x15d21cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_15d220:
    // 0x15d220: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x15d220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x15d224: 0x14400026  bnez        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x15D224u;
    {
        const bool branch_taken_0x15d224 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15D228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D224u;
        // 0x15d228: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d224) {
            ctx->pc = 0x15D2C0u;
            goto label_15d2c0;
        }
    }
    ctx->pc = 0x15D22Cu;
    // 0x15d22c: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x15d22cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x15d230: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x15d230u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x15d234: 0x8c448668  lw          $a0, -0x7998($v0)
    ctx->pc = 0x15d234u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x338668u));
    // 0x15d238: 0x27c63138  addiu       $a2, $fp, 0x3138
    ctx->pc = 0x15d238u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 30), 12600));
    // 0x15d23c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x15d23cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d240: 0xc058d5a  jal         func_163568
    ctx->pc = 0x15D240u;
    SET_GPR_U32(ctx, 31, 0x15D248u);
    ctx->pc = 0x15D244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D240u;
    // 0x15d244: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x163568u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x163568u, 0x15D240u, 0x15D248u)) {
        return;
    }
    ctx->pc = 0x15D248u;
label_15d248:
    // 0x15d248: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x15d248u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d24c: 0x1200001c  beqz        $s0, . + 4 + (0x1C << 2)
    ctx->pc = 0x15D24Cu;
    {
        const bool branch_taken_0x15d24c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D24Cu;
        // 0x15d250: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d24c) {
            ctx->pc = 0x15D2C0u;
            goto label_15d2c0;
        }
    }
    ctx->pc = 0x15D254u;
    // 0x15d254: 0x8e020660  lw          $v0, 0x660($s0)
    ctx->pc = 0x15d254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1632)));
    // 0x15d258: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x15D258u;
    {
        const bool branch_taken_0x15d258 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D258u;
        // 0x15d25c: 0x24110003  addiu       $s1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d258) {
            ctx->pc = 0x15D2C0u;
            goto label_15d2c0;
        }
    }
    ctx->pc = 0x15D260u;
    // 0x15d260: 0x8e040664  lw          $a0, 0x664($s0)
    ctx->pc = 0x15d260u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1636)));
    // 0x15d264: 0xc0c4a1f  jal         func_31287C
    ctx->pc = 0x15D264u;
    SET_GPR_U32(ctx, 31, 0x15D26Cu);
    ctx->pc = 0x15D268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D264u;
    // 0x15d268: 0x26e53140  addiu       $a1, $s7, 0x3140 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 12608));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31287Cu;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x31287Cu, 0x15D264u, 0x15D26Cu)) {
        return;
    }
    ctx->pc = 0x15D26Cu;
label_15d26c:
    // 0x15d26c: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x15D26Cu;
    {
        const bool branch_taken_0x15d26c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15d26c) {
            ctx->pc = 0x15D270u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15D26Cu;
            // 0x15d270: 0x8e040664  lw          $a0, 0x664($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1636)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15D27Cu;
            goto label_15d27c;
        }
    }
    ctx->pc = 0x15D274u;
    // 0x15d274: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x15D274u;
    {
        const bool branch_taken_0x15d274 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D274u;
        // 0x15d278: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d274) {
            ctx->pc = 0x15D2A4u;
            goto label_15d2a4;
        }
    }
    ctx->pc = 0x15D27Cu;
label_15d27c:
    // 0x15d27c: 0xc0c4a1f  jal         func_31287C
    ctx->pc = 0x15D27Cu;
    SET_GPR_U32(ctx, 31, 0x15D284u);
    ctx->pc = 0x15D280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D27Cu;
    // 0x15d280: 0x26c53148  addiu       $a1, $s6, 0x3148 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 12616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31287Cu;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x31287Cu, 0x15D27Cu, 0x15D284u)) {
        return;
    }
    ctx->pc = 0x15D284u;
label_15d284:
    // 0x15d284: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x15D284u;
    {
        const bool branch_taken_0x15d284 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15d284) {
            ctx->pc = 0x15D288u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15D284u;
            // 0x15d288: 0x8e040664  lw          $a0, 0x664($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1636)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15D294u;
            goto label_15d294;
        }
    }
    ctx->pc = 0x15D28Cu;
    // 0x15d28c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x15D28Cu;
    {
        const bool branch_taken_0x15d28c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D28Cu;
        // 0x15d290: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d28c) {
            ctx->pc = 0x15D2A4u;
            goto label_15d2a4;
        }
    }
    ctx->pc = 0x15D294u;
label_15d294:
    // 0x15d294: 0xc0c4a1f  jal         func_31287C
    ctx->pc = 0x15D294u;
    SET_GPR_U32(ctx, 31, 0x15D29Cu);
    ctx->pc = 0x15D298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D294u;
    // 0x15d298: 0x26a53150  addiu       $a1, $s5, 0x3150 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 12624));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31287Cu;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x31287Cu, 0x15D294u, 0x15D29Cu)) {
        return;
    }
    ctx->pc = 0x15D29Cu;
label_15d29c:
    // 0x15d29c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x15d29cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15d2a0: 0x62880a  movz        $s1, $v1, $v0
    ctx->pc = 0x15d2a0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3));
label_15d2a4:
    // 0x15d2a4: 0x3a220003  xori        $v0, $s1, 0x3
    ctx->pc = 0x15d2a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)3);
    // 0x15d2a8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x15D2A8u;
    {
        const bool branch_taken_0x15d2a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D2A8u;
        // 0x15d2ac: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d2a8) {
            ctx->pc = 0x15D2BCu;
            goto label_15d2bc;
        }
    }
    ctx->pc = 0x15D2B0u;
    // 0x15d2b0: 0x8e030040  lw          $v1, 0x40($s0)
    ctx->pc = 0x15d2b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x15d2b4: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x15d2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x15d2b8: 0xac43022c  sw          $v1, 0x22C($v0)
    ctx->pc = 0x15d2b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 556), GPR_U32(ctx, 3));
label_15d2bc:
    // 0x15d2bc: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x15d2bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_15d2c0:
    // 0x15d2c0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x15d2c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d2c4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15d2c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15d2c8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x15d2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x15d2cc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x15d2ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x15d2d0: 0xc07f0c8  jal         func_1FC320
    ctx->pc = 0x15D2D0u;
    SET_GPR_U32(ctx, 31, 0x15D2D8u);
    ctx->pc = 0x15D2D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D2D0u;
    // 0x15d2d4: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC320u, 0x15D2D0u, 0x15D2D8u)) {
        return;
    }
    ctx->pc = 0x15D2D8u;
label_15d2d8:
    // 0x15d2d8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x15d2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15d2dc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x15d2dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15d2e0: 0x1460ffcf  bnez        $v1, . + 4 + (-0x31 << 2)
    ctx->pc = 0x15D2E0u;
    {
        const bool branch_taken_0x15d2e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15D2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D2E0u;
        // 0x15d2e4: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d2e0) {
            ctx->pc = 0x15D220u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15d220;
        }
    }
    ctx->pc = 0x15D2E8u;
label_15d2e8:
    // 0x15d2e8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x15d2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x15d2ec: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x15d2ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d2f0: 0x8c46f098  lw          $a2, -0xF68($v0)
    ctx->pc = 0x15d2f0u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x6BF098u));
    // 0x15d2f4: 0xc07f1c0  jal         func_1FC700
    ctx->pc = 0x15D2F4u;
    SET_GPR_U32(ctx, 31, 0x15D2FCu);
    ctx->pc = 0x15D2F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D2F4u;
    // 0x15d2f8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC700u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC700u, 0x15D2F4u, 0x15D2FCu)) {
        return;
    }
    ctx->pc = 0x15D2FCu;
label_15d2fc:
    // 0x15d2fc: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x15d2fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15d300: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x15d300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x15d304: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x15D304u;
    {
        const bool branch_taken_0x15d304 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D304u;
        // 0x15d308: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d304) {
            ctx->pc = 0x15D3CCu;
            goto label_15d3cc;
        }
    }
    ctx->pc = 0x15D30Cu;
    // 0x15d30c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x15d30cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15d310: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x15d310u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x15d314: 0x0  nop
    ctx->pc = 0x15d314u;
    // NOP
label_15d318:
    // 0x15d318: 0x2c830005  sltiu       $v1, $a0, 0x5
    ctx->pc = 0x15d318u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x15d31c: 0x1060001f  beqz        $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x15D31Cu;
    {
        const bool branch_taken_0x15d31c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D31Cu;
        // 0x15d320: 0x3c020069  lui         $v0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d31c) {
            ctx->pc = 0x15D39Cu;
            goto label_15d39c;
        }
    }
    ctx->pc = 0x15D324u;
    // 0x15d324: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x15d324u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x15d328: 0x24423160  addiu       $v0, $v0, 0x3160
    ctx->pc = 0x15d328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12640));
    // 0x15d32c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x15d32cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x15d330: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x15d330u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x15d334: 0x800008  jr          $a0
    ctx->pc = 0x15D334u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15D33Cu: goto label_15d33c;
            case 0x15D350u: goto label_15d350;
            case 0x15D364u: goto label_15d364;
            case 0x15D378u: goto label_15d378;
            case 0x15D38Cu: goto label_15d38c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15D334u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x15D33Cu;
label_15d33c:
    // 0x15d33c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x15d33cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15d340: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x15d340u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x15d344: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x15d344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15d348: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x15D348u;
    {
        const bool branch_taken_0x15d348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D348u;
        // 0x15d34c: 0xe4608624  swc1        $f0, -0x79DC($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294936100), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d348) {
            ctx->pc = 0x15D39Cu;
            goto label_15d39c;
        }
    }
    ctx->pc = 0x15D350u;
label_15d350:
    // 0x15d350: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x15d350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15d354: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x15d354u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x15d358: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x15d358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15d35c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x15D35Cu;
    {
        const bool branch_taken_0x15d35c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D35Cu;
        // 0x15d360: 0xe4608628  swc1        $f0, -0x79D8($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294936104), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d35c) {
            ctx->pc = 0x15D39Cu;
            goto label_15d39c;
        }
    }
    ctx->pc = 0x15D364u;
label_15d364:
    // 0x15d364: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x15d364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15d368: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x15d368u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x15d36c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x15d36cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15d370: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x15D370u;
    {
        const bool branch_taken_0x15d370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D370u;
        // 0x15d374: 0xe460862c  swc1        $f0, -0x79D4($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294936108), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d370) {
            ctx->pc = 0x15D39Cu;
            goto label_15d39c;
        }
    }
    ctx->pc = 0x15D378u;
label_15d378:
    // 0x15d378: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x15d378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15d37c: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x15d37cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x15d380: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x15d380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15d384: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x15D384u;
    {
        const bool branch_taken_0x15d384 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D384u;
        // 0x15d388: 0xe4608630  swc1        $f0, -0x79D0($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294936112), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d384) {
            ctx->pc = 0x15D39Cu;
            goto label_15d39c;
        }
    }
    ctx->pc = 0x15D38Cu;
label_15d38c:
    // 0x15d38c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x15d38cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15d390: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x15d390u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x15d394: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x15d394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15d398: 0xe4608634  swc1        $f0, -0x79CC($v1)
    ctx->pc = 0x15d398u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x338634u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x338634u, _value); } while (0); }
label_15d39c:
    // 0x15d39c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x15d39cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15d3a0: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x15d3a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x15d3a4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15d3a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15d3a8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x15d3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x15d3ac: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x15d3acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x15d3b0: 0xc07f0c8  jal         func_1FC320
    ctx->pc = 0x15D3B0u;
    SET_GPR_U32(ctx, 31, 0x15D3B8u);
    ctx->pc = 0x15D3B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D3B0u;
    // 0x15d3b4: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC320u, 0x15D3B0u, 0x15D3B8u)) {
        return;
    }
    ctx->pc = 0x15D3B8u;
label_15d3b8:
    // 0x15d3b8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x15d3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15d3bc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x15d3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15d3c0: 0x5460ffd5  bnel        $v1, $zero, . + 4 + (-0x2B << 2)
    ctx->pc = 0x15D3C0u;
    {
        const bool branch_taken_0x15d3c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15d3c0) {
            ctx->pc = 0x15D3C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15D3C0u;
            // 0x15d3c4: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15D318u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15d318;
        }
    }
    ctx->pc = 0x15D3C8u;
    // 0x15d3c8: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x15d3c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_15d3cc:
    // 0x15d3cc: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x15d3ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x15d3d0: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x15d3d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x15d3d4: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x15d3d4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x15d3d8: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x15d3d8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x15d3dc: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x15d3dcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x15d3e0: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x15d3e0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x15d3e4: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x15d3e4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15d3e8: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x15d3e8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15d3ec: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x15d3ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15d3f0: 0x3e00008  jr          $ra
    ctx->pc = 0x15D3F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15D3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D3F0u;
        // 0x15d3f4: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15D3F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15D3F8u;
}
