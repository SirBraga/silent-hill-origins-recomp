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

// Function: sub_00286208
// Address: 0x286208 - 0x2863b0
void sub_00286208_0x286208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00286208_0x286208");
#endif

    switch (ctx->pc) {
        case 0x286208u: goto label_286208;
        case 0x28620cu: goto label_28620c;
        case 0x286210u: goto label_286210;
        case 0x286214u: goto label_286214;
        case 0x286218u: goto label_286218;
        case 0x28621cu: goto label_28621c;
        case 0x286220u: goto label_286220;
        case 0x286224u: goto label_286224;
        case 0x286228u: goto label_286228;
        case 0x28622cu: goto label_28622c;
        case 0x286230u: goto label_286230;
        case 0x286234u: goto label_286234;
        case 0x286238u: goto label_286238;
        case 0x28623cu: goto label_28623c;
        case 0x286240u: goto label_286240;
        case 0x286244u: goto label_286244;
        case 0x286248u: goto label_286248;
        case 0x28624cu: goto label_28624c;
        case 0x286250u: goto label_286250;
        case 0x286254u: goto label_286254;
        case 0x286258u: goto label_286258;
        case 0x28625cu: goto label_28625c;
        case 0x286260u: goto label_286260;
        case 0x286264u: goto label_286264;
        case 0x286268u: goto label_286268;
        case 0x28626cu: goto label_28626c;
        case 0x286270u: goto label_286270;
        case 0x286274u: goto label_286274;
        case 0x286278u: goto label_286278;
        case 0x28627cu: goto label_28627c;
        case 0x286280u: goto label_286280;
        case 0x286284u: goto label_286284;
        case 0x286288u: goto label_286288;
        case 0x28628cu: goto label_28628c;
        case 0x286290u: goto label_286290;
        case 0x286294u: goto label_286294;
        case 0x286298u: goto label_286298;
        case 0x28629cu: goto label_28629c;
        case 0x2862a0u: goto label_2862a0;
        case 0x2862a4u: goto label_2862a4;
        case 0x2862a8u: goto label_2862a8;
        case 0x2862acu: goto label_2862ac;
        case 0x2862b0u: goto label_2862b0;
        case 0x2862b4u: goto label_2862b4;
        case 0x2862b8u: goto label_2862b8;
        case 0x2862bcu: goto label_2862bc;
        case 0x2862c0u: goto label_2862c0;
        case 0x2862c4u: goto label_2862c4;
        case 0x2862c8u: goto label_2862c8;
        case 0x2862ccu: goto label_2862cc;
        case 0x2862d0u: goto label_2862d0;
        case 0x2862d4u: goto label_2862d4;
        case 0x2862d8u: goto label_2862d8;
        case 0x2862dcu: goto label_2862dc;
        case 0x2862e0u: goto label_2862e0;
        case 0x2862e4u: goto label_2862e4;
        case 0x2862e8u: goto label_2862e8;
        case 0x2862ecu: goto label_2862ec;
        case 0x2862f0u: goto label_2862f0;
        case 0x2862f4u: goto label_2862f4;
        case 0x2862f8u: goto label_2862f8;
        case 0x2862fcu: goto label_2862fc;
        case 0x286300u: goto label_286300;
        case 0x286304u: goto label_286304;
        case 0x286308u: goto label_286308;
        case 0x28630cu: goto label_28630c;
        case 0x286310u: goto label_286310;
        case 0x286314u: goto label_286314;
        case 0x286318u: goto label_286318;
        case 0x28631cu: goto label_28631c;
        case 0x286320u: goto label_286320;
        case 0x286324u: goto label_286324;
        case 0x286328u: goto label_286328;
        case 0x28632cu: goto label_28632c;
        case 0x286330u: goto label_286330;
        case 0x286334u: goto label_286334;
        case 0x286338u: goto label_286338;
        case 0x28633cu: goto label_28633c;
        case 0x286340u: goto label_286340;
        case 0x286344u: goto label_286344;
        case 0x286348u: goto label_286348;
        case 0x28634cu: goto label_28634c;
        case 0x286350u: goto label_286350;
        case 0x286354u: goto label_286354;
        case 0x286358u: goto label_286358;
        case 0x28635cu: goto label_28635c;
        case 0x286360u: goto label_286360;
        case 0x286364u: goto label_286364;
        case 0x286368u: goto label_286368;
        case 0x28636cu: goto label_28636c;
        case 0x286370u: goto label_286370;
        case 0x286374u: goto label_286374;
        case 0x286378u: goto label_286378;
        case 0x28637cu: goto label_28637c;
        case 0x286380u: goto label_286380;
        case 0x286384u: goto label_286384;
        case 0x286388u: goto label_286388;
        case 0x28638cu: goto label_28638c;
        case 0x286390u: goto label_286390;
        case 0x286394u: goto label_286394;
        case 0x286398u: goto label_286398;
        case 0x28639cu: goto label_28639c;
        case 0x2863a0u: goto label_2863a0;
        case 0x2863a4u: goto label_2863a4;
        case 0x2863a8u: goto label_2863a8;
        case 0x2863acu: goto label_2863ac;
        default: break;
    }

    ctx->pc = 0x286208u;

