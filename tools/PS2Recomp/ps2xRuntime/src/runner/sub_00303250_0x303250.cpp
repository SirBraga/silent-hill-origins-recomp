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

// Function: sub_00303250
// Address: 0x303250 - 0x303370
void sub_00303250_0x303250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00303250_0x303250");
#endif

    switch (ctx->pc) {
        case 0x303274u: goto label_303274;
        case 0x3032a0u: goto label_3032a0;
        case 0x3032b0u: goto label_3032b0;
        case 0x3032c4u: goto label_3032c4;
        case 0x3032e0u: goto label_3032e0;
        case 0x3032f0u: goto label_3032f0;
        case 0x3032fcu: goto label_3032fc;
        case 0x303308u: goto label_303308;
        case 0x303314u: goto label_303314;
        case 0x303328u: goto label_303328;
        case 0x303344u: goto label_303344;
        case 0x303350u: goto label_303350;
        default: break;
    }

    ctx->pc = 0x303250u;

    // 0x303250: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x303250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x303254: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x303254u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x303258: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x303258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x30325c: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x30325cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x303260: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x303260u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303264: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x303264u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x303268: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x303268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x30326c: 0xc09270a  jal         func_249C28
    ctx->pc = 0x30326Cu;
    SET_GPR_U32(ctx, 31, 0x303274u);
    ctx->pc = 0x303270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30326Cu;
    // 0x303270: 0x27a70034  addiu       $a3, $sp, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249C28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249C28u, 0x30326Cu, 0x303274u)) {
        return;
    }
    ctx->pc = 0x303274u;
label_303274:
    // 0x303274: 0x10400036  beqz        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x303274u;
    {
        const bool branch_taken_0x303274 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x303278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303274u;
        // 0x303278: 0x8fa30034  lw          $v1, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303274) {
            ctx->pc = 0x303350u;
            goto label_303350;
        }
    }
    ctx->pc = 0x30327Cu;
    // 0x30327c: 0x3c02fffc  lui         $v0, 0xFFFC
    ctx->pc = 0x30327cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65532 << 16));
    // 0x303280: 0x3442b000  ori         $v0, $v0, 0xB000
    ctx->pc = 0x303280u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45056);
    // 0x303284: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x303284u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x303288: 0x2c632003  sltiu       $v1, $v1, 0x2003
    ctx->pc = 0x303288u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8195) ? 1 : 0);
    // 0x30328c: 0x10600028  beqz        $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x30328Cu;
    {
        const bool branch_taken_0x30328c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x303290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30328Cu;
        // 0x303290: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30328c) {
            ctx->pc = 0x303330u;
            goto label_303330;
        }
    }
    ctx->pc = 0x303294u;
    // 0x303294: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x303294u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303298: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x303298u;
    SET_GPR_U32(ctx, 31, 0x3032A0u);
    ctx->pc = 0x30329Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303298u;
    // 0x30329c: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x303298u, 0x3032A0u)) {
        return;
    }
    ctx->pc = 0x3032A0u;
label_3032a0:
    // 0x3032a0: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x3032a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3032a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3032a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3032a8: 0xc093546  jal         func_24D518
    ctx->pc = 0x3032A8u;
    SET_GPR_U32(ctx, 31, 0x3032B0u);
    ctx->pc = 0x3032ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3032A8u;
    // 0x3032ac: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D518u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D518u, 0x3032A8u, 0x3032B0u)) {
        return;
    }
    ctx->pc = 0x3032B0u;
label_3032b0:
    // 0x3032b0: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x3032b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3032b4: 0x14430027  bne         $v0, $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x3032B4u;
    {
        const bool branch_taken_0x3032b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3032B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3032B4u;
        // 0x3032b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3032b4) {
            ctx->pc = 0x303354u;
            goto label_303354;
        }
    }
    ctx->pc = 0x3032BCu;
    // 0x3032bc: 0xc08949c  jal         func_225270
    ctx->pc = 0x3032BCu;
    SET_GPR_U32(ctx, 31, 0x3032C4u);
    ctx->pc = 0x225270u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x225270u, 0x3032BCu, 0x3032C4u)) {
        return;
    }
    ctx->pc = 0x3032C4u;
label_3032c4:
    // 0x3032c4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3032c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3032c8: 0x12000021  beqz        $s0, . + 4 + (0x21 << 2)
    ctx->pc = 0x3032C8u;
    {
        const bool branch_taken_0x3032c8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3032CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3032C8u;
        // 0x3032cc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3032c8) {
            ctx->pc = 0x303350u;
            goto label_303350;
        }
    }
    ctx->pc = 0x3032D0u;
    // 0x3032d0: 0x3c04005c  lui         $a0, 0x5C
    ctx->pc = 0x3032d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)92 << 16));
    // 0x3032d4: 0x248402d0  addiu       $a0, $a0, 0x2D0
    ctx->pc = 0x3032d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 720));
    // 0x3032d8: 0xc093708  jal         func_24DC20
    ctx->pc = 0x3032D8u;
    SET_GPR_U32(ctx, 31, 0x3032E0u);
    ctx->pc = 0x3032DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3032D8u;
    // 0x3032dc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24DC20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24DC20u, 0x3032D8u, 0x3032E0u)) {
        return;
    }
    ctx->pc = 0x3032E0u;
