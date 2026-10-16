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

// Function: sub_00287168
// Address: 0x287168 - 0x2872b8
void sub_00287168_0x287168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00287168_0x287168");
#endif

    switch (ctx->pc) {
        case 0x287168u: goto label_287168;
        case 0x28716cu: goto label_28716c;
        case 0x287170u: goto label_287170;
        case 0x287174u: goto label_287174;
        case 0x287178u: goto label_287178;
        case 0x28717cu: goto label_28717c;
        case 0x287180u: goto label_287180;
        case 0x287184u: goto label_287184;
        case 0x287188u: goto label_287188;
        case 0x28718cu: goto label_28718c;
        case 0x287190u: goto label_287190;
        case 0x287194u: goto label_287194;
        case 0x287198u: goto label_287198;
        case 0x28719cu: goto label_28719c;
        case 0x2871a0u: goto label_2871a0;
        case 0x2871a4u: goto label_2871a4;
        case 0x2871a8u: goto label_2871a8;
        case 0x2871acu: goto label_2871ac;
        case 0x2871b0u: goto label_2871b0;
        case 0x2871b4u: goto label_2871b4;
        case 0x2871b8u: goto label_2871b8;
        case 0x2871bcu: goto label_2871bc;
        case 0x2871c0u: goto label_2871c0;
        case 0x2871c4u: goto label_2871c4;
        case 0x2871c8u: goto label_2871c8;
        case 0x2871ccu: goto label_2871cc;
        case 0x2871d0u: goto label_2871d0;
        case 0x2871d4u: goto label_2871d4;
        case 0x2871d8u: goto label_2871d8;
        case 0x2871dcu: goto label_2871dc;
        case 0x2871e0u: goto label_2871e0;
        case 0x2871e4u: goto label_2871e4;
        case 0x2871e8u: goto label_2871e8;
        case 0x2871ecu: goto label_2871ec;
        case 0x2871f0u: goto label_2871f0;
        case 0x2871f4u: goto label_2871f4;
        case 0x2871f8u: goto label_2871f8;
        case 0x2871fcu: goto label_2871fc;
        case 0x287200u: goto label_287200;
        case 0x287204u: goto label_287204;
        case 0x287208u: goto label_287208;
        case 0x28720cu: goto label_28720c;
        case 0x287210u: goto label_287210;
        case 0x287214u: goto label_287214;
        case 0x287218u: goto label_287218;
        case 0x28721cu: goto label_28721c;
        case 0x287220u: goto label_287220;
        case 0x287224u: goto label_287224;
        case 0x287228u: goto label_287228;
        case 0x28722cu: goto label_28722c;
        case 0x287230u: goto label_287230;
        case 0x287234u: goto label_287234;
        case 0x287238u: goto label_287238;
        case 0x28723cu: goto label_28723c;
        case 0x287240u: goto label_287240;
        case 0x287244u: goto label_287244;
        case 0x287248u: goto label_287248;
        case 0x28724cu: goto label_28724c;
        case 0x287250u: goto label_287250;
        case 0x287254u: goto label_287254;
        case 0x287258u: goto label_287258;
        case 0x28725cu: goto label_28725c;
        case 0x287260u: goto label_287260;
        case 0x287264u: goto label_287264;
        case 0x287268u: goto label_287268;
        case 0x28726cu: goto label_28726c;
        case 0x287270u: goto label_287270;
        case 0x287274u: goto label_287274;
        case 0x287278u: goto label_287278;
        case 0x28727cu: goto label_28727c;
        case 0x287280u: goto label_287280;
        case 0x287284u: goto label_287284;
        case 0x287288u: goto label_287288;
        case 0x28728cu: goto label_28728c;
        case 0x287290u: goto label_287290;
        case 0x287294u: goto label_287294;
        case 0x287298u: goto label_287298;
        case 0x28729cu: goto label_28729c;
        case 0x2872a0u: goto label_2872a0;
        case 0x2872a4u: goto label_2872a4;
        case 0x2872a8u: goto label_2872a8;
        case 0x2872acu: goto label_2872ac;
        case 0x2872b0u: goto label_2872b0;
        case 0x2872b4u: goto label_2872b4;
        default: break;
    }

    ctx->pc = 0x287168u;

