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

// Function: sub_001B7160
// Address: 0x1b7160 - 0x1b7378
void sub_001B7160_0x1b7160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B7160_0x1b7160");
#endif

    switch (ctx->pc) {
        case 0x1b717cu: goto label_1b717c;
        case 0x1b7204u: goto label_1b7204;
        case 0x1b7214u: goto label_1b7214;
        case 0x1b7224u: goto label_1b7224;
        case 0x1b7234u: goto label_1b7234;
        case 0x1b7258u: goto label_1b7258;
        case 0x1b7268u: goto label_1b7268;
        case 0x1b7280u: goto label_1b7280;
        case 0x1b7294u: goto label_1b7294;
        case 0x1b72a8u: goto label_1b72a8;
        case 0x1b72c0u: goto label_1b72c0;
        case 0x1b72d4u: goto label_1b72d4;
        case 0x1b72e8u: goto label_1b72e8;
        case 0x1b7300u: goto label_1b7300;
        case 0x1b7314u: goto label_1b7314;
        case 0x1b7328u: goto label_1b7328;
        case 0x1b7340u: goto label_1b7340;
        case 0x1b7354u: goto label_1b7354;
        default: break;
    }

    ctx->pc = 0x1b7160u;

    // 0x1b7160: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1b7160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1b7164: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x1b7164u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x1b7168: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x1b7168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x1b716c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b716cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7170: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1b7170u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x1b7174: 0xc06b968  jal         func_1AE5A0
    ctx->pc = 0x1B7174u;
    SET_GPR_U32(ctx, 31, 0x1B717Cu);
    ctx->pc = 0x1B7178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7174u;
    // 0x1b7178: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE5A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AE5A0u, 0x1B7174u, 0x1B717Cu)) {
        return;
    }
    ctx->pc = 0x1B717Cu;
label_1b717c:
    // 0x1b717c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1b717cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x1b7180: 0x3c07006a  lui         $a3, 0x6A
    ctx->pc = 0x1b7180u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)106 << 16));
    // 0x1b7184: 0x2463cc48  addiu       $v1, $v1, -0x33B8
    ctx->pc = 0x1b7184u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954056));
    // 0x1b7188: 0x24e7cd58  addiu       $a3, $a3, -0x32A8
    ctx->pc = 0x1b7188u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294954328));
    // 0x1b718c: 0xae030258  sw          $v1, 0x258($s0)
    ctx->pc = 0x1b718cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 600), GPR_U32(ctx, 3));
    // 0x1b7190: 0x26020270  addiu       $v0, $s0, 0x270
    ctx->pc = 0x1b7190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 624));
    // 0x1b7194: 0xae000260  sw          $zero, 0x260($s0)
    ctx->pc = 0x1b7194u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 608), GPR_U32(ctx, 0));
    // 0x1b7198: 0x260402b8  addiu       $a0, $s0, 0x2B8
    ctx->pc = 0x1b7198u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 696));
    // 0x1b719c: 0xae000264  sw          $zero, 0x264($s0)
    ctx->pc = 0x1b719cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 612), GPR_U32(ctx, 0));
    // 0x1b71a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b71a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b71a4: 0xae000268  sw          $zero, 0x268($s0)
    ctx->pc = 0x1b71a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 616), GPR_U32(ctx, 0));
    // 0x1b71a8: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x1b71a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1b71ac: 0xae00026c  sw          $zero, 0x26C($s0)
    ctx->pc = 0x1b71acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 620), GPR_U32(ctx, 0));
    // 0x1b71b0: 0xac47000c  sw          $a3, 0xC($v0)
    ctx->pc = 0x1b71b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 7));
    // 0x1b71b4: 0xae000270  sw          $zero, 0x270($s0)
    ctx->pc = 0x1b71b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 624), GPR_U32(ctx, 0));
    // 0x1b71b8: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x1b71b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x1b71bc: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1b71bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1b71c0: 0xae000280  sw          $zero, 0x280($s0)
    ctx->pc = 0x1b71c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 640), GPR_U32(ctx, 0));
    // 0x1b71c4: 0xae000284  sw          $zero, 0x284($s0)
    ctx->pc = 0x1b71c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 644), GPR_U32(ctx, 0));
    // 0x1b71c8: 0xae000288  sw          $zero, 0x288($s0)
    ctx->pc = 0x1b71c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 648), GPR_U32(ctx, 0));
    // 0x1b71cc: 0xae00028c  sw          $zero, 0x28C($s0)
    ctx->pc = 0x1b71ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 652), GPR_U32(ctx, 0));
    // 0x1b71d0: 0xae000290  sw          $zero, 0x290($s0)
    ctx->pc = 0x1b71d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 656), GPR_U32(ctx, 0));
    // 0x1b71d4: 0xae000294  sw          $zero, 0x294($s0)
    ctx->pc = 0x1b71d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 660), GPR_U32(ctx, 0));
    // 0x1b71d8: 0xae000298  sw          $zero, 0x298($s0)
    ctx->pc = 0x1b71d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 664), GPR_U32(ctx, 0));
    // 0x1b71dc: 0xae00029c  sw          $zero, 0x29C($s0)
    ctx->pc = 0x1b71dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 668), GPR_U32(ctx, 0));
    // 0x1b71e0: 0xae0002a0  sw          $zero, 0x2A0($s0)
    ctx->pc = 0x1b71e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 672), GPR_U32(ctx, 0));
    // 0x1b71e4: 0xae0002a4  sw          $zero, 0x2A4($s0)
    ctx->pc = 0x1b71e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 676), GPR_U32(ctx, 0));
    // 0x1b71e8: 0xae0002a8  sw          $zero, 0x2A8($s0)
    ctx->pc = 0x1b71e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 680), GPR_U32(ctx, 0));
    // 0x1b71ec: 0xae0002ac  sw          $zero, 0x2AC($s0)
    ctx->pc = 0x1b71ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 684), GPR_U32(ctx, 0));
    // 0x1b71f0: 0xae0002b0  sw          $zero, 0x2B0($s0)
    ctx->pc = 0x1b71f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 688), GPR_U32(ctx, 0));
    // 0x1b71f4: 0xae0002b4  sw          $zero, 0x2B4($s0)
    ctx->pc = 0x1b71f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 692), GPR_U32(ctx, 0));
    // 0x1b71f8: 0xae0002c8  sw          $zero, 0x2C8($s0)
    ctx->pc = 0x1b71f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 712), GPR_U32(ctx, 0));
    // 0x1b71fc: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1B71FCu;
    SET_GPR_U32(ctx, 31, 0x1B7204u);
    ctx->pc = 0x1B7200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B71FCu;
    // 0x1b7200: 0xae0002dc  sw          $zero, 0x2DC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 732), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1B71FCu, 0x1B7204u)) {
        return;
    }
    ctx->pc = 0x1B7204u;
