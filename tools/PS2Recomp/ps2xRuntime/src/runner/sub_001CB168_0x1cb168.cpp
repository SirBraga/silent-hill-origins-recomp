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

// Function: sub_001CB168
// Address: 0x1cb168 - 0x1cb308
void sub_001CB168_0x1cb168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CB168_0x1cb168");
#endif

    switch (ctx->pc) {
        case 0x1cb184u: goto label_1cb184;
        case 0x1cb1f0u: goto label_1cb1f0;
        case 0x1cb1f8u: goto label_1cb1f8;
        case 0x1cb20cu: goto label_1cb20c;
        case 0x1cb21cu: goto label_1cb21c;
        case 0x1cb22cu: goto label_1cb22c;
        case 0x1cb23cu: goto label_1cb23c;
        case 0x1cb254u: goto label_1cb254;
        case 0x1cb268u: goto label_1cb268;
        case 0x1cb27cu: goto label_1cb27c;
        case 0x1cb294u: goto label_1cb294;
        case 0x1cb2a8u: goto label_1cb2a8;
        case 0x1cb2bcu: goto label_1cb2bc;
        case 0x1cb2d4u: goto label_1cb2d4;
        case 0x1cb2e8u: goto label_1cb2e8;
        default: break;
    }

    ctx->pc = 0x1cb168u;

    // 0x1cb168: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1cb168u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1cb16c: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x1cb16cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x1cb170: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x1cb170u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x1cb174: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cb174u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb178: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1cb178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x1cb17c: 0xc06b968  jal         func_1AE5A0
    ctx->pc = 0x1CB17Cu;
    SET_GPR_U32(ctx, 31, 0x1CB184u);
    ctx->pc = 0x1CB180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB17Cu;
    // 0x1cb180: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE5A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AE5A0u, 0x1CB17Cu, 0x1CB184u)) {
        return;
    }
    ctx->pc = 0x1CB184u;