label_287168:
    // 0x287168: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x287168u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_28716c:
    // 0x28716c: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x28716cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
label_287170:
    // 0x287170: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x287170u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_287174:
    // 0x287174: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x287174u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_287178:
    // 0x287178: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x287178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_28717c:
    // 0x28717c: 0x3c59821  addu        $s3, $fp, $a1
    ctx->pc = 0x28717cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 5)));
label_287180:
    // 0x287180: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x287180u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_287184:
    // 0x287184: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x287184u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_287188:
    // 0x287188: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x287188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_28718c:
    // 0x28718c: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x28718cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
label_287190:
    // 0x287190: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x287190u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
label_287194:
    // 0x287194: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x287194u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
label_287198:
    // 0x287198: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x287198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_28719c:
    // 0x28719c: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x28719cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_2871a0:
    // 0x2871a0: 0x10400036  beqz        $v0, . + 4 + (0x36 << 2)
label_2871a4:
    if (ctx->pc == 0x2871A4u) {
        ctx->pc = 0x2871A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2871A0u;
        // 0x2871a4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2871A8u;
        goto label_2871a8;
    }
    ctx->pc = 0x2871A0u;
    {
        const bool branch_taken_0x2871a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2871A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2871A0u;
        // 0x2871a4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2871a0) {
            ctx->pc = 0x28727Cu;
            goto label_28727c;
        }
    }
    ctx->pc = 0x2871A8u;
label_2871a8:
    // 0x2871a8: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x2871a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2871ac:
    // 0x2871ac: 0x1840002f  blez        $v0, . + 4 + (0x2F << 2)
label_2871b0:
    if (ctx->pc == 0x2871B0u) {
        ctx->pc = 0x2871B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2871ACu;
        // 0x2871b0: 0x3c170073  lui         $s7, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2871B4u;
        goto label_2871b4;
    }
    ctx->pc = 0x2871ACu;
    {
        const bool branch_taken_0x2871ac = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x2871B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2871ACu;
        // 0x2871b0: 0x3c170073  lui         $s7, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2871ac) {
            ctx->pc = 0x28726Cu;
            goto label_28726c;
        }
    }
    ctx->pc = 0x2871B4u;
label_2871b4:
    // 0x2871b4: 0x26f60fc8  addiu       $s6, $s7, 0xFC8
    ctx->pc = 0x2871b4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 23), 4040));
label_2871b8:
    // 0x2871b8: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x2871b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_2871bc:
    // 0x2871bc: 0x0  nop
    ctx->pc = 0x2871bcu;
    // NOP
label_2871c0:
    // 0x2871c0: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x2871c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_2871c4:
    // 0x2871c4: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x2871c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2871c8:
    // 0x2871c8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2871c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2871cc:
    // 0x2871cc: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2871d0:
    if (ctx->pc == 0x2871D0u) {
        ctx->pc = 0x2871D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2871CCu;
        // 0x2871d0: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2871D4u;
        goto label_2871d4;
    }
    ctx->pc = 0x2871CCu;
    {
        const bool branch_taken_0x2871cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2871cc) {
            ctx->pc = 0x2871D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2871CCu;
            // 0x2871d0: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2871E8u;
            goto label_2871e8;
        }
    }
    ctx->pc = 0x2871D4u;
label_2871d4:
    // 0x2871d4: 0x8ec2010c  lw          $v0, 0x10C($s6)
    ctx->pc = 0x2871d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 268)));
label_2871d8:
    // 0x2871d8: 0x40f809  jalr        $v0