label_1b7204:
    // 0x1b7204: 0x260402c0  addiu       $a0, $s0, 0x2C0
    ctx->pc = 0x1b7204u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 704));
    // 0x1b7208: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b7208u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b720c: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1B720Cu;
    SET_GPR_U32(ctx, 31, 0x1B7214u);
    ctx->pc = 0x1B7210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B720Cu;
    // 0x1b7210: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1B720Cu, 0x1B7214u)) {
        return;
    }
    ctx->pc = 0x1B7214u;
label_1b7214:
    // 0x1b7214: 0x260402cc  addiu       $a0, $s0, 0x2CC
    ctx->pc = 0x1b7214u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 716));
    // 0x1b7218: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b7218u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b721c: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1B721Cu;
    SET_GPR_U32(ctx, 31, 0x1B7224u);
    ctx->pc = 0x1B7220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B721Cu;
    // 0x1b7220: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1B721Cu, 0x1B7224u)) {
        return;
    }
    ctx->pc = 0x1B7224u;
label_1b7224:
    // 0x1b7224: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b7224u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7228: 0x260402d4  addiu       $a0, $s0, 0x2D4
    ctx->pc = 0x1b7228u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 724));
    // 0x1b722c: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1B722Cu;
    SET_GPR_U32(ctx, 31, 0x1B7234u);
    ctx->pc = 0x1B7230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B722Cu;
    // 0x1b7230: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1B722Cu, 0x1B7234u)) {
        return;
    }
    ctx->pc = 0x1B7234u;
label_1b7234:
    // 0x1b7234: 0x3c014041  lui         $at, 0x4041
    ctx->pc = 0x1b7234u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16449 << 16));
    // 0x1b7238: 0x3421f07c  ori         $at, $at, 0xF07C
    ctx->pc = 0x1b7238u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)61564);
    // 0x1b723c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b723cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b7240: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1b7240u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1b7244: 0x24a5cbc8  addiu       $a1, $a1, -0x3438
    ctx->pc = 0x1b7244u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953928));
    // 0x1b7248: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b7248u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b724c: 0xe60002c8  swc1        $f0, 0x2C8($s0)
    ctx->pc = 0x1b724cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 712), bits); }
    // 0x1b7250: 0xc065ea4  jal         func_197A90
    ctx->pc = 0x1B7250u;
    SET_GPR_U32(ctx, 31, 0x1B7258u);
    ctx->pc = 0x1B7254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7250u;
    // 0x1b7254: 0x26060260  addiu       $a2, $s0, 0x260 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 608));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197A90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197A90u, 0x1B7250u, 0x1B7258u)) {
        return;
    }
    ctx->pc = 0x1B7258u;
