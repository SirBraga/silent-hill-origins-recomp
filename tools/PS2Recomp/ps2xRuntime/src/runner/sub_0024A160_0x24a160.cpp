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

// Function: sub_0024A160
// Address: 0x24a160 - 0x24a268
void sub_0024A160_0x24a160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024A160_0x24a160");
#endif

    switch (ctx->pc) {
        case 0x24a160u: goto label_24a160;
        case 0x24a164u: goto label_24a164;
        case 0x24a168u: goto label_24a168;
        case 0x24a16cu: goto label_24a16c;
        case 0x24a170u: goto label_24a170;
        case 0x24a174u: goto label_24a174;
        case 0x24a178u: goto label_24a178;
        case 0x24a17cu: goto label_24a17c;
        case 0x24a180u: goto label_24a180;
        case 0x24a184u: goto label_24a184;
        case 0x24a188u: goto label_24a188;
        case 0x24a18cu: goto label_24a18c;
        case 0x24a190u: goto label_24a190;
        case 0x24a194u: goto label_24a194;
        case 0x24a198u: goto label_24a198;
        case 0x24a19cu: goto label_24a19c;
        case 0x24a1a0u: goto label_24a1a0;
        case 0x24a1a4u: goto label_24a1a4;
        case 0x24a1a8u: goto label_24a1a8;
        case 0x24a1acu: goto label_24a1ac;
        case 0x24a1b0u: goto label_24a1b0;
        case 0x24a1b4u: goto label_24a1b4;
        case 0x24a1b8u: goto label_24a1b8;
        case 0x24a1bcu: goto label_24a1bc;
        case 0x24a1c0u: goto label_24a1c0;
        case 0x24a1c4u: goto label_24a1c4;
        case 0x24a1c8u: goto label_24a1c8;
        case 0x24a1ccu: goto label_24a1cc;
        case 0x24a1d0u: goto label_24a1d0;
        case 0x24a1d4u: goto label_24a1d4;
        case 0x24a1d8u: goto label_24a1d8;
        case 0x24a1dcu: goto label_24a1dc;
        case 0x24a1e0u: goto label_24a1e0;
        case 0x24a1e4u: goto label_24a1e4;
        case 0x24a1e8u: goto label_24a1e8;
        case 0x24a1ecu: goto label_24a1ec;
        case 0x24a1f0u: goto label_24a1f0;
        case 0x24a1f4u: goto label_24a1f4;
        case 0x24a1f8u: goto label_24a1f8;
        case 0x24a1fcu: goto label_24a1fc;
        case 0x24a200u: goto label_24a200;
        case 0x24a204u: goto label_24a204;
        case 0x24a208u: goto label_24a208;
        case 0x24a20cu: goto label_24a20c;
        case 0x24a210u: goto label_24a210;
        case 0x24a214u: goto label_24a214;
        case 0x24a218u: goto label_24a218;
        case 0x24a21cu: goto label_24a21c;
        case 0x24a220u: goto label_24a220;
        case 0x24a224u: goto label_24a224;
        case 0x24a228u: goto label_24a228;
        case 0x24a22cu: goto label_24a22c;
        case 0x24a230u: goto label_24a230;
        case 0x24a234u: goto label_24a234;
        case 0x24a238u: goto label_24a238;
        case 0x24a23cu: goto label_24a23c;
        case 0x24a240u: goto label_24a240;
        case 0x24a244u: goto label_24a244;
        case 0x24a248u: goto label_24a248;
        case 0x24a24cu: goto label_24a24c;
        case 0x24a250u: goto label_24a250;
        case 0x24a254u: goto label_24a254;
        case 0x24a258u: goto label_24a258;
        case 0x24a25cu: goto label_24a25c;
        case 0x24a260u: goto label_24a260;
        case 0x24a264u: goto label_24a264;
        default: break;
    }

    ctx->pc = 0x24a160u;

label_24a160:
    // 0x24a160: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x24a160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_24a164:
    // 0x24a164: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x24a164u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
label_24a168:
    // 0x24a168: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x24a168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_24a16c:
    // 0x24a16c: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x24a16cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_24a170:
    // 0x24a170: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x24a170u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_24a174:
    // 0x24a174: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x24a174u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_24a178:
    // 0x24a178: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x24a178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_24a17c:
    // 0x24a17c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x24a17cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_24a180:
    // 0x24a180: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x24a180u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_24a184:
    // 0x24a184: 0x24530fc8  addiu       $s3, $v0, 0xFC8
    ctx->pc = 0x24a184u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4040));
label_24a188:
    // 0x24a188: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x24a188u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_24a18c:
    // 0x24a18c: 0x8e620108  lw          $v0, 0x108($s3)
    ctx->pc = 0x24a18cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 264)));
label_24a190:
    // 0x24a190: 0x40f809  jalr        $v0
