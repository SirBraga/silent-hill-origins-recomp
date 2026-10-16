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

// Function: sub_001D30F0
// Address: 0x1d30f0 - 0x1d31b0
void sub_001D30F0_0x1d30f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D30F0_0x1d30f0");
#endif

    switch (ctx->pc) {
        case 0x1d30f0u: goto label_1d30f0;
        case 0x1d30f4u: goto label_1d30f4;
        case 0x1d30f8u: goto label_1d30f8;
        case 0x1d30fcu: goto label_1d30fc;
        case 0x1d3100u: goto label_1d3100;
        case 0x1d3104u: goto label_1d3104;
        case 0x1d3108u: goto label_1d3108;
        case 0x1d310cu: goto label_1d310c;
        case 0x1d3110u: goto label_1d3110;
        case 0x1d3114u: goto label_1d3114;
        case 0x1d3118u: goto label_1d3118;
        case 0x1d311cu: goto label_1d311c;
        case 0x1d3120u: goto label_1d3120;
        case 0x1d3124u: goto label_1d3124;
        case 0x1d3128u: goto label_1d3128;
        case 0x1d312cu: goto label_1d312c;
        case 0x1d3130u: goto label_1d3130;
        case 0x1d3134u: goto label_1d3134;
        case 0x1d3138u: goto label_1d3138;
        case 0x1d313cu: goto label_1d313c;
        case 0x1d3140u: goto label_1d3140;
        case 0x1d3144u: goto label_1d3144;
        case 0x1d3148u: goto label_1d3148;
        case 0x1d314cu: goto label_1d314c;
        case 0x1d3150u: goto label_1d3150;
        case 0x1d3154u: goto label_1d3154;
        case 0x1d3158u: goto label_1d3158;
        case 0x1d315cu: goto label_1d315c;
        case 0x1d3160u: goto label_1d3160;
        case 0x1d3164u: goto label_1d3164;
        case 0x1d3168u: goto label_1d3168;
        case 0x1d316cu: goto label_1d316c;
        case 0x1d3170u: goto label_1d3170;
        case 0x1d3174u: goto label_1d3174;
        case 0x1d3178u: goto label_1d3178;
        case 0x1d317cu: goto label_1d317c;
        case 0x1d3180u: goto label_1d3180;
        case 0x1d3184u: goto label_1d3184;
        case 0x1d3188u: goto label_1d3188;
        case 0x1d318cu: goto label_1d318c;
        case 0x1d3190u: goto label_1d3190;
        case 0x1d3194u: goto label_1d3194;
        case 0x1d3198u: goto label_1d3198;
        case 0x1d319cu: goto label_1d319c;
        case 0x1d31a0u: goto label_1d31a0;
        case 0x1d31a4u: goto label_1d31a4;
        case 0x1d31a8u: goto label_1d31a8;
        case 0x1d31acu: goto label_1d31ac;
        default: break;
    }

    ctx->pc = 0x1d30f0u;

label_1d30f0:
    // 0x1d30f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d30f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1d30f4:
    // 0x1d30f4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1d30f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1d30f8:
    // 0x1d30f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d30f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1d30fc:
    // 0x1d30fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d30fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1d3100:
    // 0x1d3100: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d3100u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1d3104:
    // 0x1d3104: 0xc07d248  jal         func_1F4920
label_1d3108:
    if (ctx->pc == 0x1D3108u) {
        ctx->pc = 0x1D3108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3104u;
        // 0x1d3108: 0x3c110034  lui         $s1, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D310Cu;
        goto label_1d310c;
    }
    ctx->pc = 0x1D3104u;
    SET_GPR_U32(ctx, 31, 0x1D310Cu);
    ctx->pc = 0x1D3108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3104u;
    // 0x1d3108: 0x3c110034  lui         $s1, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)52 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4920u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4920u, 0x1D3104u, 0x1D310Cu)) {
        return;
    }
    ctx->pc = 0x1D310Cu;
label_1d310c:
    // 0x1d310c: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1d310cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_1d3110:
    // 0x1d3110: 0x8e239b5c  lw          $v1, -0x64A4($s1)
    ctx->pc = 0x1d3110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294941532)));
label_1d3114:
    // 0x1d3114: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
label_1d3118:
    if (ctx->pc == 0x1D3118u) {
        ctx->pc = 0x1D3118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3114u;
        // 0x1d3118: 0xac509b78  sw          $s0, -0x6488($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294941560), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D311Cu;
        goto label_1d311c;
    }
    ctx->pc = 0x1D3114u;
    {
        const bool branch_taken_0x1d3114 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D3118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3114u;
        // 0x1d3118: 0xac509b78  sw          $s0, -0x6488($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294941560), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3114) {
            ctx->pc = 0x1D3134u;
            goto label_1d3134;
        }
    }
    ctx->pc = 0x1D311Cu;
label_1d311c:
    // 0x1d311c: 0x240400a0  addiu       $a0, $zero, 0xA0
    ctx->pc = 0x1d311cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
label_1d3120:
    // 0x1d3120: 0xc0808f0  jal         func_2023C0
label_1d3124:
    if (ctx->pc == 0x1D3124u) {
        ctx->pc = 0x1D3124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3120u;
        // 0x1d3124: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D3128u;
        goto label_1d3128;
    }
    ctx->pc = 0x1D3120u;
    SET_GPR_U32(ctx, 31, 0x1D3128u);
    ctx->pc = 0x1D3124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3120u;
    // 0x1d3124: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x1D3120u, 0x1D3128u)) {
        return;
    }
    ctx->pc = 0x1D3128u;
label_1d3128:
    // 0x1d3128: 0xc075700  jal         func_1D5C00
