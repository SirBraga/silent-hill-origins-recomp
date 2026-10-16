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

// Function: sub_0022D1C0
// Address: 0x22d1c0 - 0x22d2a8
void sub_0022D1C0_0x22d1c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022D1C0_0x22d1c0");
#endif

    switch (ctx->pc) {
        case 0x22d1c0u: goto label_22d1c0;
        case 0x22d1c4u: goto label_22d1c4;
        case 0x22d1c8u: goto label_22d1c8;
        case 0x22d1ccu: goto label_22d1cc;
        case 0x22d1d0u: goto label_22d1d0;
        case 0x22d1d4u: goto label_22d1d4;
        case 0x22d1d8u: goto label_22d1d8;
        case 0x22d1dcu: goto label_22d1dc;
        case 0x22d1e0u: goto label_22d1e0;
        case 0x22d1e4u: goto label_22d1e4;
        case 0x22d1e8u: goto label_22d1e8;
        case 0x22d1ecu: goto label_22d1ec;
        case 0x22d1f0u: goto label_22d1f0;
        case 0x22d1f4u: goto label_22d1f4;
        case 0x22d1f8u: goto label_22d1f8;
        case 0x22d1fcu: goto label_22d1fc;
        case 0x22d200u: goto label_22d200;
        case 0x22d204u: goto label_22d204;
        case 0x22d208u: goto label_22d208;
        case 0x22d20cu: goto label_22d20c;
        case 0x22d210u: goto label_22d210;
        case 0x22d214u: goto label_22d214;
        case 0x22d218u: goto label_22d218;
        case 0x22d21cu: goto label_22d21c;
        case 0x22d220u: goto label_22d220;
        case 0x22d224u: goto label_22d224;
        case 0x22d228u: goto label_22d228;
        case 0x22d22cu: goto label_22d22c;
        case 0x22d230u: goto label_22d230;
        case 0x22d234u: goto label_22d234;
        case 0x22d238u: goto label_22d238;
        case 0x22d23cu: goto label_22d23c;
        case 0x22d240u: goto label_22d240;
        case 0x22d244u: goto label_22d244;
        case 0x22d248u: goto label_22d248;
        case 0x22d24cu: goto label_22d24c;
        case 0x22d250u: goto label_22d250;
        case 0x22d254u: goto label_22d254;
        case 0x22d258u: goto label_22d258;
        case 0x22d25cu: goto label_22d25c;
        case 0x22d260u: goto label_22d260;
        case 0x22d264u: goto label_22d264;
        case 0x22d268u: goto label_22d268;
        case 0x22d26cu: goto label_22d26c;
        case 0x22d270u: goto label_22d270;
        case 0x22d274u: goto label_22d274;
        case 0x22d278u: goto label_22d278;
        case 0x22d27cu: goto label_22d27c;
        case 0x22d280u: goto label_22d280;
        case 0x22d284u: goto label_22d284;
        case 0x22d288u: goto label_22d288;
        case 0x22d28cu: goto label_22d28c;
        case 0x22d290u: goto label_22d290;
        case 0x22d294u: goto label_22d294;
        case 0x22d298u: goto label_22d298;
        case 0x22d29cu: goto label_22d29c;
        case 0x22d2a0u: goto label_22d2a0;
        case 0x22d2a4u: goto label_22d2a4;
        default: break;
    }

    ctx->pc = 0x22d1c0u;

label_22d1c0:
    // 0x22d1c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x22d1c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_22d1c4:
    // 0x22d1c4: 0x8f8383f8  lw          $v1, -0x7C08($gp)
    ctx->pc = 0x22d1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935544)));
label_22d1c8:
    // 0x22d1c8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x22d1c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_22d1cc:
    // 0x22d1cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x22d1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22d1d0:
    // 0x22d1d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22d1d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_22d1d4:
    // 0x22d1d4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x22d1d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_22d1d8:
    // 0x22d1d8: 0x625804  sllv        $t3, $v0, $v1
    ctx->pc = 0x22d1d8u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
label_22d1dc:
    // 0x22d1dc: 0x1160001c  beqz        $t3, . + 4 + (0x1C << 2)
label_22d1e0:
    if (ctx->pc == 0x22D1E0u) {
        ctx->pc = 0x22D1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D1DCu;
        // 0x22d1e0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D1E4u;
        goto label_22d1e4;
    }
    ctx->pc = 0x22D1DCu;
    {
        const bool branch_taken_0x22d1dc = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D1DCu;
        // 0x22d1e0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d1dc) {
            ctx->pc = 0x22D250u;
            goto label_22d250;
        }
    }
    ctx->pc = 0x22D1E4u;