label_2871dc:
    if (ctx->pc == 0x2871DCu) {
        ctx->pc = 0x2871E0u;
        goto label_2871e0;
    }
    ctx->pc = 0x2871D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2871E0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2871D8u, 0x2871E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2871E0u;
label_2871e0:
    // 0x2871e0: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x2871e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_2871e4:
    // 0x2871e4: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2871e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2871e8:
    // 0x2871e8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2871e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2871ec:
    // 0x2871ec: 0x14430013  bne         $v0, $v1, . + 4 + (0x13 << 2)
label_2871f0:
    if (ctx->pc == 0x2871F0u) {
        ctx->pc = 0x2871F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2871ECu;
        // 0x2871f0: 0x26150001  addiu       $s5, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2871F4u;
        goto label_2871f4;
    }
    ctx->pc = 0x2871ECu;
    {
        const bool branch_taken_0x2871ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2871F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2871ECu;
        // 0x2871f0: 0x26150001  addiu       $s5, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2871ec) {
            ctx->pc = 0x28723Cu;
            goto label_28723c;
        }
    }
    ctx->pc = 0x2871F4u;
label_2871f4:
    // 0x2871f4: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x2871f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_2871f8:
    // 0x2871f8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2871f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2871fc:
    // 0x2871fc: 0x1840000f  blez        $v0, . + 4 + (0xF << 2)
label_287200:
    if (ctx->pc == 0x287200u) {
        ctx->pc = 0x287200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2871FCu;
        // 0x287200: 0x8e23000c  lw          $v1, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x287204u;
        goto label_287204;
    }
    ctx->pc = 0x2871FCu;
    {
        const bool branch_taken_0x2871fc = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x287200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2871FCu;
        // 0x287200: 0x8e23000c  lw          $v1, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2871fc) {
            ctx->pc = 0x28723Cu;
            goto label_28723c;
        }
    }
    ctx->pc = 0x287204u;
label_287204:
    // 0x287204: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x287204u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
label_287208:
    // 0x287208: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x287208u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_28720c:
    // 0x28720c: 0x24540fc8  addiu       $s4, $v0, 0xFC8
    ctx->pc = 0x28720cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4040));
label_287210:
    // 0x287210: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x287210u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_287214:
    // 0x287214: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
label_287218:
    if (ctx->pc == 0x287218u) {
        ctx->pc = 0x287218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287214u;
        // 0x287218: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28721Cu;
        goto label_28721c;
    }
    ctx->pc = 0x287214u;
    {
        const bool branch_taken_0x287214 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x287214) {
            ctx->pc = 0x287218u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x287214u;
            // 0x287218: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28722Cu;
            goto label_28722c;
        }
    }
    ctx->pc = 0x28721Cu;
label_28721c:
    // 0x28721c: 0x8e82010c  lw          $v0, 0x10C($s4)
    ctx->pc = 0x28721cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 268)));
label_287220:
    // 0x287220: 0x40f809  jalr        $v0
label_287224:
    if (ctx->pc == 0x287224u) {
        ctx->pc = 0x287228u;
        goto label_287228;
    }
    ctx->pc = 0x287220u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x287228u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x287220u, 0x287228u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x287228u;
label_287228:
    // 0x287228: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x287228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_28722c:
    // 0x28722c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x28722cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_287230:
    // 0x287230: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x287230u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_287234:
    // 0x287234: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_287238:
    if (ctx->pc == 0x287238u) {
        ctx->pc = 0x287238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287234u;
        // 0x287238: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28723Cu;
        goto label_28723c;
    }
    ctx->pc = 0x287234u;
    {
        const bool branch_taken_0x287234 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x287238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287234u;
        // 0x287238: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287234) {
            ctx->pc = 0x287210u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_287210;
        }
    }
    ctx->pc = 0x28723Cu;