label_1cb184:
    // 0x1cb184: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1cb184u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x1cb188: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1cb188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cb18c: 0x2463fcd8  addiu       $v1, $v1, -0x328
    ctx->pc = 0x1cb18cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966488));
    // 0x1cb190: 0xae000260  sw          $zero, 0x260($s0)
    ctx->pc = 0x1cb190u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 608), GPR_U32(ctx, 0));
    // 0x1cb194: 0xae000264  sw          $zero, 0x264($s0)
    ctx->pc = 0x1cb194u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 612), GPR_U32(ctx, 0));
    // 0x1cb198: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1cb198u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cb19c: 0xae000268  sw          $zero, 0x268($s0)
    ctx->pc = 0x1cb19cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 616), GPR_U32(ctx, 0));
    // 0x1cb1a0: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x1cb1a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1cb1a4: 0xae000270  sw          $zero, 0x270($s0)
    ctx->pc = 0x1cb1a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 624), GPR_U32(ctx, 0));
    // 0x1cb1a8: 0xae000288  sw          $zero, 0x288($s0)
    ctx->pc = 0x1cb1a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 648), GPR_U32(ctx, 0));
    // 0x1cb1ac: 0xae00028c  sw          $zero, 0x28C($s0)
    ctx->pc = 0x1cb1acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 652), GPR_U32(ctx, 0));
    // 0x1cb1b0: 0xae000290  sw          $zero, 0x290($s0)
    ctx->pc = 0x1cb1b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 656), GPR_U32(ctx, 0));
    // 0x1cb1b4: 0xae000294  sw          $zero, 0x294($s0)
    ctx->pc = 0x1cb1b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 660), GPR_U32(ctx, 0));
    // 0x1cb1b8: 0xae000298  sw          $zero, 0x298($s0)
    ctx->pc = 0x1cb1b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 664), GPR_U32(ctx, 0));
    // 0x1cb1bc: 0xae00029c  sw          $zero, 0x29C($s0)
    ctx->pc = 0x1cb1bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 668), GPR_U32(ctx, 0));
    // 0x1cb1c0: 0xae0002a0  sw          $zero, 0x2A0($s0)
    ctx->pc = 0x1cb1c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 672), GPR_U32(ctx, 0));
    // 0x1cb1c4: 0xae0002a4  sw          $zero, 0x2A4($s0)
    ctx->pc = 0x1cb1c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 676), GPR_U32(ctx, 0));
    // 0x1cb1c8: 0xae0002a8  sw          $zero, 0x2A8($s0)
    ctx->pc = 0x1cb1c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 680), GPR_U32(ctx, 0));
    // 0x1cb1cc: 0xae0002ac  sw          $zero, 0x2AC($s0)
    ctx->pc = 0x1cb1ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 684), GPR_U32(ctx, 0));
    // 0x1cb1d0: 0xae0002b0  sw          $zero, 0x2B0($s0)
    ctx->pc = 0x1cb1d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 688), GPR_U32(ctx, 0));
    // 0x1cb1d4: 0xae0002b4  sw          $zero, 0x2B4($s0)
    ctx->pc = 0x1cb1d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 692), GPR_U32(ctx, 0));
    // 0x1cb1d8: 0xae0002b8  sw          $zero, 0x2B8($s0)
    ctx->pc = 0x1cb1d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 696), GPR_U32(ctx, 0));
    // 0x1cb1dc: 0xae0002bc  sw          $zero, 0x2BC($s0)
    ctx->pc = 0x1cb1dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 700), GPR_U32(ctx, 0));
    // 0x1cb1e0: 0xae0002c0  sw          $zero, 0x2C0($s0)
    ctx->pc = 0x1cb1e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 704), GPR_U32(ctx, 0));
    // 0x1cb1e4: 0xae030258  sw          $v1, 0x258($s0)
    ctx->pc = 0x1cb1e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 600), GPR_U32(ctx, 3));
    // 0x1cb1e8: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x1CB1E8u;
    SET_GPR_U32(ctx, 31, 0x1CB1F0u);
    ctx->pc = 0x1CB1ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB1E8u;
    // 0x1cb1ec: 0xae02026c  sw          $v0, 0x26C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 620), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x1CB1E8u, 0x1CB1F0u)) {
        return;
    }
    ctx->pc = 0x1CB1F0u;
label_1cb1f0:
    // 0x1cb1f0: 0xc06db44  jal         func_1B6D10
    ctx->pc = 0x1CB1F0u;
    SET_GPR_U32(ctx, 31, 0x1CB1F8u);
    ctx->pc = 0x1CB1F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB1F0u;
    // 0x1cb1f4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6D10u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B6D10u, 0x1CB1F0u, 0x1CB1F8u)) {
        return;
    }
    ctx->pc = 0x1CB1F8u;
label_1cb1f8:
    // 0x1cb1f8: 0x26040274  addiu       $a0, $s0, 0x274
    ctx->pc = 0x1cb1f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 628));
    // 0x1cb1fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cb1fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb200: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x1cb200u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1cb204: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1CB204u;
    SET_GPR_U32(ctx, 31, 0x1CB20Cu);
    ctx->pc = 0x1CB208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB204u;
    // 0x1cb208: 0xae020260  sw          $v0, 0x260($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 608), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1CB204u, 0x1CB20Cu)) {
        return;
    }
    ctx->pc = 0x1CB20Cu;
label_1cb20c:
    // 0x1cb20c: 0x260402c4  addiu       $a0, $s0, 0x2C4
    ctx->pc = 0x1cb20cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 708));
    // 0x1cb210: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cb210u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb214: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1CB214u;
    SET_GPR_U32(ctx, 31, 0x1CB21Cu);
    ctx->pc = 0x1CB218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB214u;
    // 0x1cb218: 0x2406008c  addiu       $a2, $zero, 0x8C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1CB214u, 0x1CB21Cu)) {
        return;
    }
    ctx->pc = 0x1CB21Cu;
