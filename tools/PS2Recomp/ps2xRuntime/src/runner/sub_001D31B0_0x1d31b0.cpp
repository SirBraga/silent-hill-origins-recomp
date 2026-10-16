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

// Function: sub_001D31B0
// Address: 0x1d31b0 - 0x1d3270
void sub_001D31B0_0x1d31b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D31B0_0x1d31b0");
#endif

    switch (ctx->pc) {
        case 0x1d31b0u: goto label_1d31b0;
        case 0x1d31b4u: goto label_1d31b4;
        case 0x1d31b8u: goto label_1d31b8;
        case 0x1d31bcu: goto label_1d31bc;
        case 0x1d31c0u: goto label_1d31c0;
        case 0x1d31c4u: goto label_1d31c4;
        case 0x1d31c8u: goto label_1d31c8;
        case 0x1d31ccu: goto label_1d31cc;
        case 0x1d31d0u: goto label_1d31d0;
        case 0x1d31d4u: goto label_1d31d4;
        case 0x1d31d8u: goto label_1d31d8;
        case 0x1d31dcu: goto label_1d31dc;
        case 0x1d31e0u: goto label_1d31e0;
        case 0x1d31e4u: goto label_1d31e4;
        case 0x1d31e8u: goto label_1d31e8;
        case 0x1d31ecu: goto label_1d31ec;
        case 0x1d31f0u: goto label_1d31f0;
        case 0x1d31f4u: goto label_1d31f4;
        case 0x1d31f8u: goto label_1d31f8;
        case 0x1d31fcu: goto label_1d31fc;
        case 0x1d3200u: goto label_1d3200;
        case 0x1d3204u: goto label_1d3204;
        case 0x1d3208u: goto label_1d3208;
        case 0x1d320cu: goto label_1d320c;
        case 0x1d3210u: goto label_1d3210;
        case 0x1d3214u: goto label_1d3214;
        case 0x1d3218u: goto label_1d3218;
        case 0x1d321cu: goto label_1d321c;
        case 0x1d3220u: goto label_1d3220;
        case 0x1d3224u: goto label_1d3224;
        case 0x1d3228u: goto label_1d3228;
        case 0x1d322cu: goto label_1d322c;
        case 0x1d3230u: goto label_1d3230;
        case 0x1d3234u: goto label_1d3234;
        case 0x1d3238u: goto label_1d3238;
        case 0x1d323cu: goto label_1d323c;
        case 0x1d3240u: goto label_1d3240;
        case 0x1d3244u: goto label_1d3244;
        case 0x1d3248u: goto label_1d3248;
        case 0x1d324cu: goto label_1d324c;
        case 0x1d3250u: goto label_1d3250;
        case 0x1d3254u: goto label_1d3254;
        case 0x1d3258u: goto label_1d3258;
        case 0x1d325cu: goto label_1d325c;
        case 0x1d3260u: goto label_1d3260;
        case 0x1d3264u: goto label_1d3264;
        case 0x1d3268u: goto label_1d3268;
        case 0x1d326cu: goto label_1d326c;
        default: break;
    }

    ctx->pc = 0x1d31b0u;

label_1d31b0:
    // 0x1d31b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d31b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1d31b4:
    // 0x1d31b4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1d31b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1d31b8:
    // 0x1d31b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d31b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1d31bc:
    // 0x1d31bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d31bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1d31c0:
    // 0x1d31c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d31c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1d31c4:
    // 0x1d31c4: 0xc07d248  jal         func_1F4920
label_1d31c8:
    if (ctx->pc == 0x1D31C8u) {
        ctx->pc = 0x1D31C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D31C4u;
        // 0x1d31c8: 0x3c110034  lui         $s1, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D31CCu;
        goto label_1d31cc;
    }
    ctx->pc = 0x1D31C4u;
    SET_GPR_U32(ctx, 31, 0x1D31CCu);
    ctx->pc = 0x1D31C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D31C4u;
    // 0x1d31c8: 0x3c110034  lui         $s1, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)52 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4920u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4920u, 0x1D31C4u, 0x1D31CCu)) {
        return;
    }
    ctx->pc = 0x1D31CCu;
