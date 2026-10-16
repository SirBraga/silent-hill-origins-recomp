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

// Function: sub_001AB178
// Address: 0x1ab178 - 0x1ab288
void sub_001AB178_0x1ab178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AB178_0x1ab178");
#endif

    switch (ctx->pc) {
        case 0x1ab178u: goto label_1ab178;
        case 0x1ab17cu: goto label_1ab17c;
        case 0x1ab180u: goto label_1ab180;
        case 0x1ab184u: goto label_1ab184;
        case 0x1ab188u: goto label_1ab188;
        case 0x1ab18cu: goto label_1ab18c;
        case 0x1ab190u: goto label_1ab190;
        case 0x1ab194u: goto label_1ab194;
        case 0x1ab198u: goto label_1ab198;
        case 0x1ab19cu: goto label_1ab19c;
        case 0x1ab1a0u: goto label_1ab1a0;
        case 0x1ab1a4u: goto label_1ab1a4;
        case 0x1ab1a8u: goto label_1ab1a8;
        case 0x1ab1acu: goto label_1ab1ac;
        case 0x1ab1b0u: goto label_1ab1b0;
        case 0x1ab1b4u: goto label_1ab1b4;
        case 0x1ab1b8u: goto label_1ab1b8;
        case 0x1ab1bcu: goto label_1ab1bc;
        case 0x1ab1c0u: goto label_1ab1c0;
        case 0x1ab1c4u: goto label_1ab1c4;
        case 0x1ab1c8u: goto label_1ab1c8;
        case 0x1ab1ccu: goto label_1ab1cc;
        case 0x1ab1d0u: goto label_1ab1d0;
        case 0x1ab1d4u: goto label_1ab1d4;
        case 0x1ab1d8u: goto label_1ab1d8;
        case 0x1ab1dcu: goto label_1ab1dc;
        case 0x1ab1e0u: goto label_1ab1e0;
        case 0x1ab1e4u: goto label_1ab1e4;
        case 0x1ab1e8u: goto label_1ab1e8;
        case 0x1ab1ecu: goto label_1ab1ec;
        case 0x1ab1f0u: goto label_1ab1f0;
        case 0x1ab1f4u: goto label_1ab1f4;
        case 0x1ab1f8u: goto label_1ab1f8;
        case 0x1ab1fcu: goto label_1ab1fc;
        case 0x1ab200u: goto label_1ab200;
        case 0x1ab204u: goto label_1ab204;
        case 0x1ab208u: goto label_1ab208;
        case 0x1ab20cu: goto label_1ab20c;
        case 0x1ab210u: goto label_1ab210;
        case 0x1ab214u: goto label_1ab214;
        case 0x1ab218u: goto label_1ab218;
        case 0x1ab21cu: goto label_1ab21c;
        case 0x1ab220u: goto label_1ab220;
        case 0x1ab224u: goto label_1ab224;
        case 0x1ab228u: goto label_1ab228;
        case 0x1ab22cu: goto label_1ab22c;
        case 0x1ab230u: goto label_1ab230;
        case 0x1ab234u: goto label_1ab234;
        case 0x1ab238u: goto label_1ab238;
        case 0x1ab23cu: goto label_1ab23c;
        case 0x1ab240u: goto label_1ab240;
        case 0x1ab244u: goto label_1ab244;
        case 0x1ab248u: goto label_1ab248;
        case 0x1ab24cu: goto label_1ab24c;
        case 0x1ab250u: goto label_1ab250;
        case 0x1ab254u: goto label_1ab254;
        case 0x1ab258u: goto label_1ab258;
        case 0x1ab25cu: goto label_1ab25c;
        case 0x1ab260u: goto label_1ab260;
        case 0x1ab264u: goto label_1ab264;
        case 0x1ab268u: goto label_1ab268;
        case 0x1ab26cu: goto label_1ab26c;
        case 0x1ab270u: goto label_1ab270;
        case 0x1ab274u: goto label_1ab274;
        case 0x1ab278u: goto label_1ab278;
        case 0x1ab27cu: goto label_1ab27c;
        case 0x1ab280u: goto label_1ab280;
        case 0x1ab284u: goto label_1ab284;
        default: break;
    }

    ctx->pc = 0x1ab178u;

label_1ab178:
    // 0x1ab178: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1ab178u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_1ab17c:
    // 0x1ab17c: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x1ab17cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_1ab180:
    // 0x1ab180: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x1ab180u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_1ab184:
    // 0x1ab184: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ab184u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ab188:
    // 0x1ab188: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1ab188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_1ab18c:
    // 0x1ab18c: 0x3111ffff  andi        $s1, $t0, 0xFFFF
    ctx->pc = 0x1ab18cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
label_1ab190:
    // 0x1ab190: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x1ab190u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_1ab194:
    // 0x1ab194: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x1ab194u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1ab198:
    // 0x1ab198: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x1ab198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
label_1ab19c:
    // 0x1ab19c: 0x30d4ffff  andi        $s4, $a2, 0xFFFF
    ctx->pc = 0x1ab19cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