label_1cb21c:
    // 0x1cb21c: 0x26040350  addiu       $a0, $s0, 0x350
    ctx->pc = 0x1cb21cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 848));
    // 0x1cb220: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cb220u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb224: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1CB224u;
    SET_GPR_U32(ctx, 31, 0x1CB22Cu);
    ctx->pc = 0x1CB228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB224u;
    // 0x1cb228: 0x2406008c  addiu       $a2, $zero, 0x8C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1CB224u, 0x1CB22Cu)) {
        return;
    }
    ctx->pc = 0x1CB22Cu;
label_1cb22c:
    // 0x1cb22c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1cb22cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb230: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cb230u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb234: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1CB234u;
    SET_GPR_U32(ctx, 31, 0x1CB23Cu);
    ctx->pc = 0x1CB238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB234u;
    // 0x1cb238: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1CB234u, 0x1CB23Cu)) {
        return;
    }
    ctx->pc = 0x1CB23Cu;
label_1cb23c:
    // 0x1cb23c: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1cb23cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1cb240: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cb240u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb244: 0x24a5fc90  addiu       $a1, $a1, -0x370
    ctx->pc = 0x1cb244u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966416));
    // 0x1cb248: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1cb248u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb24c: 0xc065f2c  jal         func_197CB0
    ctx->pc = 0x1CB24Cu;
    SET_GPR_U32(ctx, 31, 0x1CB254u);
    ctx->pc = 0x1CB250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB24Cu;
    // 0x1cb250: 0x24070080  addiu       $a3, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197CB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197CB0u, 0x1CB24Cu, 0x1CB254u)) {
        return;
    }
    ctx->pc = 0x1CB254u;
label_1cb254:
    // 0x1cb254: 0x83a30000  lb          $v1, 0x0($sp)
    ctx->pc = 0x1cb254u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cb258: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CB258u;
    {
        const bool branch_taken_0x1cb258 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB258u;
        // 0x1cb25c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb258) {
            ctx->pc = 0x1CB26Cu;
            goto label_1cb26c;
        }
    }
    ctx->pc = 0x1CB260u;
    // 0x1cb260: 0xc081b56  jal         func_206D58
    ctx->pc = 0x1CB260u;
    SET_GPR_U32(ctx, 31, 0x1CB268u);
    ctx->pc = 0x1CB264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB260u;
    // 0x1cb264: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206D58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206D58u, 0x1CB260u, 0x1CB268u)) {
        return;
    }
    ctx->pc = 0x1CB268u;
label_1cb268:
    // 0x1cb268: 0xae0202ac  sw          $v0, 0x2AC($s0)
    ctx->pc = 0x1cb268u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 684), GPR_U32(ctx, 2));
label_1cb26c:
    // 0x1cb26c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1cb26cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb270: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cb270u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb274: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1CB274u;
    SET_GPR_U32(ctx, 31, 0x1CB27Cu);
    ctx->pc = 0x1CB278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB274u;
    // 0x1cb278: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1CB274u, 0x1CB27Cu)) {
        return;
    }
    ctx->pc = 0x1CB27Cu;
label_1cb27c:
    // 0x1cb27c: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1cb27cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1cb280: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cb280u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb284: 0x24a5fca8  addiu       $a1, $a1, -0x358
    ctx->pc = 0x1cb284u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966440));
    // 0x1cb288: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1cb288u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb28c: 0xc065f2c  jal         func_197CB0
    ctx->pc = 0x1CB28Cu;
    SET_GPR_U32(ctx, 31, 0x1CB294u);
    ctx->pc = 0x1CB290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB28Cu;
    // 0x1cb290: 0x24070080  addiu       $a3, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197CB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197CB0u, 0x1CB28Cu, 0x1CB294u)) {
        return;
    }
    ctx->pc = 0x1CB294u;