label_28723c:
    // 0x28723c: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x28723cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_287240:
    // 0x287240: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_287244:
    if (ctx->pc == 0x287244u) {
        ctx->pc = 0x287244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287240u;
        // 0x287244: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x287248u;
        goto label_287248;
    }
    ctx->pc = 0x287240u;
    {
        const bool branch_taken_0x287240 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x287240) {
            ctx->pc = 0x287244u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x287240u;
            // 0x287244: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28725Cu;
            goto label_28725c;
        }
    }
    ctx->pc = 0x287248u;
label_287248:
    // 0x287248: 0x8ec2010c  lw          $v0, 0x10C($s6)
    ctx->pc = 0x287248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 268)));
label_28724c:
    // 0x28724c: 0x40f809  jalr        $v0
label_287250:
    if (ctx->pc == 0x287250u) {
        ctx->pc = 0x287254u;
        goto label_287254;
    }
    ctx->pc = 0x28724Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x287254u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28724Cu, 0x287254u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x287254u;
label_287254:
    // 0x287254: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x287254u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
label_287258:
    // 0x287258: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x287258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_28725c:
    // 0x28725c: 0x2a0802d  daddu       $s0, $s5, $zero
    ctx->pc = 0x28725cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_287260:
    // 0x287260: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x287260u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_287264:
    // 0x287264: 0x5440ffd6  bnel        $v0, $zero, . + 4 + (-0x2A << 2)
label_287268:
    if (ctx->pc == 0x287268u) {
        ctx->pc = 0x287268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287264u;
        // 0x287268: 0x8e630004  lw          $v1, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28726Cu;
        goto label_28726c;
    }
    ctx->pc = 0x287264u;
    {
        const bool branch_taken_0x287264 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x287264) {
            ctx->pc = 0x287268u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x287264u;
            // 0x287268: 0x8e630004  lw          $v1, 0x4($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2871C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2871c0;
        }
    }
    ctx->pc = 0x28726Cu;
label_28726c:
    // 0x28726c: 0x26e30fc8  addiu       $v1, $s7, 0xFC8
    ctx->pc = 0x28726cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4040));
label_287270:
    // 0x287270: 0x8c62010c  lw          $v0, 0x10C($v1)
    ctx->pc = 0x287270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_287274:
    // 0x287274: 0x40f809  jalr        $v0
label_287278:
    if (ctx->pc == 0x287278u) {
        ctx->pc = 0x287278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287274u;
        // 0x287278: 0x8e640004  lw          $a0, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28727Cu;
        goto label_28727c;
    }
    ctx->pc = 0x287274u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x28727Cu);
        ctx->pc = 0x287278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287274u;
        // 0x287278: 0x8e640004  lw          $a0, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x287274u, 0x28727Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28727Cu;
label_28727c:
    // 0x28727c: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x28727cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
label_287280:
    // 0x287280: 0x3c0102d  daddu       $v0, $fp, $zero
    ctx->pc = 0x287280u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_287284:
    // 0x287284: 0xae600004  sw          $zero, 0x4($s3)
    ctx->pc = 0x287284u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
label_287288:
    // 0x287288: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x287288u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_28728c:
    // 0x28728c: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x28728cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_287290:
    // 0x287290: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x287290u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_287294:
    // 0x287294: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x287294u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_287298:
    // 0x287298: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x287298u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_28729c:
    // 0x28729c: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x28729cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2872a0:
    // 0x2872a0: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x2872a0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2872a4:
    // 0x2872a4: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x2872a4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2872a8:
    // 0x2872a8: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x2872a8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2872ac:
    // 0x2872ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2872acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2872b0:
    // 0x2872b0: 0x3e00008  jr          $ra
label_2872b4:
    if (ctx->pc == 0x2872B4u) {
        ctx->pc = 0x2872B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2872B0u;
        // 0x2872b4: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2872B8u;
        goto label_fallthrough_0x2872b0;
    }
    ctx->pc = 0x2872B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2872B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2872B0u;
        // 0x2872b4: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2872B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2872b0:
    ctx->pc = 0x2872B8u;
}