label_1b7258:
    // 0x1b7258: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1b7258u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b725c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b725cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7260: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1B7260u;
    SET_GPR_U32(ctx, 31, 0x1B7268u);
    ctx->pc = 0x1B7264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7260u;
    // 0x1b7264: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1B7260u, 0x1B7268u)) {
        return;
    }
    ctx->pc = 0x1B7268u;
label_1b7268:
    // 0x1b7268: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1b7268u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1b726c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b726cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7270: 0x24a5cbd8  addiu       $a1, $a1, -0x3428
    ctx->pc = 0x1b7270u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953944));
    // 0x1b7274: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1b7274u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7278: 0xc065f2c  jal         func_197CB0
    ctx->pc = 0x1B7278u;
    SET_GPR_U32(ctx, 31, 0x1B7280u);
    ctx->pc = 0x1B727Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7278u;
    // 0x1b727c: 0x24070080  addiu       $a3, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197CB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197CB0u, 0x1B7278u, 0x1B7280u)) {
        return;
    }
    ctx->pc = 0x1B7280u;
label_1b7280:
    // 0x1b7280: 0x83a30000  lb          $v1, 0x0($sp)
    ctx->pc = 0x1b7280u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b7284: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B7284u;
    {
        const bool branch_taken_0x1b7284 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7284u;
        // 0x1b7288: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7284) {
            ctx->pc = 0x1B7298u;
            goto label_1b7298;
        }
    }
    ctx->pc = 0x1B728Cu;
    // 0x1b728c: 0xc065c40  jal         func_197100
    ctx->pc = 0x1B728Cu;
    SET_GPR_U32(ctx, 31, 0x1B7294u);
    ctx->pc = 0x1B7290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B728Cu;
    // 0x1b7290: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197100u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197100u, 0x1B728Cu, 0x1B7294u)) {
        return;
    }
    ctx->pc = 0x1B7294u;
label_1b7294:
    // 0x1b7294: 0xae02028c  sw          $v0, 0x28C($s0)
    ctx->pc = 0x1b7294u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 652), GPR_U32(ctx, 2));
label_1b7298:
    // 0x1b7298: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1b7298u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b729c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b729cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b72a0: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1B72A0u;
    SET_GPR_U32(ctx, 31, 0x1B72A8u);
    ctx->pc = 0x1B72A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B72A0u;
    // 0x1b72a4: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1B72A0u, 0x1B72A8u)) {
        return;
    }
    ctx->pc = 0x1B72A8u;
label_1b72a8:
    // 0x1b72a8: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1b72a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1b72ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b72acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b72b0: 0x24a5cbe8  addiu       $a1, $a1, -0x3418
    ctx->pc = 0x1b72b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953960));
    // 0x1b72b4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1b72b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b72b8: 0xc065f2c  jal         func_197CB0
    ctx->pc = 0x1B72B8u;
    SET_GPR_U32(ctx, 31, 0x1B72C0u);
    ctx->pc = 0x1B72BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B72B8u;
    // 0x1b72bc: 0x24070080  addiu       $a3, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197CB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197CB0u, 0x1B72B8u, 0x1B72C0u)) {
        return;
    }
    ctx->pc = 0x1B72C0u;
label_1b72c0:
    // 0x1b72c0: 0x83a30000  lb          $v1, 0x0($sp)
    ctx->pc = 0x1b72c0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b72c4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B72C4u;
    {
        const bool branch_taken_0x1b72c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B72C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B72C4u;
        // 0x1b72c8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b72c4) {
            ctx->pc = 0x1B72D8u;
            goto label_1b72d8;
        }
    }
    ctx->pc = 0x1B72CCu;
    // 0x1b72cc: 0xc065c40  jal         func_197100
    ctx->pc = 0x1B72CCu;
    SET_GPR_U32(ctx, 31, 0x1B72D4u);
    ctx->pc = 0x1B72D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B72CCu;
    // 0x1b72d0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197100u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197100u, 0x1B72CCu, 0x1B72D4u)) {
        return;
    }
    ctx->pc = 0x1B72D4u;
label_1b72d4:
    // 0x1b72d4: 0xae020290  sw          $v0, 0x290($s0)
    ctx->pc = 0x1b72d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 656), GPR_U32(ctx, 2));