label_1cb294:
    // 0x1cb294: 0x83a30000  lb          $v1, 0x0($sp)
    ctx->pc = 0x1cb294u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cb298: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CB298u;
    {
        const bool branch_taken_0x1cb298 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB298u;
        // 0x1cb29c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb298) {
            ctx->pc = 0x1CB2ACu;
            goto label_1cb2ac;
        }
    }
    ctx->pc = 0x1CB2A0u;
    // 0x1cb2a0: 0xc081b56  jal         func_206D58
    ctx->pc = 0x1CB2A0u;
    SET_GPR_U32(ctx, 31, 0x1CB2A8u);
    ctx->pc = 0x1CB2A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB2A0u;
    // 0x1cb2a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206D58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206D58u, 0x1CB2A0u, 0x1CB2A8u)) {
        return;
    }
    ctx->pc = 0x1CB2A8u;
label_1cb2a8:
    // 0x1cb2a8: 0xae0202b0  sw          $v0, 0x2B0($s0)
    ctx->pc = 0x1cb2a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 688), GPR_U32(ctx, 2));
label_1cb2ac:
    // 0x1cb2ac: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1cb2acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb2b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cb2b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb2b4: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1CB2B4u;
    SET_GPR_U32(ctx, 31, 0x1CB2BCu);
    ctx->pc = 0x1CB2B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB2B4u;
    // 0x1cb2b8: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1CB2B4u, 0x1CB2BCu)) {
        return;
    }
    ctx->pc = 0x1CB2BCu;
label_1cb2bc:
    // 0x1cb2bc: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1cb2bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1cb2c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cb2c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb2c4: 0x24a5fcc0  addiu       $a1, $a1, -0x340
    ctx->pc = 0x1cb2c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966464));
    // 0x1cb2c8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1cb2c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb2cc: 0xc065f2c  jal         func_197CB0
    ctx->pc = 0x1CB2CCu;
    SET_GPR_U32(ctx, 31, 0x1CB2D4u);
    ctx->pc = 0x1CB2D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB2CCu;
    // 0x1cb2d0: 0x24070080  addiu       $a3, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197CB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197CB0u, 0x1CB2CCu, 0x1CB2D4u)) {
        return;
    }
    ctx->pc = 0x1CB2D4u;
label_1cb2d4:
    // 0x1cb2d4: 0x83a30000  lb          $v1, 0x0($sp)
    ctx->pc = 0x1cb2d4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cb2d8: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CB2D8u;
    {
        const bool branch_taken_0x1cb2d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB2D8u;
        // 0x1cb2dc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb2d8) {
            ctx->pc = 0x1CB2ECu;
            goto label_1cb2ec;
        }
    }
    ctx->pc = 0x1CB2E0u;
    // 0x1cb2e0: 0xc081b56  jal         func_206D58
    ctx->pc = 0x1CB2E0u;
    SET_GPR_U32(ctx, 31, 0x1CB2E8u);
    ctx->pc = 0x1CB2E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB2E0u;
    // 0x1cb2e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206D58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206D58u, 0x1CB2E0u, 0x1CB2E8u)) {
        return;
    }
    ctx->pc = 0x1CB2E8u;
label_1cb2e8:
    // 0x1cb2e8: 0xae0202b4  sw          $v0, 0x2B4($s0)
    ctx->pc = 0x1cb2e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 692), GPR_U32(ctx, 2));
label_1cb2ec:
    // 0x1cb2ec: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1cb2ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb2f0: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x1cb2f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1cb2f4: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x1cb2f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1cb2f8: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1cb2f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1cb2fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1CB2FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CB300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB2FCu;
        // 0x1cb300: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CB2FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CB304u;
    // 0x1cb304: 0x0  nop
    ctx->pc = 0x1cb304u;
    // NOP
    ctx->pc = 0x1cb308u;
}
