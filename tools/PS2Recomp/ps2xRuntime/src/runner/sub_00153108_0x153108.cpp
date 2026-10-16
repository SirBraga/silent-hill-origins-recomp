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

// Function: sub_00153108
// Address: 0x153108 - 0x153238
void sub_00153108_0x153108(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00153108_0x153108");
#endif

    switch (ctx->pc) {
        case 0x153124u: goto label_153124;
        case 0x153148u: goto label_153148;
        case 0x153180u: goto label_153180;
        case 0x15319cu: goto label_15319c;
        case 0x1531b0u: goto label_1531b0;
        case 0x1531c4u: goto label_1531c4;
        case 0x1531f4u: goto label_1531f4;
        case 0x153220u: goto label_153220;
        default: break;
    }

    ctx->pc = 0x153108u;

    // 0x153108: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x153108u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x15310c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x15310cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x153110: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x153110u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x153114: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x153114u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x153118: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x153118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x15311c: 0xc054ad8  jal         func_152B60
    ctx->pc = 0x15311Cu;
    SET_GPR_U32(ctx, 31, 0x153124u);
    ctx->pc = 0x153120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15311Cu;
    // 0x153120: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x152B60u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x152B60u, 0x15311Cu, 0x153124u)) {
        return;
    }
    ctx->pc = 0x153124u;
label_153124:
    // 0x153124: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x153124u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x153128: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x153128u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x15312c: 0xae030044  sw          $v1, 0x44($s0)
    ctx->pc = 0x15312cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 3));
    // 0x153130: 0x3c050034  lui         $a1, 0x34
    ctx->pc = 0x153130u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)52 << 16));
    // 0x153134: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x153134u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x153138: 0xac8385f4  sw          $v1, -0x7A0C($a0)
    ctx->pc = 0x153138u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3385F4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3385F4u, _value); } while (0);
    // 0x15313c: 0xac4085fc  sw          $zero, -0x7A04($v0)
    ctx->pc = 0x15313cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3385FCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3385FCu, _value); } while (0);
    // 0x153140: 0xc075d7e  jal         func_1D75F8
    ctx->pc = 0x153140u;
    SET_GPR_U32(ctx, 31, 0x153148u);
    ctx->pc = 0x153144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153140u;
    // 0x153144: 0xaca085f8  sw          $zero, -0x7A08($a1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294936056), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D75F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D75F8u, 0x153140u, 0x153148u)) {
        return;
    }
    ctx->pc = 0x153148u;
label_153148:
    // 0x153148: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x153148u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x15314c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x15314cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x153150: 0x8c4546c8  lw          $a1, 0x46C8($v0)
    ctx->pc = 0x153150u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x6B46C8u));
    // 0x153154: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x153154u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x153158: 0x8c831a70  lw          $v1, 0x1A70($a0)
    ctx->pc = 0x153158u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x701A70u));
    // 0x15315c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x15315cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153160: 0x10a30007  beq         $a1, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x153160u;
    {
        const bool branch_taken_0x153160 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x153164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153160u;
        // 0x153164: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153160) {
            ctx->pc = 0x153180u;
            goto label_153180;
        }
    }
    ctx->pc = 0x153168u;
    // 0x153168: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x153168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x15316c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x15316Cu;
    {
        const bool branch_taken_0x15316c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x153170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15316Cu;
        // 0x153170: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15316c) {
            ctx->pc = 0x153180u;
            goto label_153180;
        }
    }
    ctx->pc = 0x153174u;
    // 0x153174: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x153174u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x153178: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x153178u;
    SET_GPR_U32(ctx, 31, 0x153180u);
    ctx->pc = 0x15317Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153178u;
    // 0x15317c: 0xafa60004  sw          $a2, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x153178u, 0x153180u)) {
        return;
    }
    ctx->pc = 0x153180u;
label_153180:
    // 0x153180: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x153180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x153184: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x153184u;
    {
        const bool branch_taken_0x153184 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x153188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153184u;
        // 0x153188: 0xae000088  sw          $zero, 0x88($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153184) {
            ctx->pc = 0x1531C4u;
            goto label_1531c4;
        }
    }
    ctx->pc = 0x15318Cu;
    // 0x15318c: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x15318cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x153190: 0x8e110084  lw          $s1, 0x84($s0)
    ctx->pc = 0x153190u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x153194: 0xc07d234  jal         func_1F48D0
    ctx->pc = 0x153194u;
    SET_GPR_U32(ctx, 31, 0x15319Cu);
    ctx->pc = 0x153198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153194u;
    // 0x153198: 0x24502670  addiu       $s0, $v0, 0x2670 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 9840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F48D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F48D0u, 0x153194u, 0x15319Cu)) {
        return;
    }
    ctx->pc = 0x15319Cu;