label_1b72d8:
    // 0x1b72d8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1b72d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b72dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b72dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b72e0: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1B72E0u;
    SET_GPR_U32(ctx, 31, 0x1B72E8u);
    ctx->pc = 0x1B72E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B72E0u;
    // 0x1b72e4: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1B72E0u, 0x1B72E8u)) {
        return;
    }
    ctx->pc = 0x1B72E8u;
label_1b72e8:
    // 0x1b72e8: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1b72e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1b72ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b72ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b72f0: 0x24a5cbf8  addiu       $a1, $a1, -0x3408
    ctx->pc = 0x1b72f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953976));
    // 0x1b72f4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1b72f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b72f8: 0xc065f2c  jal         func_197CB0
    ctx->pc = 0x1B72F8u;
    SET_GPR_U32(ctx, 31, 0x1B7300u);
    ctx->pc = 0x1B72FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B72F8u;
    // 0x1b72fc: 0x24070080  addiu       $a3, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197CB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197CB0u, 0x1B72F8u, 0x1B7300u)) {
        return;
    }
    ctx->pc = 0x1B7300u;
label_1b7300:
    // 0x1b7300: 0x83a30000  lb          $v1, 0x0($sp)
    ctx->pc = 0x1b7300u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b7304: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B7304u;
    {
        const bool branch_taken_0x1b7304 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7304u;
        // 0x1b7308: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7304) {
            ctx->pc = 0x1B7318u;
            goto label_1b7318;
        }
    }
    ctx->pc = 0x1B730Cu;
    // 0x1b730c: 0xc065c40  jal         func_197100
    ctx->pc = 0x1B730Cu;
    SET_GPR_U32(ctx, 31, 0x1B7314u);
    ctx->pc = 0x1B7310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B730Cu;
    // 0x1b7310: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197100u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197100u, 0x1B730Cu, 0x1B7314u)) {
        return;
    }
    ctx->pc = 0x1B7314u;
label_1b7314:
    // 0x1b7314: 0xae020294  sw          $v0, 0x294($s0)
    ctx->pc = 0x1b7314u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 660), GPR_U32(ctx, 2));
label_1b7318:
    // 0x1b7318: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1b7318u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b731c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b731cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7320: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1B7320u;
    SET_GPR_U32(ctx, 31, 0x1B7328u);
    ctx->pc = 0x1B7324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7320u;
    // 0x1b7324: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1B7320u, 0x1B7328u)) {
        return;
    }
    ctx->pc = 0x1B7328u;
label_1b7328:
    // 0x1b7328: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1b7328u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1b732c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b732cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7330: 0x24a5cc08  addiu       $a1, $a1, -0x33F8
    ctx->pc = 0x1b7330u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953992));
    // 0x1b7334: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1b7334u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7338: 0xc065f2c  jal         func_197CB0
    ctx->pc = 0x1B7338u;
    SET_GPR_U32(ctx, 31, 0x1B7340u);
    ctx->pc = 0x1B733Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7338u;
    // 0x1b733c: 0x24070080  addiu       $a3, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197CB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197CB0u, 0x1B7338u, 0x1B7340u)) {
        return;
    }
    ctx->pc = 0x1B7340u;
label_1b7340:
    // 0x1b7340: 0x83a30000  lb          $v1, 0x0($sp)
    ctx->pc = 0x1b7340u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b7344: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B7344u;
    {
        const bool branch_taken_0x1b7344 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7344u;
        // 0x1b7348: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7344) {
            ctx->pc = 0x1B7358u;
            goto label_1b7358;
        }
    }
    ctx->pc = 0x1B734Cu;
    // 0x1b734c: 0xc065c40  jal         func_197100
    ctx->pc = 0x1B734Cu;
    SET_GPR_U32(ctx, 31, 0x1B7354u);
    ctx->pc = 0x1B7350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B734Cu;
    // 0x1b7350: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197100u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197100u, 0x1B734Cu, 0x1B7354u)) {
        return;
    }
    ctx->pc = 0x1B7354u;
label_1b7354:
    // 0x1b7354: 0xae020298  sw          $v0, 0x298($s0)
    ctx->pc = 0x1b7354u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 664), GPR_U32(ctx, 2));
label_1b7358:
    // 0x1b7358: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b7358u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b735c: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x1b735cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x1b7360: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x1b7360u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1b7364: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x1b7364u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1b7368: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1b7368u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1b736c: 0xac6092a0  sw          $zero, -0x6D60($v1)
    ctx->pc = 0x1b736cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3392A0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3392A0u, _value); } while (0);
    // 0x1b7370: 0x3e00008  jr          $ra
    ctx->pc = 0x1B7370u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B7374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7370u;
        // 0x1b7374: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B7370u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B7378u;
}