label_22d1e4:
    // 0x22d1e4: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x22d1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
label_22d1e8:
    // 0x22d1e8: 0x60502d  daddu       $t2, $v1, $zero
    ctx->pc = 0x22d1e8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_22d1ec:
    // 0x22d1ec: 0x244c2e70  addiu       $t4, $v0, 0x2E70
    ctx->pc = 0x22d1ecu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), 11888));
label_22d1f0:
    // 0x22d1f0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x22d1f0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22d1f4:
    // 0x22d1f4: 0x140282d  daddu       $a1, $t2, $zero
    ctx->pc = 0x22d1f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_22d1f8:
    // 0x22d1f8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x22d1f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22d1fc:
    // 0x22d1fc: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x22d1fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_22d200:
    // 0x22d200: 0x10a0000e  beqz        $a1, . + 4 + (0xE << 2)
label_22d204:
    if (ctx->pc == 0x22D204u) {
        ctx->pc = 0x22D204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D200u;
        // 0x22d204: 0x24c90001  addiu       $t1, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D208u;
        goto label_22d208;
    }
    ctx->pc = 0x22D200u;
    {
        const bool branch_taken_0x22d200 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D200u;
        // 0x22d204: 0x24c90001  addiu       $t1, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d200) {
            ctx->pc = 0x22D23Cu;
            goto label_22d23c;
        }
    }
    ctx->pc = 0x22D208u;
label_22d208:
    // 0x22d208: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x22d208u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22d20c:
    // 0x22d20c: 0x871004  sllv        $v0, $a3, $a0
    ctx->pc = 0x22d20cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 4) & 0x1F));
label_22d210:
    // 0x22d210: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x22d210u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
label_22d214:
    // 0x22d214: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_22d218:
    if (ctx->pc == 0x22D218u) {
        ctx->pc = 0x22D218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D214u;
        // 0x22d218: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D21Cu;
        goto label_22d21c;
    }
    ctx->pc = 0x22D214u;
    {
        const bool branch_taken_0x22d214 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D214u;
        // 0x22d218: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d214) {
            ctx->pc = 0x22D22Cu;
            goto label_22d22c;
        }
    }
    ctx->pc = 0x22D21Cu;
label_22d21c:
    // 0x22d21c: 0xa41023  subu        $v0, $a1, $a0
    ctx->pc = 0x22d21cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_22d220:
    // 0x22d220: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x22d220u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_22d224:
    // 0x22d224: 0x471004  sllv        $v0, $a3, $v0
    ctx->pc = 0x22d224u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
label_22d228:
    // 0x22d228: 0x484025  or          $t0, $v0, $t0
    ctx->pc = 0x22d228u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
label_22d22c:
    // 0x22d22c: 0x140282d  daddu       $a1, $t2, $zero
    ctx->pc = 0x22d22cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_22d230:
    // 0x22d230: 0x85102b  sltu        $v0, $a0, $a1
    ctx->pc = 0x22d230u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_22d234:
    // 0x22d234: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_22d238:
    if (ctx->pc == 0x22D238u) {
        ctx->pc = 0x22D238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D234u;
        // 0x22d238: 0x871004  sllv        $v0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 4) & 0x1F));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D23Cu;
        goto label_22d23c;
    }
    ctx->pc = 0x22D234u;
    {
        const bool branch_taken_0x22d234 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22D238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D234u;
        // 0x22d238: 0x871004  sllv        $v0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 4) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d234) {
            ctx->pc = 0x22D210u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22d210;
        }
    }
    ctx->pc = 0x22D23Cu;
label_22d23c:
    // 0x22d23c: 0x6c1821  addu        $v1, $v1, $t4
    ctx->pc = 0x22d23cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
label_22d240:
    // 0x22d240: 0x120302d  daddu       $a2, $t1, $zero
    ctx->pc = 0x22d240u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_22d244:
    // 0x22d244: 0xcb102b  sltu        $v0, $a2, $t3
    ctx->pc = 0x22d244u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
label_22d248:
    // 0x22d248: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
