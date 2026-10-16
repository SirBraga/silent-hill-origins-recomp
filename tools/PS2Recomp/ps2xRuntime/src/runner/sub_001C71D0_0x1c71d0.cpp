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

// Function: sub_001C71D0
// Address: 0x1c71d0 - 0x1c72f8
void sub_001C71D0_0x1c71d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C71D0_0x1c71d0");
#endif

    switch (ctx->pc) {
        case 0x1c71d0u: goto label_1c71d0;
        case 0x1c71d4u: goto label_1c71d4;
        case 0x1c71d8u: goto label_1c71d8;
        case 0x1c71dcu: goto label_1c71dc;
        case 0x1c71e0u: goto label_1c71e0;
        case 0x1c71e4u: goto label_1c71e4;
        case 0x1c71e8u: goto label_1c71e8;
        case 0x1c71ecu: goto label_1c71ec;
        case 0x1c71f0u: goto label_1c71f0;
        case 0x1c71f4u: goto label_1c71f4;
        case 0x1c71f8u: goto label_1c71f8;
        case 0x1c71fcu: goto label_1c71fc;
        case 0x1c7200u: goto label_1c7200;
        case 0x1c7204u: goto label_1c7204;
        case 0x1c7208u: goto label_1c7208;
        case 0x1c720cu: goto label_1c720c;
        case 0x1c7210u: goto label_1c7210;
        case 0x1c7214u: goto label_1c7214;
        case 0x1c7218u: goto label_1c7218;
        case 0x1c721cu: goto label_1c721c;
        case 0x1c7220u: goto label_1c7220;
        case 0x1c7224u: goto label_1c7224;
        case 0x1c7228u: goto label_1c7228;
        case 0x1c722cu: goto label_1c722c;
        case 0x1c7230u: goto label_1c7230;
        case 0x1c7234u: goto label_1c7234;
        case 0x1c7238u: goto label_1c7238;
        case 0x1c723cu: goto label_1c723c;
        case 0x1c7240u: goto label_1c7240;
        case 0x1c7244u: goto label_1c7244;
        case 0x1c7248u: goto label_1c7248;
        case 0x1c724cu: goto label_1c724c;
        case 0x1c7250u: goto label_1c7250;
        case 0x1c7254u: goto label_1c7254;
        case 0x1c7258u: goto label_1c7258;
        case 0x1c725cu: goto label_1c725c;
        case 0x1c7260u: goto label_1c7260;
        case 0x1c7264u: goto label_1c7264;
        case 0x1c7268u: goto label_1c7268;
        case 0x1c726cu: goto label_1c726c;
        case 0x1c7270u: goto label_1c7270;
        case 0x1c7274u: goto label_1c7274;
        case 0x1c7278u: goto label_1c7278;
        case 0x1c727cu: goto label_1c727c;
        case 0x1c7280u: goto label_1c7280;
        case 0x1c7284u: goto label_1c7284;
        case 0x1c7288u: goto label_1c7288;
        case 0x1c728cu: goto label_1c728c;
        case 0x1c7290u: goto label_1c7290;
        case 0x1c7294u: goto label_1c7294;
        case 0x1c7298u: goto label_1c7298;
        case 0x1c729cu: goto label_1c729c;
        case 0x1c72a0u: goto label_1c72a0;
        case 0x1c72a4u: goto label_1c72a4;
        case 0x1c72a8u: goto label_1c72a8;
        case 0x1c72acu: goto label_1c72ac;
        case 0x1c72b0u: goto label_1c72b0;
        case 0x1c72b4u: goto label_1c72b4;
        case 0x1c72b8u: goto label_1c72b8;
        case 0x1c72bcu: goto label_1c72bc;
        case 0x1c72c0u: goto label_1c72c0;
        case 0x1c72c4u: goto label_1c72c4;
        case 0x1c72c8u: goto label_1c72c8;
        case 0x1c72ccu: goto label_1c72cc;
        case 0x1c72d0u: goto label_1c72d0;
        case 0x1c72d4u: goto label_1c72d4;
        case 0x1c72d8u: goto label_1c72d8;
        case 0x1c72dcu: goto label_1c72dc;
        case 0x1c72e0u: goto label_1c72e0;
        case 0x1c72e4u: goto label_1c72e4;
        case 0x1c72e8u: goto label_1c72e8;
        case 0x1c72ecu: goto label_1c72ec;
        case 0x1c72f0u: goto label_1c72f0;
        case 0x1c72f4u: goto label_1c72f4;
        default: break;
    }

    ctx->pc = 0x1c71d0u;