label_3032e0:
    // 0x3032e0: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x3032E0u;
    {
        const bool branch_taken_0x3032e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3032E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3032E0u;
        // 0x3032e4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3032e0) {
            ctx->pc = 0x303350u;
            goto label_303350;
        }
    }
    ctx->pc = 0x3032E8u;
    // 0x3032e8: 0xc089456  jal         func_225158
    ctx->pc = 0x3032E8u;
    SET_GPR_U32(ctx, 31, 0x3032F0u);
    ctx->pc = 0x3032ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3032E8u;
    // 0x3032ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225158u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x225158u, 0x3032E8u, 0x3032F0u)) {
        return;
    }
    ctx->pc = 0x3032F0u;
label_3032f0:
    // 0x3032f0: 0x37a50008  ori         $a1, $sp, 0x8
    ctx->pc = 0x3032f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
    // 0x3032f4: 0xc0893aa  jal         func_224EA8
    ctx->pc = 0x3032F4u;
    SET_GPR_U32(ctx, 31, 0x3032FCu);
    ctx->pc = 0x3032F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3032F4u;
    // 0x3032f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224EA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x224EA8u, 0x3032F4u, 0x3032FCu)) {
        return;
    }
    ctx->pc = 0x3032FCu;
label_3032fc:
    // 0x3032fc: 0xc7ac0010  lwc1        $f12, 0x10($sp)
    ctx->pc = 0x3032fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x303300: 0xc0893bc  jal         func_224EF0
    ctx->pc = 0x303300u;
    SET_GPR_U32(ctx, 31, 0x303308u);
    ctx->pc = 0x303304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303300u;
    // 0x303304: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224EF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x224EF0u, 0x303300u, 0x303308u)) {
        return;
    }
    ctx->pc = 0x303308u;
label_303308:
    // 0x303308: 0xc7ac0014  lwc1        $f12, 0x14($sp)
    ctx->pc = 0x303308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x30330c: 0xc0893cc  jal         func_224F30
    ctx->pc = 0x30330Cu;
    SET_GPR_U32(ctx, 31, 0x303314u);
    ctx->pc = 0x303310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30330Cu;
    // 0x303310: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224F30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x224F30u, 0x30330Cu, 0x303314u)) {
        return;
    }
    ctx->pc = 0x303314u;
label_303314:
    // 0x303314: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x303314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x303318: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x303318u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30331c: 0xe6000088  swc1        $f0, 0x88($s0)
    ctx->pc = 0x30331cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 136), bits); }
    // 0x303320: 0xc089436  jal         func_2250D8
    ctx->pc = 0x303320u;
    SET_GPR_U32(ctx, 31, 0x303328u);
    ctx->pc = 0x303324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303320u;
    // 0x303324: 0x8fa5001c  lw          $a1, 0x1C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2250D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2250D8u, 0x303320u, 0x303328u)) {
        return;
    }
    ctx->pc = 0x303328u;
label_303328:
    // 0x303328: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x303328u;
    {
        const bool branch_taken_0x303328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30332Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303328u;
        // 0x30332c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303328) {
            ctx->pc = 0x303354u;
            goto label_303354;
        }
    }
    ctx->pc = 0x303330u;
label_303330:
    // 0x303330: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x303330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x303334: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x303334u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x303338: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x303338u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x30333c: 0xc092848  jal         func_24A120
    ctx->pc = 0x30333Cu;
    SET_GPR_U32(ctx, 31, 0x303344u);
    ctx->pc = 0x303340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30333Cu;
    // 0x303340: 0x34840004  ori         $a0, $a0, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x30333Cu, 0x303344u)) {
        return;
    }
    ctx->pc = 0x303344u;
label_303344:
    // 0x303344: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x303344u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x303348: 0xc09281a  jal         func_24A068
    ctx->pc = 0x303348u;
    SET_GPR_U32(ctx, 31, 0x303350u);
    ctx->pc = 0x30334Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303348u;
    // 0x30334c: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A068u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A068u, 0x303348u, 0x303350u)) {
        return;
    }
    ctx->pc = 0x303350u;
label_303350:
    // 0x303350: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x303350u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_303354:
    // 0x303354: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x303354u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x303358: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x303358u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x30335c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x30335cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x303360: 0x3e00008  jr          $ra
    ctx->pc = 0x303360u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x303364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303360u;
        // 0x303364: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x303360u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x303368u;
    // 0x303368: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x303368u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x30336c: 0x0  nop
    ctx->pc = 0x30336cu;
    // NOP
    ctx->pc = 0x303370u;
}