label_22d24c:
    if (ctx->pc == 0x22D24Cu) {
        ctx->pc = 0x22D24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D248u;
        // 0x22d24c: 0xfc680000  sd          $t0, 0x0($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D250u;
        goto label_22d250;
    }
    ctx->pc = 0x22D248u;
    {
        const bool branch_taken_0x22d248 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22D24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D248u;
        // 0x22d24c: 0xfc680000  sd          $t0, 0x0($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d248) {
            ctx->pc = 0x22D1F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22d1f0;
        }
    }
    ctx->pc = 0x22D250u;
label_22d250:
    // 0x22d250: 0x3c070003  lui         $a3, 0x3
    ctx->pc = 0x22d250u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)3 << 16));
label_22d254:
    // 0x22d254: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x22d254u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_22d258:
    // 0x22d258: 0x34e70411  ori         $a3, $a3, 0x411
    ctx->pc = 0x22d258u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)1041);
label_22d25c:
    // 0x22d25c: 0x2404005c  addiu       $a0, $zero, 0x5C
    ctx->pc = 0x22d25cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
label_22d260:
    // 0x22d260: 0xc0930c4  jal         func_24C310
label_22d264:
    if (ctx->pc == 0x22D264u) {
        ctx->pc = 0x22D264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D260u;
        // 0x22d264: 0x24050400  addiu       $a1, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D268u;
        goto label_22d268;
    }
    ctx->pc = 0x22D260u;
    SET_GPR_U32(ctx, 31, 0x22D268u);
    ctx->pc = 0x22D264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D260u;
    // 0x22d264: 0x24050400  addiu       $a1, $zero, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24C310u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24C310u, 0x22D260u, 0x22D268u)) {
        return;
    }
    ctx->pc = 0x22D268u;
label_22d268:
    // 0x22d268: 0xae024004  sw          $v0, 0x4004($s0)
    ctx->pc = 0x22d268u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16388), GPR_U32(ctx, 2));
label_22d26c:
    // 0x22d26c: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x22d26cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_22d270:
    // 0x22d270: 0x24630fc8  addiu       $v1, $v1, 0xFC8
    ctx->pc = 0x22d270u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4040));
label_22d274:
    // 0x22d274: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x22d274u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22d278:
    // 0x22d278: 0x8c620118  lw          $v0, 0x118($v1)
    ctx->pc = 0x22d278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 280)));
label_22d27c:
    // 0x22d27c: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x22d27cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_22d280:
    // 0x22d280: 0x40f809  jalr        $v0
label_22d284:
    if (ctx->pc == 0x22D284u) {
        ctx->pc = 0x22D284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D280u;
        // 0x22d284: 0x34a50411  ori         $a1, $a1, 0x411 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1041);
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D288u;
        goto label_22d288;
    }
    ctx->pc = 0x22D280u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22D288u);
        ctx->pc = 0x22D284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D280u;
        // 0x22d284: 0x34a50411  ori         $a1, $a1, 0x411 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1041);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22D280u, 0x22D288u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22D288u;
label_22d288:
    // 0x22d288: 0xae024000  sw          $v0, 0x4000($s0)
    ctx->pc = 0x22d288u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16384), GPR_U32(ctx, 2));
label_22d28c:
    // 0x22d28c: 0xc08af54  jal         func_22BD50
label_22d290:
    if (ctx->pc == 0x22D290u) {
        ctx->pc = 0x22D290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D28Cu;
        // 0x22d290: 0x2444001c  addiu       $a0, $v0, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D294u;
        goto label_22d294;
    }
    ctx->pc = 0x22D28Cu;
    SET_GPR_U32(ctx, 31, 0x22D294u);
    ctx->pc = 0x22D290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D28Cu;
    // 0x22d290: 0x2444001c  addiu       $a0, $v0, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22BD50u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22BD50u, 0x22D28Cu, 0x22D294u)) {
        return;
    }
    ctx->pc = 0x22D294u;
label_22d294:
    // 0x22d294: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x22d294u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_22d298:
    // 0x22d298: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x22d298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22d29c:
    // 0x22d29c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22d29cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_22d2a0:
    // 0x22d2a0: 0x3e00008  jr          $ra
label_22d2a4:
    if (ctx->pc == 0x22D2A4u) {
        ctx->pc = 0x22D2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D2A0u;
        // 0x22d2a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D2A8u;
        goto label_fallthrough_0x22d2a0;
    }
    ctx->pc = 0x22D2A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22D2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D2A0u;
        // 0x22d2a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22D2A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x22d2a0:
    ctx->pc = 0x22D2A8u;
}