label_1d312c:
    if (ctx->pc == 0x1D312Cu) {
        ctx->pc = 0x1D312Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3128u;
        // 0x1d312c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D3130u;
        goto label_1d3130;
    }
    ctx->pc = 0x1D3128u;
    SET_GPR_U32(ctx, 31, 0x1D3130u);
    ctx->pc = 0x1D312Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3128u;
    // 0x1d312c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5C00u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D5C00u, 0x1D3128u, 0x1D3130u)) {
        return;
    }
    ctx->pc = 0x1D3130u;
label_1d3130:
    // 0x1d3130: 0xae229b5c  sw          $v0, -0x64A4($s1)
    ctx->pc = 0x1d3130u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294941532), GPR_U32(ctx, 2));
label_1d3134:
    // 0x1d3134: 0x3c100034  lui         $s0, 0x34
    ctx->pc = 0x1d3134u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)52 << 16));
label_1d3138:
    // 0x1d3138: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1d3138u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_1d313c:
    // 0x1d313c: 0x8e049b70  lw          $a0, -0x6490($s0)
    ctx->pc = 0x1d313cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294941552)));
label_1d3140:
    // 0x1d3140: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_1d3144:
    if (ctx->pc == 0x1D3144u) {
        ctx->pc = 0x1D3144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3140u;
        // 0x1d3144: 0xac409b60  sw          $zero, -0x64A0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294941536), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D3148u;
        goto label_1d3148;
    }
    ctx->pc = 0x1D3140u;
    {
        const bool branch_taken_0x1d3140 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3140u;
        // 0x1d3144: 0xac409b60  sw          $zero, -0x64A0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294941536), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3140) {
            ctx->pc = 0x1D3150u;
            goto label_1d3150;
        }
    }
    ctx->pc = 0x1D3148u;
label_1d3148:
    // 0x1d3148: 0xc0808b8  jal         func_2022E0
label_1d314c:
    if (ctx->pc == 0x1D314Cu) {
        ctx->pc = 0x1D3150u;
        goto label_1d3150;
    }
    ctx->pc = 0x1D3148u;
    SET_GPR_U32(ctx, 31, 0x1D3150u);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x1D3148u, 0x1D3150u)) {
        return;
    }
    ctx->pc = 0x1D3150u;
label_1d3150:
    // 0x1d3150: 0x3c03001d  lui         $v1, 0x1D
    ctx->pc = 0x1d3150u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)29 << 16));
label_1d3154:
    // 0x1d3154: 0x8e289b5c  lw          $t0, -0x64A4($s1)
    ctx->pc = 0x1d3154u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294941532)));
label_1d3158:
    // 0x1d3158: 0x3c050034  lui         $a1, 0x34
    ctx->pc = 0x1d3158u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)52 << 16));
label_1d315c:
    // 0x1d315c: 0x24632208  addiu       $v1, $v1, 0x2208
    ctx->pc = 0x1d315cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8712));
label_1d3160:
    // 0x1d3160: 0x3c060034  lui         $a2, 0x34
    ctx->pc = 0x1d3160u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)52 << 16));
label_1d3164:
    // 0x1d3164: 0x3c070034  lui         $a3, 0x34
    ctx->pc = 0x1d3164u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)52 << 16));
label_1d3168:
    // 0x1d3168: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x1d3168u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
label_1d316c:
    // 0x1d316c: 0xacc39b68  sw          $v1, -0x6498($a2)
    ctx->pc = 0x1d316cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294941544), GPR_U32(ctx, 3));
label_1d3170:
    // 0x1d3170: 0xaca29b74  sw          $v0, -0x648C($a1)
    ctx->pc = 0x1d3170u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294941556), GPR_U32(ctx, 2));
label_1d3174:
    // 0x1d3174: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x1d3174u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1d3178:
    // 0x1d3178: 0xae009b70  sw          $zero, -0x6490($s0)
    ctx->pc = 0x1d3178u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294941552), GPR_U32(ctx, 0));
label_1d317c:
    // 0x1d317c: 0xace09b6c  sw          $zero, -0x6494($a3)
    ctx->pc = 0x1d317cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294941548), GPR_U32(ctx, 0));
label_1d3180:
    // 0x1d3180: 0xad040004  sw          $a0, 0x4($t0)
    ctx->pc = 0x1d3180u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 4));
label_1d3184:
    // 0x1d3184: 0x8e259b5c  lw          $a1, -0x64A4($s1)
    ctx->pc = 0x1d3184u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294941532)));
label_1d3188:
    // 0x1d3188: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x1d3188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_1d318c:
    // 0x1d318c: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x1d318cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_1d3190:
    // 0x1d3190: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x1d3190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_1d3194:
    // 0x1d3194: 0x60f809  jalr        $v1
label_1d3198:
    if (ctx->pc == 0x1D3198u) {
        ctx->pc = 0x1D3198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3194u;
        // 0x1d3198: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D319Cu;
        goto label_1d319c;
    }
    ctx->pc = 0x1D3194u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1D319Cu);
        ctx->pc = 0x1D3198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3194u;
        // 0x1d3198: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D3194u, 0x1D319Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D319Cu;
label_1d319c:
    // 0x1d319c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1d319cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1d31a0:
    // 0x1d31a0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d31a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1d31a4:
    // 0x1d31a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d31a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d31a8:
    // 0x1d31a8: 0x3e00008  jr          $ra
label_1d31ac:
    if (ctx->pc == 0x1D31ACu) {
        ctx->pc = 0x1D31ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D31A8u;
        // 0x1d31ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D31B0u;
        goto label_fallthrough_0x1d31a8;
    }
    ctx->pc = 0x1D31A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D31ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D31A8u;
        // 0x1d31ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D31A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1d31a8:
    ctx->pc = 0x1D31B0u;
}