label_286208:
    // 0x286208: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x286208u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_28620c:
    // 0x28620c: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x28620cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_286210:
    // 0x286210: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x286210u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_286214:
    // 0x286214: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x286214u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_286218:
    // 0x286218: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x286218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_28621c:
    // 0x28621c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x28621cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_286220:
    // 0x286220: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x286220u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_286224:
    // 0x286224: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x286224u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_286228:
    // 0x286228: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x286228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
label_28622c:
    // 0x28622c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28622cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_286230:
    // 0x286230: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x286230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_286234:
    // 0x286234: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x286234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_286238:
    // 0x286238: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x286238u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_28623c:
    // 0x28623c: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x28623cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
label_286240:
    // 0x286240: 0x10800015  beqz        $a0, . + 4 + (0x15 << 2)
label_286244:
    if (ctx->pc == 0x286244u) {
        ctx->pc = 0x286244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286240u;
        // 0x286244: 0xae630008  sw          $v1, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x286248u;
        goto label_286248;
    }
    ctx->pc = 0x286240u;
    {
        const bool branch_taken_0x286240 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x286244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286240u;
        // 0x286244: 0xae630008  sw          $v1, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286240) {
            ctx->pc = 0x286298u;
            goto label_286298;
        }
    }
    ctx->pc = 0x286248u;
label_286248:
    // 0x286248: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x286248u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
label_28624c:
    // 0x28624c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x28624cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_286250:
    // 0x286250: 0x10800011  beqz        $a0, . + 4 + (0x11 << 2)
label_286254:
    if (ctx->pc == 0x286254u) {
        ctx->pc = 0x286254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286250u;
        // 0x286254: 0x3c020073  lui         $v0, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x286258u;
        goto label_286258;
    }
    ctx->pc = 0x286250u;
    {
        const bool branch_taken_0x286250 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x286254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286250u;
        // 0x286254: 0x3c020073  lui         $v0, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286250) {
            ctx->pc = 0x286298u;
            goto label_286298;
        }
    }
    ctx->pc = 0x286258u;
label_286258:
    // 0x286258: 0x24500fc8  addiu       $s0, $v0, 0xFC8
    ctx->pc = 0x286258u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4040));
label_28625c:
    // 0x28625c: 0x8e0200f4  lw          $v0, 0xF4($s0)
    ctx->pc = 0x28625cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 244)));
label_286260:
    // 0x286260: 0x40f809  jalr        $v0
label_286264:
    if (ctx->pc == 0x286264u) {
        ctx->pc = 0x286268u;
        goto label_286268;
    }
    ctx->pc = 0x286260u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x286268u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x286260u, 0x286268u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x286268u;
label_286268:
    // 0x286268: 0x8e030108  lw          $v1, 0x108($s0)
    ctx->pc = 0x286268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
label_28626c:
    // 0x28626c: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x28626cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_286270:
    // 0x286270: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x286270u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_286274:
    // 0x286274: 0x60f809  jalr        $v1
label_286278:
    if (ctx->pc == 0x286278u) {
        ctx->pc = 0x286278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286274u;
        // 0x286278: 0x34a50002  ori         $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        ctx->pc = 0x28627Cu;
        goto label_28627c;
    }
    ctx->pc = 0x286274u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x28627Cu);
        ctx->pc = 0x286278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286274u;
        // 0x286278: 0x34a50002  ori         $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x286274u, 0x28627Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28627Cu;
