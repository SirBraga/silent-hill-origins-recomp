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

// Function: sub_00112168
// Address: 0x112168 - 0x112310
void sub_00112168_0x112168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00112168_0x112168");
#endif

    switch (ctx->pc) {
        case 0x112168u: goto label_112168;
        case 0x11216cu: goto label_11216c;
        case 0x112170u: goto label_112170;
        case 0x112174u: goto label_112174;
        case 0x112178u: goto label_112178;
        case 0x11217cu: goto label_11217c;
        case 0x112180u: goto label_112180;
        case 0x112184u: goto label_112184;
        case 0x112188u: goto label_112188;
        case 0x11218cu: goto label_11218c;
        case 0x112190u: goto label_112190;
        case 0x112194u: goto label_112194;
        case 0x112198u: goto label_112198;
        case 0x11219cu: goto label_11219c;
        case 0x1121a0u: goto label_1121a0;
        case 0x1121a4u: goto label_1121a4;
        case 0x1121a8u: goto label_1121a8;
        case 0x1121acu: goto label_1121ac;
        case 0x1121b0u: goto label_1121b0;
        case 0x1121b4u: goto label_1121b4;
        case 0x1121b8u: goto label_1121b8;
        case 0x1121bcu: goto label_1121bc;
        case 0x1121c0u: goto label_1121c0;
        case 0x1121c4u: goto label_1121c4;
        case 0x1121c8u: goto label_1121c8;
        case 0x1121ccu: goto label_1121cc;
        case 0x1121d0u: goto label_1121d0;
        case 0x1121d4u: goto label_1121d4;
        case 0x1121d8u: goto label_1121d8;
        case 0x1121dcu: goto label_1121dc;
        case 0x1121e0u: goto label_1121e0;
        case 0x1121e4u: goto label_1121e4;
        case 0x1121e8u: goto label_1121e8;
        case 0x1121ecu: goto label_1121ec;
        case 0x1121f0u: goto label_1121f0;
        case 0x1121f4u: goto label_1121f4;
        case 0x1121f8u: goto label_1121f8;
        case 0x1121fcu: goto label_1121fc;
        case 0x112200u: goto label_112200;
        case 0x112204u: goto label_112204;
        case 0x112208u: goto label_112208;
        case 0x11220cu: goto label_11220c;
        case 0x112210u: goto label_112210;
        case 0x112214u: goto label_112214;
        case 0x112218u: goto label_112218;
        case 0x11221cu: goto label_11221c;
        case 0x112220u: goto label_112220;
        case 0x112224u: goto label_112224;
        case 0x112228u: goto label_112228;
        case 0x11222cu: goto label_11222c;
        case 0x112230u: goto label_112230;
        case 0x112234u: goto label_112234;
        case 0x112238u: goto label_112238;
        case 0x11223cu: goto label_11223c;
        case 0x112240u: goto label_112240;
        case 0x112244u: goto label_112244;
        case 0x112248u: goto label_112248;
        case 0x11224cu: goto label_11224c;
        case 0x112250u: goto label_112250;
        case 0x112254u: goto label_112254;
        case 0x112258u: goto label_112258;
        case 0x11225cu: goto label_11225c;
        case 0x112260u: goto label_112260;
        case 0x112264u: goto label_112264;
        case 0x112268u: goto label_112268;
        case 0x11226cu: goto label_11226c;
        case 0x112270u: goto label_112270;
        case 0x112274u: goto label_112274;
        case 0x112278u: goto label_112278;
        case 0x11227cu: goto label_11227c;
        case 0x112280u: goto label_112280;
        case 0x112284u: goto label_112284;
        case 0x112288u: goto label_112288;
        case 0x11228cu: goto label_11228c;
        case 0x112290u: goto label_112290;
        case 0x112294u: goto label_112294;
        case 0x112298u: goto label_112298;
        case 0x11229cu: goto label_11229c;
        case 0x1122a0u: goto label_1122a0;
        case 0x1122a4u: goto label_1122a4;
        case 0x1122a8u: goto label_1122a8;
        case 0x1122acu: goto label_1122ac;
        case 0x1122b0u: goto label_1122b0;
        case 0x1122b4u: goto label_1122b4;
        case 0x1122b8u: goto label_1122b8;
        case 0x1122bcu: goto label_1122bc;
        case 0x1122c0u: goto label_1122c0;
        case 0x1122c4u: goto label_1122c4;
        case 0x1122c8u: goto label_1122c8;
        case 0x1122ccu: goto label_1122cc;
        case 0x1122d0u: goto label_1122d0;
        case 0x1122d4u: goto label_1122d4;
        case 0x1122d8u: goto label_1122d8;
        case 0x1122dcu: goto label_1122dc;
        case 0x1122e0u: goto label_1122e0;
        case 0x1122e4u: goto label_1122e4;
        case 0x1122e8u: goto label_1122e8;
        case 0x1122ecu: goto label_1122ec;
        case 0x1122f0u: goto label_1122f0;
        case 0x1122f4u: goto label_1122f4;
        case 0x1122f8u: goto label_1122f8;
        case 0x1122fcu: goto label_1122fc;
        case 0x112300u: goto label_112300;
        case 0x112304u: goto label_112304;
        case 0x112308u: goto label_112308;
        case 0x11230cu: goto label_11230c;
        default: break;
    }

    ctx->pc = 0x112168u;