label_1c71d0:
    // 0x1c71d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1c71d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1c71d4:
    // 0x1c71d4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1c71d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_1c71d8:
    // 0x1c71d8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1c71d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1c71dc:
    // 0x1c71dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c71dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1c71e0:
    // 0x1c71e0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1c71e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_1c71e4:
    // 0x1c71e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c71e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1c71e8:
    // 0x1c71e8: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x1c71e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
label_1c71ec:
    // 0x1c71ec: 0x8e020298  lw          $v0, 0x298($s0)
    ctx->pc = 0x1c71ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 664)));
label_1c71f0:
    // 0x1c71f0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1c71f4:
    if (ctx->pc == 0x1C71F4u) {
        ctx->pc = 0x1C71F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C71F0u;
        // 0x1c71f4: 0x8e050264  lw          $a1, 0x264($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 612)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C71F8u;
        goto label_1c71f8;
    }
    ctx->pc = 0x1C71F0u;
    {
        const bool branch_taken_0x1c71f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C71F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C71F0u;
        // 0x1c71f4: 0x8e050264  lw          $a1, 0x264($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 612)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c71f0) {
            ctx->pc = 0x1C7214u;
            goto label_1c7214;
        }
    }
    ctx->pc = 0x1C71F8u;
label_1c71f8:
    // 0x1c71f8: 0x8ca20034  lw          $v0, 0x34($a1)
    ctx->pc = 0x1c71f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_1c71fc:
    // 0x1c71fc: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x1c71fcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_1c7200:
    // 0x1c7200: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x1c7200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_1c7204:
    // 0x1c7204: 0x60f809  jalr        $v1
label_1c7208:
    if (ctx->pc == 0x1C7208u) {
        ctx->pc = 0x1C7208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7204u;
        // 0x1c7208: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C720Cu;
        goto label_1c720c;
    }
    ctx->pc = 0x1C7204u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1C720Cu);
        ctx->pc = 0x1C7208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7204u;
        // 0x1c7208: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C7204u, 0x1C720Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C720Cu;
label_1c720c:
    // 0x1c720c: 0x10000007  b           . + 4 + (0x7 << 2)
label_1c7210:
    if (ctx->pc == 0x1C7210u) {
        ctx->pc = 0x1C7210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C720Cu;
        // 0x1c7210: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7214u;
        goto label_1c7214;
    }
    ctx->pc = 0x1C720Cu;
    {
        const bool branch_taken_0x1c720c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C720Cu;
        // 0x1c7210: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c720c) {
            ctx->pc = 0x1C722Cu;
            goto label_1c722c;
        }
    }
    ctx->pc = 0x1C7214u;
label_1c7214:
    // 0x1c7214: 0x8ca20034  lw          $v0, 0x34($a1)
    ctx->pc = 0x1c7214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_1c7218:
    // 0x1c7218: 0x84440048  lh          $a0, 0x48($v0)
    ctx->pc = 0x1c7218u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 72)));
label_1c721c:
    // 0x1c721c: 0x8c43004c  lw          $v1, 0x4C($v0)
    ctx->pc = 0x1c721cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
label_1c7220:
    // 0x1c7220: 0x60f809  jalr        $v1
label_1c7224:
    if (ctx->pc == 0x1C7224u) {
        ctx->pc = 0x1C7224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7220u;
        // 0x1c7224: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7228u;
        goto label_1c7228;
    }
    ctx->pc = 0x1C7220u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1C7228u);
        ctx->pc = 0x1C7224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7220u;
        // 0x1c7224: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C7220u, 0x1C7228u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C7228u;
label_1c7228:
    // 0x1c7228: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1c7228u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1c722c:
    // 0x1c722c: 0x26070278  addiu       $a3, $s0, 0x278
    ctx->pc = 0x1c722cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 632));
