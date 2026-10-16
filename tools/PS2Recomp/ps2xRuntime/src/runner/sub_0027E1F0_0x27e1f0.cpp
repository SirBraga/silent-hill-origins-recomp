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

// Function: sub_0027E1F0
// Address: 0x27e1f0 - 0x27e2e8
void sub_0027E1F0_0x27e1f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027E1F0_0x27e1f0");
#endif

    switch (ctx->pc) {
        case 0x27e1f0u: goto label_27e1f0;
        case 0x27e1f4u: goto label_27e1f4;
        case 0x27e1f8u: goto label_27e1f8;
        case 0x27e1fcu: goto label_27e1fc;
        case 0x27e200u: goto label_27e200;
        case 0x27e204u: goto label_27e204;
        case 0x27e208u: goto label_27e208;
        case 0x27e20cu: goto label_27e20c;
        case 0x27e210u: goto label_27e210;
        case 0x27e214u: goto label_27e214;
        case 0x27e218u: goto label_27e218;
        case 0x27e21cu: goto label_27e21c;
        case 0x27e220u: goto label_27e220;
        case 0x27e224u: goto label_27e224;
        case 0x27e228u: goto label_27e228;
        case 0x27e22cu: goto label_27e22c;
        case 0x27e230u: goto label_27e230;
        case 0x27e234u: goto label_27e234;
        case 0x27e238u: goto label_27e238;
        case 0x27e23cu: goto label_27e23c;
        case 0x27e240u: goto label_27e240;
        case 0x27e244u: goto label_27e244;
        case 0x27e248u: goto label_27e248;
        case 0x27e24cu: goto label_27e24c;
        case 0x27e250u: goto label_27e250;
        case 0x27e254u: goto label_27e254;
        case 0x27e258u: goto label_27e258;
        case 0x27e25cu: goto label_27e25c;
        case 0x27e260u: goto label_27e260;
        case 0x27e264u: goto label_27e264;
        case 0x27e268u: goto label_27e268;
        case 0x27e26cu: goto label_27e26c;
        case 0x27e270u: goto label_27e270;
        case 0x27e274u: goto label_27e274;
        case 0x27e278u: goto label_27e278;
        case 0x27e27cu: goto label_27e27c;
        case 0x27e280u: goto label_27e280;
        case 0x27e284u: goto label_27e284;
        case 0x27e288u: goto label_27e288;
        case 0x27e28cu: goto label_27e28c;
        case 0x27e290u: goto label_27e290;
        case 0x27e294u: goto label_27e294;
        case 0x27e298u: goto label_27e298;
        case 0x27e29cu: goto label_27e29c;
        case 0x27e2a0u: goto label_27e2a0;
        case 0x27e2a4u: goto label_27e2a4;
        case 0x27e2a8u: goto label_27e2a8;
        case 0x27e2acu: goto label_27e2ac;
        case 0x27e2b0u: goto label_27e2b0;
        case 0x27e2b4u: goto label_27e2b4;
        case 0x27e2b8u: goto label_27e2b8;
        case 0x27e2bcu: goto label_27e2bc;
        case 0x27e2c0u: goto label_27e2c0;
        case 0x27e2c4u: goto label_27e2c4;
        case 0x27e2c8u: goto label_27e2c8;
        case 0x27e2ccu: goto label_27e2cc;
        case 0x27e2d0u: goto label_27e2d0;
        case 0x27e2d4u: goto label_27e2d4;
        case 0x27e2d8u: goto label_27e2d8;
        case 0x27e2dcu: goto label_27e2dc;
        case 0x27e2e0u: goto label_27e2e0;
        case 0x27e2e4u: goto label_27e2e4;
        default: break;
    }

    ctx->pc = 0x27e1f0u;

label_27e1f0:
    // 0x27e1f0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x27e1f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_27e1f4:
    // 0x27e1f4: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x27e1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
label_27e1f8:
    // 0x27e1f8: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x27e1f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_27e1fc:
    // 0x27e1fc: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x27e1fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_27e200:
    // 0x27e200: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x27e200u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_27e204:
    // 0x27e204: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x27e204u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
label_27e208:
    // 0x27e208: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x27e208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