label_112168:
    // 0x112168: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x112168u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_11216c:
    // 0x11216c: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x11216cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_112170:
    // 0x112170: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x112170u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_112174:
    // 0x112174: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x112174u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_112178:
    // 0x112178: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x112178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
label_11217c:
    // 0x11217c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x11217cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_112180:
    // 0x112180: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x112180u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_112184:
    // 0x112184: 0x2415ffff  addiu       $s5, $zero, -0x1
    ctx->pc = 0x112184u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_112188:
    // 0x112188: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x112188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_11218c:
    // 0x11218c: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x11218cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
label_112190:
    // 0x112190: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x112190u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
label_112194:
    // 0x112194: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x112194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_112198:
    // 0x112198: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x112198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_11219c:
    // 0x11219c: 0x18400010  blez        $v0, . + 4 + (0x10 << 2)
label_1121a0:
    if (ctx->pc == 0x1121A0u) {
        ctx->pc = 0x1121A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11219Cu;
        // 0x1121a0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1121A4u;
        goto label_1121a4;
    }
    ctx->pc = 0x11219Cu;
    {
        const bool branch_taken_0x11219c = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x1121A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11219Cu;
        // 0x1121a0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11219c) {
            ctx->pc = 0x1121E0u;
            goto label_1121e0;
        }
    }
    ctx->pc = 0x1121A4u;
label_1121a4:
    // 0x1121a4: 0x8e0200d8  lw          $v0, 0xD8($s0)
    ctx->pc = 0x1121a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
label_1121a8:
    // 0x1121a8: 0x16420003  bne         $s2, $v0, . + 4 + (0x3 << 2)
label_1121ac:
    if (ctx->pc == 0x1121ACu) {
        ctx->pc = 0x1121ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1121A8u;
        // 0x1121ac: 0x261400d8  addiu       $s4, $s0, 0xD8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 216));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1121B0u;
        goto label_1121b0;
    }
    ctx->pc = 0x1121A8u;
    {
        const bool branch_taken_0x1121a8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x1121ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1121A8u;
        // 0x1121ac: 0x261400d8  addiu       $s4, $s0, 0xD8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 216));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1121a8) {
            ctx->pc = 0x1121B8u;
            goto label_1121b8;
        }
    }
    ctx->pc = 0x1121B0u;
label_1121b0:
    // 0x1121b0: 0x1000000b  b           . + 4 + (0xB << 2)
label_1121b4:
    if (ctx->pc == 0x1121B4u) {
        ctx->pc = 0x1121B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1121B0u;
        // 0x1121b4: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1121B8u;
        goto label_1121b8;
    }
    ctx->pc = 0x1121B0u;
    {
        const bool branch_taken_0x1121b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1121B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1121B0u;
        // 0x1121b4: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1121b0) {
            ctx->pc = 0x1121E0u;
            goto label_1121e0;
        }
    }
    ctx->pc = 0x1121B8u;