label_1ab1a0:
    // 0x1ab1a0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1ab1a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1ab1a4:
    // 0x1ab1a4: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x1ab1a4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1ab1a8:
    // 0x1ab1a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ab1a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1ab1ac:
    // 0x1ab1ac: 0xc06a928  jal         func_1AA4A0
label_1ab1b0:
    if (ctx->pc == 0x1AB1B0u) {
        ctx->pc = 0x1AB1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB1ACu;
        // 0x1ab1b0: 0x3413ffff  ori         $s3, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB1B4u;
        goto label_1ab1b4;
    }
    ctx->pc = 0x1AB1ACu;
    SET_GPR_U32(ctx, 31, 0x1AB1B4u);
    ctx->pc = 0x1AB1B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB1ACu;
    // 0x1ab1b0: 0x3413ffff  ori         $s3, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AA4A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AA4A0u, 0x1AB1ACu, 0x1AB1B4u)) {
        return;
    }
    ctx->pc = 0x1AB1B4u;
label_1ab1b4:
    // 0x1ab1b4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ab1b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ab1b8:
    // 0x1ab1b8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ab1b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ab1bc:
    // 0x1ab1bc: 0xc06a8e4  jal         func_1AA390
label_1ab1c0:
    if (ctx->pc == 0x1AB1C0u) {
        ctx->pc = 0x1AB1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB1BCu;
        // 0x1ab1c0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB1C4u;
        goto label_1ab1c4;
    }
    ctx->pc = 0x1AB1BCu;
    SET_GPR_U32(ctx, 31, 0x1AB1C4u);
    ctx->pc = 0x1AB1C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB1BCu;
    // 0x1ab1c0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AA390u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AA390u, 0x1AB1BCu, 0x1AB1C4u)) {
        return;
    }
    ctx->pc = 0x1AB1C4u;
label_1ab1c4:
    // 0x1ab1c4: 0xc06a928  jal         func_1AA4A0
label_1ab1c8:
    if (ctx->pc == 0x1AB1C8u) {
        ctx->pc = 0x1AB1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB1C4u;
        // 0x1ab1c8: 0xae020160  sw          $v0, 0x160($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 352), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB1CCu;
        goto label_1ab1cc;
    }
    ctx->pc = 0x1AB1C4u;
    SET_GPR_U32(ctx, 31, 0x1AB1CCu);
    ctx->pc = 0x1AB1C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB1C4u;
    // 0x1ab1c8: 0xae020160  sw          $v0, 0x160($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 352), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AA4A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AA4A0u, 0x1AB1C4u, 0x1AB1CCu)) {
        return;
    }
    ctx->pc = 0x1AB1CCu;
label_1ab1cc:
    // 0x1ab1cc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ab1ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ab1d0:
    // 0x1ab1d0: 0xc06a9dc  jal         func_1AA770
label_1ab1d4:
    if (ctx->pc == 0x1AB1D4u) {
        ctx->pc = 0x1AB1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB1D0u;
        // 0x1ab1d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB1D8u;
        goto label_1ab1d8;
    }
    ctx->pc = 0x1AB1D0u;
    SET_GPR_U32(ctx, 31, 0x1AB1D8u);
    ctx->pc = 0x1AB1D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB1D0u;
    // 0x1ab1d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AA770u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AA770u, 0x1AB1D0u, 0x1AB1D8u)) {
        return;
    }
    ctx->pc = 0x1AB1D8u;
label_1ab1d8:
    // 0x1ab1d8: 0xa4510020  sh          $s1, 0x20($v0)
    ctx->pc = 0x1ab1d8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 32), (uint16_t)GPR_U32(ctx, 17));
label_1ab1dc:
    // 0x1ab1dc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1ab1dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ab1e0:
    // 0x1ab1e0: 0x6a430007  ldl         $v1, 0x7($s2)
    ctx->pc = 0x1ab1e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_1ab1e4:
    // 0x1ab1e4: 0x6e430000  ldr         $v1, 0x0($s2)
    ctx->pc = 0x1ab1e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_1ab1e8:
    // 0x1ab1e8: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x1ab1e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_1ab1ec:
    // 0x1ab1ec: 0xb0430017  sdl         $v1, 0x17($v0)
    ctx->pc = 0x1ab1ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1ab1f0:
    // 0x1ab1f0: 0xb4430010  sdr         $v1, 0x10($v0)
    ctx->pc = 0x1ab1f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1ab1f4:
    // 0x1ab1f4: 0xac440018  sw          $a0, 0x18($v0)
    ctx->pc = 0x1ab1f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 4));
label_1ab1f8:
    // 0x1ab1f8: 0xa4530022  sh          $s3, 0x22($v0)
    ctx->pc = 0x1ab1f8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 34), (uint16_t)GPR_U32(ctx, 19));
label_1ab1fc:
    // 0x1ab1fc: 0x8e060160  lw          $a2, 0x160($s0)
    ctx->pc = 0x1ab1fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
label_1ab200:
    // 0x1ab200: 0x8cc20018  lw          $v0, 0x18($a2)
    ctx->pc = 0x1ab200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
label_1ab204:
    // 0x1ab204: 0x84440020  lh          $a0, 0x20($v0)
    ctx->pc = 0x1ab204u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 32)));