label_1c7230:
    // 0x1c7230: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1c7230u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c7234:
    // 0x1c7234: 0x0  nop
    ctx->pc = 0x1c7234u;
    // NOP
label_1c7238:
    // 0x1c7238: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x1c7238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_1c723c:
    // 0x1c723c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1c723cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1c7240:
    // 0x1c7240: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1c7240u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1c7244:
    // 0x1c7244: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c7244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1c7248:
    // 0x1c7248: 0x28a40008  slti        $a0, $a1, 0x8
    ctx->pc = 0x1c7248u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)8) ? 1 : 0);
label_1c724c:
    // 0x1c724c: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
label_1c7250:
    if (ctx->pc == 0x1C7250u) {
        ctx->pc = 0x1C7250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C724Cu;
        // 0x1c7250: 0xac4601d0  sw          $a2, 0x1D0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 464), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7254u;
        goto label_1c7254;
    }
    ctx->pc = 0x1C724Cu;
    {
        const bool branch_taken_0x1c724c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C7250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C724Cu;
        // 0x1c7250: 0xac4601d0  sw          $a2, 0x1D0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 464), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c724c) {
            ctx->pc = 0x1C7238u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c7238;
        }
    }
    ctx->pc = 0x1C7254u;
label_1c7254:
    // 0x1c7254: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x1c7254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_1c7258:
    // 0x1c7258: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c7258u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c725c:
    // 0x1c725c: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x1c725cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1c7260:
    // 0x1c7260: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c7260u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c7264:
    // 0x1c7264: 0xac4400f4  sw          $a0, 0xF4($v0)
    ctx->pc = 0x1c7264u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 244), GPR_U32(ctx, 4));
label_1c7268:
    // 0x1c7268: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c7268u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c726c:
    // 0x1c726c: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x1c726cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_1c7270:
    // 0x1c7270: 0xac44002c  sw          $a0, 0x2C($v0)
    ctx->pc = 0x1c7270u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 4));
label_1c7274:
    // 0x1c7274: 0x8e030044  lw          $v1, 0x44($s0)
    ctx->pc = 0x1c7274u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_1c7278:
    // 0x1c7278: 0xac6401d0  sw          $a0, 0x1D0($v1)
    ctx->pc = 0x1c7278u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 464), GPR_U32(ctx, 4));
label_1c727c:
    // 0x1c727c: 0x0  nop
    ctx->pc = 0x1c727cu;
    // NOP
label_1c7280:
    // 0x1c7280: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1c7280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1c7284:
    // 0x1c7284: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1c7284u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1c7288:
    // 0x1c7288: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1c7288u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1c728c:
    // 0x1c728c: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x1c728cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_1c7290:
    // 0x1c7290: 0x621004  sllv        $v0, $v0, $v1
    ctx->pc = 0x1c7290u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
label_1c7294:
    // 0x1c7294: 0x28a40008  slti        $a0, $a1, 0x8
    ctx->pc = 0x1c7294u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)8) ? 1 : 0);
label_1c7298:
    // 0x1c7298: 0xe28025  or          $s0, $a3, $v0
    ctx->pc = 0x1c7298u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_1c729c:
    // 0x1c729c: 0x1480fff8  bnez        $a0, . + 4 + (-0x8 << 2)
label_1c72a0:
    if (ctx->pc == 0x1C72A0u) {
        ctx->pc = 0x1C72A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C729Cu;
        // 0x1c72a0: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C72A4u;
        goto label_1c72a4;
    }
    ctx->pc = 0x1C729Cu;
    {
        const bool branch_taken_0x1c729c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C72A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C729Cu;
        // 0x1c72a0: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c729c) {
            ctx->pc = 0x1C7280u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c7280;
        }
    }
    ctx->pc = 0x1C72A4u;
label_1c72a4:
    // 0x1c72a4: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1c72a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_1c72a8:
    // 0x1c72a8: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1c72a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_1c72ac:
    // 0x1c72ac: 0x8c5198ec  lw          $s1, -0x6714($v0)
    ctx->pc = 0x1c72acu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294940908)));