label_28627c:
    // 0x28627c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x28627cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_286280:
    // 0x286280: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_286284:
    if (ctx->pc == 0x286284u) {
        ctx->pc = 0x286284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286280u;
        // 0x286284: 0xae640000  sw          $a0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x286288u;
        goto label_286288;
    }
    ctx->pc = 0x286280u;
    {
        const bool branch_taken_0x286280 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x286284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286280u;
        // 0x286284: 0xae640000  sw          $a0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286280) {
            ctx->pc = 0x286298u;
            goto label_286298;
        }
    }
    ctx->pc = 0x286288u;
label_286288:
    // 0x286288: 0x8e0200cc  lw          $v0, 0xCC($s0)
    ctx->pc = 0x286288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 204)));
label_28628c:
    // 0x28628c: 0x40f809  jalr        $v0
label_286290:
    if (ctx->pc == 0x286290u) {
        ctx->pc = 0x286290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28628Cu;
        // 0x286290: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x286294u;
        goto label_286294;
    }
    ctx->pc = 0x28628Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x286294u);
        ctx->pc = 0x286290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28628Cu;
        // 0x286290: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28628Cu, 0x286294u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x286294u;
label_286294:
    // 0x286294: 0x0  nop
    ctx->pc = 0x286294u;
    // NOP
label_286298:
    // 0x286298: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x286298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_28629c:
    // 0x28629c: 0x1040003a  beqz        $v0, . + 4 + (0x3A << 2)
label_2862a0:
    if (ctx->pc == 0x2862A0u) {
        ctx->pc = 0x2862A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28629Cu;
        // 0x2862a0: 0x3c100073  lui         $s0, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2862A4u;
        goto label_2862a4;
    }
    ctx->pc = 0x28629Cu;
    {
        const bool branch_taken_0x28629c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2862A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28629Cu;
        // 0x2862a0: 0x3c100073  lui         $s0, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28629c) {
            ctx->pc = 0x286388u;
            goto label_286388;
        }
    }
    ctx->pc = 0x2862A4u;
label_2862a4:
    // 0x2862a4: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x2862a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_2862a8:
    // 0x2862a8: 0xc0a1c38  jal         func_2870E0
label_2862ac:
    if (ctx->pc == 0x2862ACu) {
        ctx->pc = 0x2862ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2862A8u;
        // 0x2862ac: 0x200a82d  daddu       $s5, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2862B0u;
        goto label_2862b0;
    }
    ctx->pc = 0x2862A8u;
    SET_GPR_U32(ctx, 31, 0x2862B0u);
    ctx->pc = 0x2862ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2862A8u;
    // 0x2862ac: 0x200a82d  daddu       $s5, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2870E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2870E0u, 0x2862A8u, 0x2862B0u)) {
        return;
    }
    ctx->pc = 0x2862B0u;
label_2862b0:
    // 0x2862b0: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x2862b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_2862b4:
    // 0x2862b4: 0x26100fc8  addiu       $s0, $s0, 0xFC8
    ctx->pc = 0x2862b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4040));
label_2862b8:
    // 0x2862b8: 0x8e060108  lw          $a2, 0x108($s0)
    ctx->pc = 0x2862b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
label_2862bc:
    // 0x2862bc: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x2862bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_2862c0:
    // 0x2862c0: 0x628018  mult        $s0, $v1, $v0
    ctx->pc = 0x2862c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
label_2862c4:
    // 0x2862c4: 0x34a5011f  ori         $a1, $a1, 0x11F
    ctx->pc = 0x2862c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)287);
label_2862c8:
    // 0x2862c8: 0xc0f809  jalr        $a2
label_2862cc:
    if (ctx->pc == 0x2862CCu) {
        ctx->pc = 0x2862CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2862C8u;
        // 0x2862cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2862D0u;
        goto label_2862d0;
    }
    ctx->pc = 0x2862C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x2862D0u);
        ctx->pc = 0x2862CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2862C8u;
        // 0x2862cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2862C8u, 0x2862D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2862D0u;
label_2862d0:
    // 0x2862d0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2862d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2862d4:
    // 0x2862d4: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x2862d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_2862d8:
    // 0x2862d8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2862d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2862dc:
    // 0x2862dc: 0x14620026  bne         $v1, $v0, . + 4 + (0x26 << 2)