label_1ab208:
    // 0x1ab208: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x1ab208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_1ab20c:
    // 0x1ab20c: 0x60f809  jalr        $v1
label_1ab210:
    if (ctx->pc == 0x1AB210u) {
        ctx->pc = 0x1AB210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB20Cu;
        // 0x1ab210: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB214u;
        goto label_1ab214;
    }
    ctx->pc = 0x1AB20Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1AB214u);
        ctx->pc = 0x1AB210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB20Cu;
        // 0x1ab210: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AB20Cu, 0x1AB214u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AB214u;
label_1ab214:
    // 0x1ab214: 0xc06a928  jal         func_1AA4A0
label_1ab218:
    if (ctx->pc == 0x1AB218u) {
        ctx->pc = 0x1AB21Cu;
        goto label_1ab21c;
    }
    ctx->pc = 0x1AB214u;
    SET_GPR_U32(ctx, 31, 0x1AB21Cu);
    ctx->pc = 0x1AA4A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AA4A0u, 0x1AB214u, 0x1AB21Cu)) {
        return;
    }
    ctx->pc = 0x1AB21Cu;
label_1ab21c:
    // 0x1ab21c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ab21cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ab220:
    // 0x1ab220: 0xc06a9dc  jal         func_1AA770
label_1ab224:
    if (ctx->pc == 0x1AB224u) {
        ctx->pc = 0x1AB224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB220u;
        // 0x1ab224: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB228u;
        goto label_1ab228;
    }
    ctx->pc = 0x1AB220u;
    SET_GPR_U32(ctx, 31, 0x1AB228u);
    ctx->pc = 0x1AB224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB220u;
    // 0x1ab224: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AA770u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AA770u, 0x1AB220u, 0x1AB228u)) {
        return;
    }
    ctx->pc = 0x1AB228u;
label_1ab228:
    // 0x1ab228: 0xa4540020  sh          $s4, 0x20($v0)
    ctx->pc = 0x1ab228u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 32), (uint16_t)GPR_U32(ctx, 20));
label_1ab22c:
    // 0x1ab22c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1ab22cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ab230:
    // 0x1ab230: 0x6aa30007  ldl         $v1, 0x7($s5)
    ctx->pc = 0x1ab230u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_1ab234:
    // 0x1ab234: 0x6ea30000  ldr         $v1, 0x0($s5)
    ctx->pc = 0x1ab234u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_1ab238:
    // 0x1ab238: 0x8ea40008  lw          $a0, 0x8($s5)
    ctx->pc = 0x1ab238u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_1ab23c:
    // 0x1ab23c: 0xb0430017  sdl         $v1, 0x17($v0)
    ctx->pc = 0x1ab23cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1ab240:
    // 0x1ab240: 0xb4430010  sdr         $v1, 0x10($v0)
    ctx->pc = 0x1ab240u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1ab244:
    // 0x1ab244: 0xac440018  sw          $a0, 0x18($v0)
    ctx->pc = 0x1ab244u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 4));
label_1ab248:
    // 0x1ab248: 0xa4530022  sh          $s3, 0x22($v0)
    ctx->pc = 0x1ab248u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 34), (uint16_t)GPR_U32(ctx, 19));
label_1ab24c:
    // 0x1ab24c: 0x8e060160  lw          $a2, 0x160($s0)
    ctx->pc = 0x1ab24cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
label_1ab250:
    // 0x1ab250: 0x8cc20018  lw          $v0, 0x18($a2)
    ctx->pc = 0x1ab250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
label_1ab254:
    // 0x1ab254: 0x84440020  lh          $a0, 0x20($v0)
    ctx->pc = 0x1ab254u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 32)));
label_1ab258:
    // 0x1ab258: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x1ab258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_1ab25c:
    // 0x1ab25c: 0x60f809  jalr        $v1
label_1ab260:
    if (ctx->pc == 0x1AB260u) {
        ctx->pc = 0x1AB260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB25Cu;
        // 0x1ab260: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB264u;
        goto label_1ab264;
    }
    ctx->pc = 0x1AB25Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1AB264u);
        ctx->pc = 0x1AB260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB25Cu;
        // 0x1ab260: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AB25Cu, 0x1AB264u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AB264u;
label_1ab264:
    // 0x1ab264: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x1ab264u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1ab268:
    // 0x1ab268: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x1ab268u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1ab26c:
    // 0x1ab26c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1ab26cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1ab270:
    // 0x1ab270: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1ab270u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1ab274:
    // 0x1ab274: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x1ab274u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1ab278:
    // 0x1ab278: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x1ab278u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1ab27c:
    // 0x1ab27c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ab27cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ab280:
    // 0x1ab280: 0x3e00008  jr          $ra
label_1ab284:
    if (ctx->pc == 0x1AB284u) {
        ctx->pc = 0x1AB284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB280u;
        // 0x1ab284: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB288u;
        goto label_fallthrough_0x1ab280;
    }
    ctx->pc = 0x1AB280u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AB284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB280u;
        // 0x1ab284: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AB280u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1ab280:
    ctx->pc = 0x1AB288u;
}