label_1121b8:
    // 0x1121b8: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1121b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1121bc:
    // 0x1121bc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1121bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1121c0:
    // 0x1121c0: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x1121c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1121c4:
    // 0x1121c4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1121c8:
    if (ctx->pc == 0x1121C8u) {
        ctx->pc = 0x1121C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1121C4u;
        // 0x1121c8: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1121CCu;
        goto label_1121cc;
    }
    ctx->pc = 0x1121C4u;
    {
        const bool branch_taken_0x1121c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1121C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1121C4u;
        // 0x1121c8: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1121c4) {
            ctx->pc = 0x1121E0u;
            goto label_1121e0;
        }
    }
    ctx->pc = 0x1121CCu;
label_1121cc:
    // 0x1121cc: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x1121ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_1121d0:
    // 0x1121d0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1121d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1121d4:
    // 0x1121d4: 0x5643fff9  bnel        $s2, $v1, . + 4 + (-0x7 << 2)
label_1121d8:
    if (ctx->pc == 0x1121D8u) {
        ctx->pc = 0x1121D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1121D4u;
        // 0x1121d8: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1121DCu;
        goto label_1121dc;
    }
    ctx->pc = 0x1121D4u;
    {
        const bool branch_taken_0x1121d4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 3));
        if (branch_taken_0x1121d4) {
            ctx->pc = 0x1121D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1121D4u;
            // 0x1121d8: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1121BCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1121bc;
        }
    }
    ctx->pc = 0x1121DCu;
label_1121dc:
    // 0x1121dc: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1121dcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1121e0:
    // 0x1121e0: 0x8e430034  lw          $v1, 0x34($s2)
    ctx->pc = 0x1121e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
label_1121e4:
    // 0x1121e4: 0x261400d8  addiu       $s4, $s0, 0xD8
    ctx->pc = 0x1121e4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 216));
label_1121e8:
    // 0x1121e8: 0x15b080  sll         $s6, $s5, 2
    ctx->pc = 0x1121e8u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
label_1121ec:
    // 0x1121ec: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x1121ecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_1121f0:
    // 0x1121f0: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x1121f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_1121f4:
    // 0x1121f4: 0x40f809  jalr        $v0
label_1121f8:
    if (ctx->pc == 0x1121F8u) {
        ctx->pc = 0x1121F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1121F4u;
        // 0x1121f8: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1121FCu;
        goto label_1121fc;
    }
    ctx->pc = 0x1121F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1121FCu);
        ctx->pc = 0x1121F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1121F4u;
        // 0x1121f8: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1121F4u, 0x1121FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1121FCu;
label_1121fc:
    // 0x1121fc: 0x50400019  beql        $v0, $zero, . + 4 + (0x19 << 2)
label_112200:
    if (ctx->pc == 0x112200u) {
        ctx->pc = 0x112200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1121FCu;
        // 0x112200: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112204u;
        goto label_112204;
    }
    ctx->pc = 0x1121FCu;
    {
        const bool branch_taken_0x1121fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1121fc) {
            ctx->pc = 0x112200u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1121FCu;
            // 0x112200: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x112264u;
            goto label_112264;
        }
    }
    ctx->pc = 0x112204u;
label_112204:
    // 0x112204: 0x8e0401a8  lw          $a0, 0x1A8($s0)
    ctx->pc = 0x112204u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 424)));
label_112208:
    // 0x112208: 0x261101a8  addiu       $s1, $s0, 0x1A8
    ctx->pc = 0x112208u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 424));
label_11220c:
    // 0x11220c: 0x10800014  beqz        $a0, . + 4 + (0x14 << 2)
label_112210:
    if (ctx->pc == 0x112210u) {
        ctx->pc = 0x112210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11220Cu;
        // 0x112210: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112214u;
        goto label_112214;
    }
    ctx->pc = 0x11220Cu;
    {
        const bool branch_taken_0x11220c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x112210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11220Cu;
        // 0x112210: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11220c) {
            ctx->pc = 0x112260u;
            goto label_112260;
        }
    }
    ctx->pc = 0x112214u;
label_112214:
    // 0x112214: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x112214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_112218:
    // 0x112218: 0x5452000e  bnel        $v0, $s2, . + 4 + (0xE << 2)