label_1d31cc:
    // 0x1d31cc: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1d31ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_1d31d0:
    // 0x1d31d0: 0x8e239b5c  lw          $v1, -0x64A4($s1)
    ctx->pc = 0x1d31d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294941532)));
label_1d31d4:
    // 0x1d31d4: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
label_1d31d8:
    if (ctx->pc == 0x1D31D8u) {
        ctx->pc = 0x1D31D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D31D4u;
        // 0x1d31d8: 0xac509b78  sw          $s0, -0x6488($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294941560), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D31DCu;
        goto label_1d31dc;
    }
    ctx->pc = 0x1D31D4u;
    {
        const bool branch_taken_0x1d31d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D31D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D31D4u;
        // 0x1d31d8: 0xac509b78  sw          $s0, -0x6488($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294941560), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d31d4) {
            ctx->pc = 0x1D31F4u;
            goto label_1d31f4;
        }
    }
    ctx->pc = 0x1D31DCu;
label_1d31dc:
    // 0x1d31dc: 0x240400a0  addiu       $a0, $zero, 0xA0
    ctx->pc = 0x1d31dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
label_1d31e0:
    // 0x1d31e0: 0xc0808f0  jal         func_2023C0
label_1d31e4:
    if (ctx->pc == 0x1D31E4u) {
        ctx->pc = 0x1D31E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D31E0u;
        // 0x1d31e4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D31E8u;
        goto label_1d31e8;
    }
    ctx->pc = 0x1D31E0u;
    SET_GPR_U32(ctx, 31, 0x1D31E8u);
    ctx->pc = 0x1D31E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D31E0u;
    // 0x1d31e4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x1D31E0u, 0x1D31E8u)) {
        return;
    }
    ctx->pc = 0x1D31E8u;
label_1d31e8:
    // 0x1d31e8: 0xc075700  jal         func_1D5C00
label_1d31ec:
    if (ctx->pc == 0x1D31ECu) {
        ctx->pc = 0x1D31ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D31E8u;
        // 0x1d31ec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D31F0u;
        goto label_1d31f0;
    }
    ctx->pc = 0x1D31E8u;
    SET_GPR_U32(ctx, 31, 0x1D31F0u);
    ctx->pc = 0x1D31ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D31E8u;
    // 0x1d31ec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5C00u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D5C00u, 0x1D31E8u, 0x1D31F0u)) {
        return;
    }
    ctx->pc = 0x1D31F0u;
label_1d31f0:
    // 0x1d31f0: 0xae229b5c  sw          $v0, -0x64A4($s1)
    ctx->pc = 0x1d31f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294941532), GPR_U32(ctx, 2));
label_1d31f4:
    // 0x1d31f4: 0x3c100034  lui         $s0, 0x34
    ctx->pc = 0x1d31f4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)52 << 16));
label_1d31f8:
    // 0x1d31f8: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1d31f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_1d31fc:
    // 0x1d31fc: 0x8e049b70  lw          $a0, -0x6490($s0)
    ctx->pc = 0x1d31fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294941552)));
label_1d3200:
    // 0x1d3200: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_1d3204:
    if (ctx->pc == 0x1D3204u) {
        ctx->pc = 0x1D3204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3200u;
        // 0x1d3204: 0xac409b60  sw          $zero, -0x64A0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294941536), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D3208u;
        goto label_1d3208;
    }
    ctx->pc = 0x1D3200u;
    {
        const bool branch_taken_0x1d3200 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3200u;
        // 0x1d3204: 0xac409b60  sw          $zero, -0x64A0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294941536), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3200) {
            ctx->pc = 0x1D3210u;
            goto label_1d3210;
        }
    }
    ctx->pc = 0x1D3208u;
label_1d3208:
    // 0x1d3208: 0xc0808b8  jal         func_2022E0