label_2862e0:
    if (ctx->pc == 0x2862E0u) {
        ctx->pc = 0x2862E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2862DCu;
        // 0x2862e0: 0xae66000c  sw          $a2, 0xC($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2862E4u;
        goto label_2862e4;
    }
    ctx->pc = 0x2862DCu;
    {
        const bool branch_taken_0x2862dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2862E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2862DCu;
        // 0x2862e0: 0xae66000c  sw          $a2, 0xC($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2862dc) {
            ctx->pc = 0x286378u;
            goto label_286378;
        }
    }
    ctx->pc = 0x2862E4u;
label_2862e4:
    // 0x2862e4: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x2862e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_2862e8:
    // 0x2862e8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2862e8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2862ec:
    // 0x2862ec: 0x18400026  blez        $v0, . + 4 + (0x26 << 2)
label_2862f0:
    if (ctx->pc == 0x2862F0u) {
        ctx->pc = 0x2862F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2862ECu;
        // 0x2862f0: 0x8e24000c  lw          $a0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2862F4u;
        goto label_2862f4;
    }
    ctx->pc = 0x2862ECu;
    {
        const bool branch_taken_0x2862ec = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x2862F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2862ECu;
        // 0x2862f0: 0x8e24000c  lw          $a0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2862ec) {
            ctx->pc = 0x286388u;
            goto label_286388;
        }
    }
    ctx->pc = 0x2862F4u;
label_2862f4:
    // 0x2862f4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2862f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2862f8:
    // 0x2862f8: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2862f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2862fc:
    // 0x2862fc: 0x0  nop
    ctx->pc = 0x2862fcu;
    // NOP
label_286300:
    // 0x286300: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x286300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_286304:
    // 0x286304: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_286308:
    if (ctx->pc == 0x286308u) {
        ctx->pc = 0x286308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286304u;
        // 0x286308: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28630Cu;
        goto label_28630c;
    }
    ctx->pc = 0x286304u;
    {
        const bool branch_taken_0x286304 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x286308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286304u;
        // 0x286308: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286304) {
            ctx->pc = 0x286314u;
            goto label_286314;
        }
    }
    ctx->pc = 0x28630Cu;
label_28630c:
    // 0x28630c: 0x10000013  b           . + 4 + (0x13 << 2)
label_286310:
    if (ctx->pc == 0x286310u) {
        ctx->pc = 0x286310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28630Cu;
        // 0x286310: 0x8e620008  lw          $v0, 0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x286314u;
        goto label_286314;
    }
    ctx->pc = 0x28630Cu;
    {
        const bool branch_taken_0x28630c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28630Cu;
        // 0x286310: 0x8e620008  lw          $v0, 0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28630c) {
            ctx->pc = 0x28635Cu;
            goto label_28635c;
        }
    }
    ctx->pc = 0x286314u;
label_286314:
    // 0x286314: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x286314u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_286318:
    // 0x286318: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
label_28631c:
    if (ctx->pc == 0x28631Cu) {
        ctx->pc = 0x28631Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286318u;
        // 0x28631c: 0x26b00fc8  addiu       $s0, $s5, 0xFC8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 4040));
        ctx->in_delay_slot = false;
        ctx->pc = 0x286320u;
        goto label_286320;
    }
    ctx->pc = 0x286318u;
    {
        const bool branch_taken_0x286318 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x28631Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286318u;
        // 0x28631c: 0x26b00fc8  addiu       $s0, $s5, 0xFC8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 4040));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286318) {
            ctx->pc = 0x286358u;
            goto label_286358;
        }
    }
    ctx->pc = 0x286320u;
label_286320:
    // 0x286320: 0x8e0200f4  lw          $v0, 0xF4($s0)
    ctx->pc = 0x286320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 244)));
label_286324:
    // 0x286324: 0x40f809  jalr        $v0
label_286328:
    if (ctx->pc == 0x286328u) {
        ctx->pc = 0x28632Cu;
        goto label_28632c;
    }
    ctx->pc = 0x286324u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x28632Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x286324u, 0x28632Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28632Cu;
label_28632c:
    // 0x28632c: 0x8e030108  lw          $v1, 0x108($s0)
    ctx->pc = 0x28632cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
label_286330:
    // 0x286330: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x286330u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_286334:
    // 0x286334: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x286334u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_286338:
    // 0x286338: 0x60f809  jalr        $v1