label_11221c:
    if (ctx->pc == 0x11221Cu) {
        ctx->pc = 0x11221Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112218u;
        // 0x11221c: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112220u;
        goto label_112220;
    }
    ctx->pc = 0x112218u;
    {
        const bool branch_taken_0x112218 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x112218) {
            ctx->pc = 0x11221Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x112218u;
            // 0x11221c: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x112254u;
            goto label_112254;
        }
    }
    ctx->pc = 0x112220u;
label_112220:
    // 0x112220: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x112220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_112224:
    // 0x112224: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
label_112228:
    if (ctx->pc == 0x112228u) {
        ctx->pc = 0x11222Cu;
        goto label_11222c;
    }
    ctx->pc = 0x112224u;
    {
        const bool branch_taken_0x112224 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x112224) {
            ctx->pc = 0x112234u;
            goto label_112234;
        }
    }
    ctx->pc = 0x11222Cu;
label_11222c:
    // 0x11222c: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x11222cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_112230:
    // 0x112230: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x112230u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_112234:
    // 0x112234: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
label_112238:
    if (ctx->pc == 0x112238u) {
        ctx->pc = 0x11223Cu;
        goto label_11223c;
    }
    ctx->pc = 0x112234u;
    {
        const bool branch_taken_0x112234 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x112234) {
            ctx->pc = 0x112244u;
            goto label_112244;
        }
    }
    ctx->pc = 0x11223Cu;
label_11223c:
    // 0x11223c: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x11223cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_112240:
    // 0x112240: 0xae620008  sw          $v0, 0x8($s3)
    ctx->pc = 0x112240u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
label_112244:
    // 0x112244: 0xc0808b8  jal         func_2022E0
label_112248:
    if (ctx->pc == 0x112248u) {
        ctx->pc = 0x11224Cu;
        goto label_11224c;
    }
    ctx->pc = 0x112244u;
    SET_GPR_U32(ctx, 31, 0x11224Cu);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x112244u, 0x11224Cu)) {
        return;
    }
    ctx->pc = 0x11224Cu;
label_11224c:
    // 0x11224c: 0x10000002  b           . + 4 + (0x2 << 2)
label_112250:
    if (ctx->pc == 0x112250u) {
        ctx->pc = 0x112250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11224Cu;
        // 0x112250: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112254u;
        goto label_112254;
    }
    ctx->pc = 0x11224Cu;
    {
        const bool branch_taken_0x11224c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11224Cu;
        // 0x112250: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11224c) {
            ctx->pc = 0x112258u;
            goto label_112258;
        }
    }
    ctx->pc = 0x112254u;
label_112254:
    // 0x112254: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x112254u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_112258:
    // 0x112258: 0x5480ffef  bnel        $a0, $zero, . + 4 + (-0x11 << 2)
label_11225c:
    if (ctx->pc == 0x11225Cu) {
        ctx->pc = 0x11225Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112258u;
        // 0x11225c: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112260u;
        goto label_112260;
    }
    ctx->pc = 0x112258u;
    {
        const bool branch_taken_0x112258 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x112258) {
            ctx->pc = 0x11225Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x112258u;
            // 0x11225c: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x112218u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_112218;
        }
    }
    ctx->pc = 0x112260u;
label_112260:
    // 0x112260: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x112260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_112264:
    // 0x112264: 0x5455000b  bnel        $v0, $s5, . + 4 + (0xB << 2)
label_112268:
    if (ctx->pc == 0x112268u) {
        ctx->pc = 0x112268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112264u;
        // 0x112268: 0x8e03000c  lw          $v1, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11226Cu;
        goto label_11226c;
    }
    ctx->pc = 0x112264u;
    {
        const bool branch_taken_0x112264 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        if (branch_taken_0x112264) {
            ctx->pc = 0x112268u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x112264u;
            // 0x112268: 0x8e03000c  lw          $v1, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x112294u;
            goto label_112294;
        }
    }
    ctx->pc = 0x11226Cu;
label_11226c:
    // 0x11226c: 0x2961021  addu        $v0, $s4, $s6
    ctx->pc = 0x11226cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 22)));
label_112270:
    // 0x112270: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x112270u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_112274:
    // 0x112274: 0x8cc30034  lw          $v1, 0x34($a2)
    ctx->pc = 0x112274u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