label_1c72b0:
    // 0x1c72b0: 0xc07d234  jal         func_1F48D0
label_1c72b4:
    if (ctx->pc == 0x1C72B4u) {
        ctx->pc = 0x1C72B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C72B0u;
        // 0x1c72b4: 0x2472f2c8  addiu       $s2, $v1, -0xD38 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963912));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C72B8u;
        goto label_1c72b8;
    }
    ctx->pc = 0x1C72B0u;
    SET_GPR_U32(ctx, 31, 0x1C72B8u);
    ctx->pc = 0x1C72B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C72B0u;
    // 0x1c72b4: 0x2472f2c8  addiu       $s2, $v1, -0xD38 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F48D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F48D0u, 0x1C72B0u, 0x1C72B8u)) {
        return;
    }
    ctx->pc = 0x1C72B8u;
label_1c72b8:
    // 0x1c72b8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_1c72bc:
    if (ctx->pc == 0x1C72BCu) {
        ctx->pc = 0x1C72BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C72B8u;
        // 0x1c72bc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C72C0u;
        goto label_1c72c0;
    }
    ctx->pc = 0x1C72B8u;
    {
        const bool branch_taken_0x1c72b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C72BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C72B8u;
        // 0x1c72bc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c72b8) {
            ctx->pc = 0x1C72E0u;
            goto label_1c72e0;
        }
    }
    ctx->pc = 0x1C72C0u;
label_1c72c0:
    // 0x1c72c0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1c72c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1c72c4:
    // 0x1c72c4: 0xc07d3d6  jal         func_1F4F58
label_1c72c8:
    if (ctx->pc == 0x1C72C8u) {
        ctx->pc = 0x1C72C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C72C4u;
        // 0x1c72c8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C72CCu;
        goto label_1c72cc;
    }
    ctx->pc = 0x1C72C4u;
    SET_GPR_U32(ctx, 31, 0x1C72CCu);
    ctx->pc = 0x1C72C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C72C4u;
    // 0x1c72c8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4F58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4F58u, 0x1C72C4u, 0x1C72CCu)) {
        return;
    }
    ctx->pc = 0x1C72CCu;
label_1c72cc:
    // 0x1c72cc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1c72d0:
    if (ctx->pc == 0x1C72D0u) {
        ctx->pc = 0x1C72D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C72CCu;
        // 0x1c72d0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C72D4u;
        goto label_1c72d4;
    }
    ctx->pc = 0x1C72CCu;
    {
        const bool branch_taken_0x1c72cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C72D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C72CCu;
        // 0x1c72d0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c72cc) {
            ctx->pc = 0x1C72E0u;
            goto label_1c72e0;
        }
    }
    ctx->pc = 0x1C72D4u;
label_1c72d4:
    // 0x1c72d4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1c72d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1c72d8:
    // 0x1c72d8: 0xc07d302  jal         func_1F4C08
label_1c72dc:
    if (ctx->pc == 0x1C72DCu) {
        ctx->pc = 0x1C72DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C72D8u;
        // 0x1c72dc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C72E0u;
        goto label_1c72e0;
    }
    ctx->pc = 0x1C72D8u;
    SET_GPR_U32(ctx, 31, 0x1C72E0u);
    ctx->pc = 0x1C72DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C72D8u;
    // 0x1c72dc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4C08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4C08u, 0x1C72D8u, 0x1C72E0u)) {
        return;
    }
    ctx->pc = 0x1C72E0u;
label_1c72e0:
    // 0x1c72e0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1c72e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1c72e4:
    // 0x1c72e4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1c72e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1c72e8:
    // 0x1c72e8: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1c72e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1c72ec:
    // 0x1c72ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c72ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c72f0:
    // 0x1c72f0: 0x3e00008  jr          $ra
label_1c72f4:
    if (ctx->pc == 0x1C72F4u) {
        ctx->pc = 0x1C72F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C72F0u;
        // 0x1c72f4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C72F8u;
        goto label_fallthrough_0x1c72f0;
    }
    ctx->pc = 0x1C72F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C72F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C72F0u;
        // 0x1c72f4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C72F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1c72f0:
    ctx->pc = 0x1C72F8u;
}