label_28633c:
    if (ctx->pc == 0x28633Cu) {
        ctx->pc = 0x28633Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286338u;
        // 0x28633c: 0x34a50002  ori         $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        ctx->pc = 0x286340u;
        goto label_286340;
    }
    ctx->pc = 0x286338u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x286340u);
        ctx->pc = 0x28633Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286338u;
        // 0x28633c: 0x34a50002  ori         $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x286338u, 0x286340u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x286340u;
label_286340:
    // 0x286340: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x286340u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_286344:
    // 0x286344: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_286348:
    if (ctx->pc == 0x286348u) {
        ctx->pc = 0x286348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286344u;
        // 0x286348: 0xae240000  sw          $a0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28634Cu;
        goto label_28634c;
    }
    ctx->pc = 0x286344u;
    {
        const bool branch_taken_0x286344 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x286348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286344u;
        // 0x286348: 0xae240000  sw          $a0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286344) {
            ctx->pc = 0x286358u;
            goto label_286358;
        }
    }
    ctx->pc = 0x28634Cu;
label_28634c:
    // 0x28634c: 0x8e0200cc  lw          $v0, 0xCC($s0)
    ctx->pc = 0x28634cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 204)));
label_286350:
    // 0x286350: 0x40f809  jalr        $v0
label_286354:
    if (ctx->pc == 0x286354u) {
        ctx->pc = 0x286354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286350u;
        // 0x286354: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x286358u;
        goto label_286358;
    }
    ctx->pc = 0x286350u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x286358u);
        ctx->pc = 0x286354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286350u;
        // 0x286354: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x286350u, 0x286358u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x286358u;
label_286358:
    // 0x286358: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x286358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_28635c:
    // 0x28635c: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x28635cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_286360:
    // 0x286360: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x286360u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_286364:
    // 0x286364: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x286364u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_286368:
    // 0x286368: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
label_28636c:
    if (ctx->pc == 0x28636Cu) {
        ctx->pc = 0x28636Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286368u;
        // 0x28636c: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x286370u;
        goto label_286370;
    }
    ctx->pc = 0x286368u;
    {
        const bool branch_taken_0x286368 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28636Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286368u;
        // 0x28636c: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286368) {
            ctx->pc = 0x286300u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_286300;
        }
    }
    ctx->pc = 0x286370u;
label_286370:
    // 0x286370: 0x10000006  b           . + 4 + (0x6 << 2)
label_286374:
    if (ctx->pc == 0x286374u) {
        ctx->pc = 0x286374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286370u;
        // 0x286374: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x286378u;
        goto label_286378;
    }
    ctx->pc = 0x286370u;
    {
        const bool branch_taken_0x286370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286370u;
        // 0x286374: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286370) {
            ctx->pc = 0x28638Cu;
            goto label_28638c;
        }
    }
    ctx->pc = 0x286378u;
label_286378:
    // 0x286378: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x286378u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_28637c:
    // 0x28637c: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x28637cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_286380:
    // 0x286380: 0xc075fdc  jal         func_1D7F70
label_286384:
    if (ctx->pc == 0x286384u) {
        ctx->pc = 0x286384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286380u;
        // 0x286384: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x286388u;
        goto label_286388;
    }
    ctx->pc = 0x286380u;
    SET_GPR_U32(ctx, 31, 0x286388u);
    ctx->pc = 0x286384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286380u;
    // 0x286384: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7F70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D7F70u, 0x286380u, 0x286388u)) {
        return;
    }
    ctx->pc = 0x286388u;
label_286388:
    // 0x286388: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x286388u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_28638c:
    // 0x28638c: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x28638cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_286390:
    // 0x286390: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x286390u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_286394:
    // 0x286394: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x286394u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_286398:
    // 0x286398: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x286398u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_28639c:
    // 0x28639c: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x28639cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2863a0:
    // 0x2863a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2863a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2863a4:
    // 0x2863a4: 0x3e00008  jr          $ra
label_2863a8:
    if (ctx->pc == 0x2863A8u) {
        ctx->pc = 0x2863A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2863A4u;
        // 0x2863a8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2863ACu;
        goto label_2863ac;
    }
    ctx->pc = 0x2863A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2863A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2863A4u;
        // 0x2863a8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2863A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2863ACu;
label_2863ac:
    // 0x2863ac: 0x0  nop
    ctx->pc = 0x2863acu;
    // NOP
    ctx->pc = 0x2863b0u;
}