label_24a194:
    if (ctx->pc == 0x24A194u) {
        ctx->pc = 0x24A194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A190u;
        // 0x24a194: 0x3c050003  lui         $a1, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A198u;
        goto label_24a198;
    }
    ctx->pc = 0x24A190u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x24A198u);
        ctx->pc = 0x24A194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A190u;
        // 0x24a194: 0x3c050003  lui         $a1, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24A190u, 0x24A198u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24A198u;
label_24a198:
    // 0x24a198: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x24a198u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_24a19c:
    // 0x24a19c: 0x5600000c  bnel        $s0, $zero, . + 4 + (0xC << 2)
label_24a1a0:
    if (ctx->pc == 0x24A1A0u) {
        ctx->pc = 0x24A1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A19Cu;
        // 0x24a1a0: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A1A4u;
        goto label_24a1a4;
    }
    ctx->pc = 0x24A19Cu;
    {
        const bool branch_taken_0x24a19c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x24a19c) {
            ctx->pc = 0x24A1A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24A19Cu;
            // 0x24a1a0: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24A1D0u;
            goto label_24a1d0;
        }
    }
    ctx->pc = 0x24A1A4u;
label_24a1a4:
    // 0x24a1a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24a1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24a1a8:
    // 0x24a1a8: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x24a1a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_24a1ac:
    // 0x24a1ac: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x24a1acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_24a1b0:
    // 0x24a1b0: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x24a1b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_24a1b4:
    // 0x24a1b4: 0xc092848  jal         func_24A120
label_24a1b8:
    if (ctx->pc == 0x24A1B8u) {
        ctx->pc = 0x24A1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A1B4u;
        // 0x24a1b8: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A1BCu;
        goto label_24a1bc;
    }
    ctx->pc = 0x24A1B4u;
    SET_GPR_U32(ctx, 31, 0x24A1BCu);
    ctx->pc = 0x24A1B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A1B4u;
    // 0x24a1b8: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x24A1B4u, 0x24A1BCu)) {
        return;
    }
    ctx->pc = 0x24A1BCu;
label_24a1bc:
    // 0x24a1bc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x24a1bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_24a1c0:
    // 0x24a1c0: 0xc09281a  jal         func_24A068
label_24a1c4:
    if (ctx->pc == 0x24A1C4u) {
        ctx->pc = 0x24A1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A1C0u;
        // 0x24a1c4: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A1C8u;
        goto label_24a1c8;
    }
    ctx->pc = 0x24A1C0u;
    SET_GPR_U32(ctx, 31, 0x24A1C8u);
    ctx->pc = 0x24A1C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A1C0u;
    // 0x24a1c4: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A068u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A068u, 0x24A1C0u, 0x24A1C8u)) {
        return;
    }
    ctx->pc = 0x24A1C8u;
label_24a1c8:
    // 0x24a1c8: 0x1000001f  b           . + 4 + (0x1F << 2)
label_24a1cc:
    if (ctx->pc == 0x24A1CCu) {
        ctx->pc = 0x24A1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A1C8u;
        // 0x24a1cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A1D0u;
        goto label_24a1d0;
    }
    ctx->pc = 0x24A1C8u;
    {
        const bool branch_taken_0x24a1c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A1C8u;
        // 0x24a1cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a1c8) {
            ctx->pc = 0x24A248u;
            goto label_24a248;
        }
    }
    ctx->pc = 0x24A1D0u;
label_24a1d0:
    // 0x24a1d0: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x24a1d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_24a1d4:
    // 0x24a1d4: 0x2240018  mult        $zero, $s1, $a0
    ctx->pc = 0x24a1d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_24a1d8:
    // 0x24a1d8: 0xae040008  sw          $a0, 0x8($s0)
    ctx->pc = 0x24a1d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 4));
label_24a1dc:
    // 0x24a1dc: 0xae11000c  sw          $s1, 0xC($s0)
    ctx->pc = 0x24a1dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 17));
label_24a1e0:
    // 0x24a1e0: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x24a1e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
label_24a1e4:
    // 0x24a1e4: 0x8e620108  lw          $v0, 0x108($s3)
    ctx->pc = 0x24a1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 264)));
label_24a1e8:
    // 0x24a1e8: 0x2012  mflo        $a0
    ctx->pc = 0x24a1e8u;
    SET_GPR_U64(ctx, 4, ctx->lo);
label_24a1ec:
    // 0x24a1ec: 0x40f809  jalr        $v0
label_24a1f0:
    if (ctx->pc == 0x24A1F0u) {
        ctx->pc = 0x24A1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A1ECu;
        // 0x24a1f0: 0x2452825  or          $a1, $s2, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A1F4u;
        goto label_24a1f4;
    }
    ctx->pc = 0x24A1ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x24A1F4u);
        ctx->pc = 0x24A1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A1ECu;
        // 0x24a1f0: 0x2452825  or          $a1, $s2, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24A1ECu, 0x24A1F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24A1F4u;