label_27e20c:
    // 0x27e20c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x27e20cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_27e210:
    // 0x27e210: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x27e210u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
label_27e214:
    // 0x27e214: 0x24550fc8  addiu       $s5, $v0, 0xFC8
    ctx->pc = 0x27e214u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4040));
label_27e218:
    // 0x27e218: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x27e218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_27e21c:
    // 0x27e21c: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x27e21cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_27e220:
    // 0x27e220: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x27e220u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_27e224:
    // 0x27e224: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x27e224u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_27e228:
    // 0x27e228: 0x8f9087f0  lw          $s0, -0x7810($gp)
    ctx->pc = 0x27e228u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936560)));
label_27e22c:
    // 0x27e22c: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x27e22cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_27e230:
    // 0x27e230: 0x8ea20108  lw          $v0, 0x108($s5)
    ctx->pc = 0x27e230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 264)));
label_27e234:
    // 0x27e234: 0x34a50122  ori         $a1, $a1, 0x122
    ctx->pc = 0x27e234u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)290);
label_27e238:
    // 0x27e238: 0x40f809  jalr        $v0
label_27e23c:
    if (ctx->pc == 0x27E23Cu) {
        ctx->pc = 0x27E23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E238u;
        // 0x27e23c: 0x2d08021  addu        $s0, $s6, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27E240u;
        goto label_27e240;
    }
    ctx->pc = 0x27E238u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x27E240u);
        ctx->pc = 0x27E23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E238u;
        // 0x27e23c: 0x2d08021  addu        $s0, $s6, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27E238u, 0x27E240u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x27E240u;
label_27e240:
    // 0x27e240: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x27e240u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27e244:
    // 0x27e244: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x27e244u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_27e248:
    // 0x27e248: 0x1220001c  beqz        $s1, . + 4 + (0x1C << 2)
label_27e24c:
    if (ctx->pc == 0x27E24Cu) {
        ctx->pc = 0x27E24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E248u;
        // 0x27e24c: 0xae120000  sw          $s2, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27E250u;
        goto label_27e250;
    }
    ctx->pc = 0x27E248u;
    {
        const bool branch_taken_0x27e248 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E248u;
        // 0x27e24c: 0xae120000  sw          $s2, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e248) {
            ctx->pc = 0x27E2BCu;
            goto label_27e2bc;
        }
    }
    ctx->pc = 0x27E250u;
label_27e250:
    // 0x27e250: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27e250u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_27e254:
    // 0x27e254: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x27e254u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27e258:
    // 0x27e258: 0xc0c493d  jal         func_3124F4
label_27e25c:
    if (ctx->pc == 0x27E25Cu) {
        ctx->pc = 0x27E25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E258u;
        // 0x27e25c: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27E260u;
        goto label_27e260;
    }
    ctx->pc = 0x27E258u;
    SET_GPR_U32(ctx, 31, 0x27E260u);
    ctx->pc = 0x27E25Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E258u;
    // 0x27e25c: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x27E258u, 0x27E260u)) {
        return;
    }
    ctx->pc = 0x27E260u;
label_27e260:
    // 0x27e260: 0x24030044  addiu       $v1, $zero, 0x44
    ctx->pc = 0x27e260u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
label_27e264:
    // 0x27e264: 0xae340000  sw          $s4, 0x0($s1)
    ctx->pc = 0x27e264u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 20));
label_27e268:
    // 0x27e268: 0x2839818  mult        $s3, $s4, $v1
    ctx->pc = 0x27e268u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 19, (int32_t)result); }
label_27e26c:
    // 0x27e26c: 0x8ea20108  lw          $v0, 0x108($s5)
    ctx->pc = 0x27e26cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 264)));
label_27e270:
    // 0x27e270: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x27e270u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_27e274:
    // 0x27e274: 0x34a50122  ori         $a1, $a1, 0x122
    ctx->pc = 0x27e274u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)290);
label_27e278:
    // 0x27e278: 0x40f809  jalr        $v0
label_27e27c:
    if (ctx->pc == 0x27E27Cu) {
        ctx->pc = 0x27E27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E278u;
        // 0x27e27c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27E280u;
        goto label_27e280;
    }
    ctx->pc = 0x27E278u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x27E280u);
        ctx->pc = 0x27E27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E278u;
        // 0x27e27c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27E278u, 0x27E280u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x27E280u;