label_15319c:
    // 0x15319c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x15319Cu;
    {
        const bool branch_taken_0x15319c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1531A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15319Cu;
        // 0x1531a0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15319c) {
            ctx->pc = 0x1531C4u;
            goto label_1531c4;
        }
    }
    ctx->pc = 0x1531A4u;
    // 0x1531a4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1531a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1531a8: 0xc07d3d6  jal         func_1F4F58
    ctx->pc = 0x1531A8u;
    SET_GPR_U32(ctx, 31, 0x1531B0u);
    ctx->pc = 0x1531ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1531A8u;
    // 0x1531ac: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4F58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4F58u, 0x1531A8u, 0x1531B0u)) {
        return;
    }
    ctx->pc = 0x1531B0u;
label_1531b0:
    // 0x1531b0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1531B0u;
    {
        const bool branch_taken_0x1531b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1531B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1531B0u;
        // 0x1531b4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1531b0) {
            ctx->pc = 0x1531C4u;
            goto label_1531c4;
        }
    }
    ctx->pc = 0x1531B8u;
    // 0x1531b8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1531b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1531bc: 0xc07d2ee  jal         func_1F4BB8
    ctx->pc = 0x1531BCu;
    SET_GPR_U32(ctx, 31, 0x1531C4u);
    ctx->pc = 0x1531C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1531BCu;
    // 0x1531c0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4BB8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4BB8u, 0x1531BCu, 0x1531C4u)) {
        return;
    }
    ctx->pc = 0x1531C4u;
label_1531c4:
    // 0x1531c4: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x1531c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x1531c8: 0x8e431a70  lw          $v1, 0x1A70($s2)
    ctx->pc = 0x1531c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 6768)));
    // 0x1531cc: 0x8c444348  lw          $a0, 0x4348($v0)
    ctx->pc = 0x1531ccu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6B4348u));
    // 0x1531d0: 0x1083000a  beq         $a0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1531D0u;
    {
        const bool branch_taken_0x1531d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1531D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1531D0u;
        // 0x1531d4: 0x3c02006d  lui         $v0, 0x6D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1531d0) {
            ctx->pc = 0x1531FCu;
            goto label_1531fc;
        }
    }
    ctx->pc = 0x1531D8u;
    // 0x1531d8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1531d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1531dc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1531DCu;
    {
        const bool branch_taken_0x1531dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1531E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1531DCu;
        // 0x1531e0: 0x3c02006d  lui         $v0, 0x6D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1531dc) {
            ctx->pc = 0x1531FCu;
            goto label_1531fc;
        }
    }
    ctx->pc = 0x1531E4u;
    // 0x1531e4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1531e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1531e8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1531e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1531ec: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x1531ECu;
    SET_GPR_U32(ctx, 31, 0x1531F4u);
    ctx->pc = 0x1531F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1531ECu;
    // 0x1531f0: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x1531ECu, 0x1531F4u)) {
        return;
    }
    ctx->pc = 0x1531F4u;
label_1531f4:
    // 0x1531f4: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x1531f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x1531f8: 0x8e431a70  lw          $v1, 0x1A70($s2)
    ctx->pc = 0x1531f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 6768)));
label_1531fc:
    // 0x1531fc: 0x8c45bcc8  lw          $a1, -0x4338($v0)
    ctx->pc = 0x1531fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950088)));
    // 0x153200: 0x10a30008  beq         $a1, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x153200u;
    {
        const bool branch_taken_0x153200 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x153204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153200u;
        // 0x153204: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153200) {
            ctx->pc = 0x153224u;
            goto label_153224;
        }
    }
    ctx->pc = 0x153208u;
    // 0x153208: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x153208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x15320c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x15320Cu;
    {
        const bool branch_taken_0x15320c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x153210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15320Cu;
        // 0x153210: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15320c) {
            ctx->pc = 0x153224u;
            goto label_153224;
        }
    }
    ctx->pc = 0x153214u;
    // 0x153214: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x153214u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x153218: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x153218u;
    SET_GPR_U32(ctx, 31, 0x153220u);
    ctx->pc = 0x15321Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153218u;
    // 0x15321c: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x153218u, 0x153220u)) {
        return;
    }
    ctx->pc = 0x153220u;
label_153220:
    // 0x153220: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x153220u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_153224:
    // 0x153224: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x153224u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x153228: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x153228u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15322c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x15322cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x153230: 0x3e00008  jr          $ra
    ctx->pc = 0x153230u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x153234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153230u;
        // 0x153234: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x153230u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x153238u;
}