label_24a1f4:
    // 0x24a1f4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_24a1f8:
    if (ctx->pc == 0x24A1F8u) {
        ctx->pc = 0x24A1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A1F4u;
        // 0x24a1f8: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A1FCu;
        goto label_24a1fc;
    }
    ctx->pc = 0x24A1F4u;
    {
        const bool branch_taken_0x24a1f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A1F4u;
        // 0x24a1f8: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a1f4) {
            ctx->pc = 0x24A208u;
            goto label_24a208;
        }
    }
    ctx->pc = 0x24A1FCu;
label_24a1fc:
    // 0x24a1fc: 0x10000012  b           . + 4 + (0x12 << 2)
label_24a200:
    if (ctx->pc == 0x24A200u) {
        ctx->pc = 0x24A200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A1FCu;
        // 0x24a200: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A204u;
        goto label_24a204;
    }
    ctx->pc = 0x24A1FCu;
    {
        const bool branch_taken_0x24a1fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A1FCu;
        // 0x24a200: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a1fc) {
            ctx->pc = 0x24A248u;
            goto label_24a248;
        }
    }
    ctx->pc = 0x24A204u;
label_24a204:
    // 0x24a204: 0x0  nop
    ctx->pc = 0x24a204u;
    // NOP
label_24a208:
    // 0x24a208: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24a208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24a20c:
    // 0x24a20c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x24a20cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_24a210:
    // 0x24a210: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x24a210u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_24a214:
    // 0x24a214: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x24a214u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_24a218:
    // 0x24a218: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x24a218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_24a21c:
    // 0x24a21c: 0x450018  mult        $zero, $v0, $a1
    ctx->pc = 0x24a21cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_24a220:
    // 0x24a220: 0x2812  mflo        $a1
    ctx->pc = 0x24a220u;
    SET_GPR_U64(ctx, 5, ctx->lo);
label_24a224:
    // 0x24a224: 0xc092848  jal         func_24A120
label_24a228:
    if (ctx->pc == 0x24A228u) {
        ctx->pc = 0x24A228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A224u;
        // 0x24a228: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A22Cu;
        goto label_24a22c;
    }
    ctx->pc = 0x24A224u;
    SET_GPR_U32(ctx, 31, 0x24A22Cu);
    ctx->pc = 0x24A228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A224u;
    // 0x24a228: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x24A224u, 0x24A22Cu)) {
        return;
    }
    ctx->pc = 0x24A22Cu;
label_24a22c:
    // 0x24a22c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x24a22cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_24a230:
    // 0x24a230: 0xc09281a  jal         func_24A068
label_24a234:
    if (ctx->pc == 0x24A234u) {
        ctx->pc = 0x24A234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A230u;
        // 0x24a234: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A238u;
        goto label_24a238;
    }
    ctx->pc = 0x24A230u;
    SET_GPR_U32(ctx, 31, 0x24A238u);
    ctx->pc = 0x24A234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A230u;
    // 0x24a234: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A068u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A068u, 0x24A230u, 0x24A238u)) {
        return;
    }
    ctx->pc = 0x24A238u;
label_24a238:
    // 0x24a238: 0x8e63010c  lw          $v1, 0x10C($s3)
    ctx->pc = 0x24a238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 268)));
label_24a23c:
    // 0x24a23c: 0x60f809  jalr        $v1
label_24a240:
    if (ctx->pc == 0x24A240u) {
        ctx->pc = 0x24A240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A23Cu;
        // 0x24a240: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A244u;
        goto label_24a244;
    }
    ctx->pc = 0x24A23Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x24A244u);
        ctx->pc = 0x24A240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A23Cu;
        // 0x24a240: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24A23Cu, 0x24A244u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24A244u;
label_24a244:
    // 0x24a244: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x24a244u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24a248:
    // 0x24a248: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x24a248u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_24a24c:
    // 0x24a24c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x24a24cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_24a250:
    // 0x24a250: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x24a250u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_24a254:
    // 0x24a254: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x24a254u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_24a258:
    // 0x24a258: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x24a258u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_24a25c:
    // 0x24a25c: 0x3e00008  jr          $ra
label_24a260:
    if (ctx->pc == 0x24A260u) {
        ctx->pc = 0x24A260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A25Cu;
        // 0x24a260: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A264u;
        goto label_24a264;
    }
    ctx->pc = 0x24A25Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24A260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A25Cu;
        // 0x24a260: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24A25Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24A264u;
label_24a264:
    // 0x24a264: 0x0  nop
    ctx->pc = 0x24a264u;
    // NOP
    ctx->pc = 0x24a268u;
}