label_1d320c:
    if (ctx->pc == 0x1D320Cu) {
        ctx->pc = 0x1D3210u;
        goto label_1d3210;
    }
    ctx->pc = 0x1D3208u;
    SET_GPR_U32(ctx, 31, 0x1D3210u);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x1D3208u, 0x1D3210u)) {
        return;
    }
    ctx->pc = 0x1D3210u;
label_1d3210:
    // 0x1d3210: 0x3c03001d  lui         $v1, 0x1D
    ctx->pc = 0x1d3210u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)29 << 16));
label_1d3214:
    // 0x1d3214: 0x8e289b5c  lw          $t0, -0x64A4($s1)
    ctx->pc = 0x1d3214u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294941532)));
label_1d3218:
    // 0x1d3218: 0x3c050034  lui         $a1, 0x34
    ctx->pc = 0x1d3218u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)52 << 16));
label_1d321c:
    // 0x1d321c: 0x24632208  addiu       $v1, $v1, 0x2208
    ctx->pc = 0x1d321cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8712));
label_1d3220:
    // 0x1d3220: 0x3c060034  lui         $a2, 0x34
    ctx->pc = 0x1d3220u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)52 << 16));
label_1d3224:
    // 0x1d3224: 0x3c070034  lui         $a3, 0x34
    ctx->pc = 0x1d3224u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)52 << 16));
label_1d3228:
    // 0x1d3228: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x1d3228u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
label_1d322c:
    // 0x1d322c: 0xacc39b68  sw          $v1, -0x6498($a2)
    ctx->pc = 0x1d322cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294941544), GPR_U32(ctx, 3));
label_1d3230:
    // 0x1d3230: 0xaca29b74  sw          $v0, -0x648C($a1)
    ctx->pc = 0x1d3230u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294941556), GPR_U32(ctx, 2));
label_1d3234:
    // 0x1d3234: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x1d3234u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1d3238:
    // 0x1d3238: 0xae009b70  sw          $zero, -0x6490($s0)
    ctx->pc = 0x1d3238u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294941552), GPR_U32(ctx, 0));
label_1d323c:
    // 0x1d323c: 0xace09b6c  sw          $zero, -0x6494($a3)
    ctx->pc = 0x1d323cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294941548), GPR_U32(ctx, 0));
label_1d3240:
    // 0x1d3240: 0xad040004  sw          $a0, 0x4($t0)
    ctx->pc = 0x1d3240u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 4));
label_1d3244:
    // 0x1d3244: 0x8e259b5c  lw          $a1, -0x64A4($s1)
    ctx->pc = 0x1d3244u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294941532)));
label_1d3248:
    // 0x1d3248: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x1d3248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_1d324c:
    // 0x1d324c: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x1d324cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_1d3250:
    // 0x1d3250: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x1d3250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_1d3254:
    // 0x1d3254: 0x60f809  jalr        $v1
label_1d3258:
    if (ctx->pc == 0x1D3258u) {
        ctx->pc = 0x1D3258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3254u;
        // 0x1d3258: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D325Cu;
        goto label_1d325c;
    }
    ctx->pc = 0x1D3254u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1D325Cu);
        ctx->pc = 0x1D3258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3254u;
        // 0x1d3258: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D3254u, 0x1D325Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D325Cu;
label_1d325c:
    // 0x1d325c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1d325cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1d3260:
    // 0x1d3260: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d3260u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1d3264:
    // 0x1d3264: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d3264u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d3268:
    // 0x1d3268: 0x3e00008  jr          $ra
label_1d326c:
    if (ctx->pc == 0x1D326Cu) {
        ctx->pc = 0x1D326Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3268u;
        // 0x1d326c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D3270u;
        goto label_fallthrough_0x1d3268;
    }
    ctx->pc = 0x1D3268u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D326Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3268u;
        // 0x1d326c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D3268u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1d3268:
    ctx->pc = 0x1D3270u;
}