label_27e280:
    // 0x27e280: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x27e280u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27e284:
    // 0x27e284: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
label_27e288:
    if (ctx->pc == 0x27E288u) {
        ctx->pc = 0x27E288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E284u;
        // 0x27e288: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27E28Cu;
        goto label_27e28c;
    }
    ctx->pc = 0x27E284u;
    {
        const bool branch_taken_0x27e284 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E284u;
        // 0x27e288: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e284) {
            ctx->pc = 0x27E2B0u;
            goto label_27e2b0;
        }
    }
    ctx->pc = 0x27E28Cu;
label_27e28c:
    // 0x27e28c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27e28cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27e290:
    // 0x27e290: 0xc0c493d  jal         func_3124F4
label_27e294:
    if (ctx->pc == 0x27E294u) {
        ctx->pc = 0x27E294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E290u;
        // 0x27e294: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27E298u;
        goto label_27e298;
    }
    ctx->pc = 0x27E290u;
    SET_GPR_U32(ctx, 31, 0x27E298u);
    ctx->pc = 0x27E294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E290u;
    // 0x27e294: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x27E290u, 0x27E298u)) {
        return;
    }
    ctx->pc = 0x27E298u;
label_27e298:
    // 0x27e298: 0x141980  sll         $v1, $s4, 6
    ctx->pc = 0x27e298u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 6));
label_27e29c:
    // 0x27e29c: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x27e29cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_27e2a0:
    // 0x27e2a0: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x27e2a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_27e2a4:
    // 0x27e2a4: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x27e2a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
label_27e2a8:
    // 0x27e2a8: 0x10000005  b           . + 4 + (0x5 << 2)
label_27e2ac:
    if (ctx->pc == 0x27E2ACu) {
        ctx->pc = 0x27E2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E2A8u;
        // 0x27e2ac: 0xae230008  sw          $v1, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27E2B0u;
        goto label_27e2b0;
    }
    ctx->pc = 0x27E2A8u;
    {
        const bool branch_taken_0x27e2a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E2A8u;
        // 0x27e2ac: 0xae230008  sw          $v1, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e2a8) {
            ctx->pc = 0x27E2C0u;
            goto label_27e2c0;
        }
    }
    ctx->pc = 0x27E2B0u;
label_27e2b0:
    // 0x27e2b0: 0x8ea2010c  lw          $v0, 0x10C($s5)
    ctx->pc = 0x27e2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 268)));
label_27e2b4:
    // 0x27e2b4: 0x40f809  jalr        $v0
label_27e2b8:
    if (ctx->pc == 0x27E2B8u) {
        ctx->pc = 0x27E2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E2B4u;
        // 0x27e2b8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27E2BCu;
        goto label_27e2bc;
    }
    ctx->pc = 0x27E2B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x27E2BCu);
        ctx->pc = 0x27E2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E2B4u;
        // 0x27e2b8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27E2B4u, 0x27E2BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x27E2BCu;
label_27e2bc:
    // 0x27e2bc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x27e2bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27e2c0:
    // 0x27e2c0: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x27e2c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_27e2c4:
    // 0x27e2c4: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x27e2c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_27e2c8:
    // 0x27e2c8: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x27e2c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_27e2cc:
    // 0x27e2cc: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x27e2ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_27e2d0:
    // 0x27e2d0: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x27e2d0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_27e2d4:
    // 0x27e2d4: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x27e2d4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_27e2d8:
    // 0x27e2d8: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x27e2d8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_27e2dc:
    // 0x27e2dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27e2dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_27e2e0:
    // 0x27e2e0: 0x3e00008  jr          $ra
label_27e2e4:
    if (ctx->pc == 0x27E2E4u) {
        ctx->pc = 0x27E2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E2E0u;
        // 0x27e2e4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27E2E8u;
        goto label_fallthrough_0x27e2e0;
    }
    ctx->pc = 0x27E2E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27E2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E2E0u;
        // 0x27e2e4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27E2E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x27e2e0:
    ctx->pc = 0x27E2E8u;
}