label_112278:
    // 0x112278: 0x84640060  lh          $a0, 0x60($v1)
    ctx->pc = 0x112278u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 96)));
label_11227c:
    // 0x11227c: 0x8c650064  lw          $a1, 0x64($v1)
    ctx->pc = 0x11227cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
label_112280:
    // 0x112280: 0xa0f809  jalr        $a1
label_112284:
    if (ctx->pc == 0x112284u) {
        ctx->pc = 0x112284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112280u;
        // 0x112284: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112288u;
        goto label_112288;
    }
    ctx->pc = 0x112280u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x112288u);
        ctx->pc = 0x112284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112280u;
        // 0x112284: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x112280u, 0x112288u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x112288u;
label_112288:
    // 0x112288: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x112288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_11228c:
    // 0x11228c: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x11228cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_112290:
    // 0x112290: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x112290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_112294:
    // 0x112294: 0x2962821  addu        $a1, $s4, $s6
    ctx->pc = 0x112294u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 22)));
label_112298:
    // 0x112298: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x112298u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_11229c:
    // 0x11229c: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x11229cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
label_1122a0:
    // 0x1122a0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1122a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1122a4:
    // 0x1122a4: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x1122a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_1122a8:
    // 0x1122a8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1122a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1122ac:
    // 0x1122ac: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x1122acu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_1122b0:
    // 0x1122b0: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x1122b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1122b4:
    // 0x1122b4: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1122b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1122b8:
    // 0x1122b8: 0x50820001  beql        $a0, $v0, . + 4 + (0x1 << 2)
label_1122bc:
    if (ctx->pc == 0x1122BCu) {
        ctx->pc = 0x1122BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1122B8u;
        // 0x1122bc: 0xae150008  sw          $s5, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1122C0u;
        goto label_1122c0;
    }
    ctx->pc = 0x1122B8u;
    {
        const bool branch_taken_0x1122b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x1122b8) {
            ctx->pc = 0x1122BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1122B8u;
            // 0x1122bc: 0xae150008  sw          $s5, 0x8($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 21));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1122C0u;
            goto label_1122c0;
        }
    }
    ctx->pc = 0x1122C0u;
label_1122c0:
    // 0x1122c0: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1122c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1122c4:
    // 0x1122c4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1122c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1122c8:
    // 0x1122c8: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x1122c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_1122cc:
    // 0x1122cc: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1122ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_1122d0:
    // 0x1122d0: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x1122d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1122d4:
    // 0x1122d4: 0x5c600004  bgtzl       $v1, . + 4 + (0x4 << 2)
label_1122d8:
    if (ctx->pc == 0x1122D8u) {
        ctx->pc = 0x1122D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1122D4u;
        // 0x1122d8: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1122DCu;
        goto label_1122dc;
    }
    ctx->pc = 0x1122D4u;
    {
        const bool branch_taken_0x1122d4 = (GPR_S64(ctx, 3) > 0);
        if (branch_taken_0x1122d4) {
            ctx->pc = 0x1122D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1122D4u;
            // 0x1122d8: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1122E8u;
            goto label_1122e8;
        }
    }
    ctx->pc = 0x1122DCu;
label_1122dc:
    // 0x1122dc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1122dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1122e0:
    // 0x1122e0: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1122e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_1122e4:
    // 0x1122e4: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x1122e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1122e8:
    // 0x1122e8: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x1122e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1122ec:
    // 0x1122ec: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x1122ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1122f0:
    // 0x1122f0: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1122f0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1122f4:
    // 0x1122f4: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x1122f4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1122f8:
    // 0x1122f8: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x1122f8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1122fc:
    // 0x1122fc: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x1122fcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_112300:
    // 0x112300: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x112300u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_112304:
    // 0x112304: 0x3e00008  jr          $ra
label_112308:
    if (ctx->pc == 0x112308u) {
        ctx->pc = 0x112308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112304u;
        // 0x112308: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11230Cu;
        goto label_11230c;
    }
    ctx->pc = 0x112304u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x112308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112304u;
        // 0x112308: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x112304u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11230Cu;
label_11230c:
    // 0x11230c: 0x0  nop
    ctx->pc = 0x11230cu;
    // NOP
    ctx->pc = 0x112310u;
}
