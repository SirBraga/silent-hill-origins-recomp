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

// Function: sub_001921A8
// Address: 0x1921a8 - 0x1922d0
void sub_001921A8_0x1921a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001921A8_0x1921a8");
#endif

    switch (ctx->pc) {
        case 0x1921ccu: goto label_1921cc;
        case 0x1921d8u: goto label_1921d8;
        case 0x1921e4u: goto label_1921e4;
        case 0x1921f0u: goto label_1921f0;
        case 0x1921fcu: goto label_1921fc;
        case 0x192208u: goto label_192208;
        case 0x192214u: goto label_192214;
        case 0x192220u: goto label_192220;
        case 0x19222cu: goto label_19222c;
        case 0x192240u: goto label_192240;
        case 0x192250u: goto label_192250;
        case 0x192260u: goto label_192260;
        case 0x192270u: goto label_192270;
        case 0x192280u: goto label_192280;
        case 0x192290u: goto label_192290;
        case 0x1922a0u: goto label_1922a0;
        case 0x1922b0u: goto label_1922b0;
        case 0x1922c0u: goto label_1922c0;
        default: break;
    }

    ctx->pc = 0x1921a8u;

    // 0x1921a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1921a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1921ac: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1921acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1921b0: 0x14a20043  bne         $a1, $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x1921B0u;
    {
        const bool branch_taken_0x1921b0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1921B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1921B0u;
        // 0x1921b4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1921b0) {
            ctx->pc = 0x1922C0u;
            goto label_1922c0;
        }
    }
    ctx->pc = 0x1921B8u;
    // 0x1921b8: 0x5080001e  beql        $a0, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x1921B8u;
    {
        const bool branch_taken_0x1921b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1921b8) {
            ctx->pc = 0x1921BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1921B8u;
            // 0x1921bc: 0x3c04006d  lui         $a0, 0x6D (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)109 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x192234u;
            goto label_192234;
        }
    }
    ctx->pc = 0x1921C0u;
    // 0x1921c0: 0x3c04006d  lui         $a0, 0x6D
    ctx->pc = 0x1921c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)109 << 16));
    // 0x1921c4: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x1921C4u;
    SET_GPR_U32(ctx, 31, 0x1921CCu);
    ctx->pc = 0x1921C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1921C4u;
    // 0x1921c8: 0x2484bda8  addiu       $a0, $a0, -0x4258 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950312));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x1921C4u, 0x1921CCu)) {
        return;
    }
    ctx->pc = 0x1921CCu;
label_1921cc:
    // 0x1921cc: 0x3c04006d  lui         $a0, 0x6D
    ctx->pc = 0x1921ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)109 << 16));
    // 0x1921d0: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x1921D0u;
    SET_GPR_U32(ctx, 31, 0x1921D8u);
    ctx->pc = 0x1921D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1921D0u;
    // 0x1921d4: 0x2484bdb0  addiu       $a0, $a0, -0x4250 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x1921D0u, 0x1921D8u)) {
        return;
    }
    ctx->pc = 0x1921D8u;
label_1921d8:
    // 0x1921d8: 0x3c04006d  lui         $a0, 0x6D
    ctx->pc = 0x1921d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)109 << 16));
    // 0x1921dc: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x1921DCu;
    SET_GPR_U32(ctx, 31, 0x1921E4u);
    ctx->pc = 0x1921E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1921DCu;
    // 0x1921e0: 0x2484bdb8  addiu       $a0, $a0, -0x4248 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950328));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x1921DCu, 0x1921E4u)) {
        return;
    }
    ctx->pc = 0x1921E4u;
label_1921e4:
    // 0x1921e4: 0x3c04006d  lui         $a0, 0x6D
    ctx->pc = 0x1921e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)109 << 16));
    // 0x1921e8: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x1921E8u;
    SET_GPR_U32(ctx, 31, 0x1921F0u);
    ctx->pc = 0x1921ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1921E8u;
    // 0x1921ec: 0x2484bdc0  addiu       $a0, $a0, -0x4240 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x1921E8u, 0x1921F0u)) {
        return;
    }
    ctx->pc = 0x1921F0u;
label_1921f0:
    // 0x1921f0: 0x3c04006d  lui         $a0, 0x6D
    ctx->pc = 0x1921f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)109 << 16));
    // 0x1921f4: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x1921F4u;
    SET_GPR_U32(ctx, 31, 0x1921FCu);
    ctx->pc = 0x1921F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1921F4u;
    // 0x1921f8: 0x2484bdc8  addiu       $a0, $a0, -0x4238 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950344));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x1921F4u, 0x1921FCu)) {
        return;
    }
    ctx->pc = 0x1921FCu;
label_1921fc:
    // 0x1921fc: 0x3c04006d  lui         $a0, 0x6D
    ctx->pc = 0x1921fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)109 << 16));
    // 0x192200: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x192200u;
    SET_GPR_U32(ctx, 31, 0x192208u);
    ctx->pc = 0x192204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192200u;
    // 0x192204: 0x2484bdd0  addiu       $a0, $a0, -0x4230 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x192200u, 0x192208u)) {
        return;
    }
    ctx->pc = 0x192208u;
label_192208:
    // 0x192208: 0x3c04006d  lui         $a0, 0x6D
    ctx->pc = 0x192208u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)109 << 16));
    // 0x19220c: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x19220Cu;
    SET_GPR_U32(ctx, 31, 0x192214u);
    ctx->pc = 0x192210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19220Cu;
    // 0x192210: 0x2484bdd8  addiu       $a0, $a0, -0x4228 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x19220Cu, 0x192214u)) {
        return;
    }
    ctx->pc = 0x192214u;
label_192214:
    // 0x192214: 0x3c04006d  lui         $a0, 0x6D
    ctx->pc = 0x192214u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)109 << 16));
    // 0x192218: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x192218u;
    SET_GPR_U32(ctx, 31, 0x192220u);
    ctx->pc = 0x19221Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192218u;
    // 0x19221c: 0x2484bde0  addiu       $a0, $a0, -0x4220 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x192218u, 0x192220u)) {
        return;
    }
    ctx->pc = 0x192220u;
label_192220:
    // 0x192220: 0x3c04006d  lui         $a0, 0x6D
    ctx->pc = 0x192220u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)109 << 16));
    // 0x192224: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x192224u;
    SET_GPR_U32(ctx, 31, 0x19222Cu);
    ctx->pc = 0x192228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192224u;
    // 0x192228: 0x2484bde8  addiu       $a0, $a0, -0x4218 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x192224u, 0x19222Cu)) {
        return;
    }
    ctx->pc = 0x19222Cu;
label_19222c:
    // 0x19222c: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x19222Cu;
    {
        const bool branch_taken_0x19222c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x192230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19222Cu;
        // 0x192230: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19222c) {
            ctx->pc = 0x1922C4u;
            goto label_1922c4;
        }
    }
    ctx->pc = 0x192234u;
label_192234:
    // 0x192234: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x192234u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x192238: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x192238u;
    SET_GPR_U32(ctx, 31, 0x192240u);
    ctx->pc = 0x19223Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192238u;
    // 0x19223c: 0x2484bde8  addiu       $a0, $a0, -0x4218 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x192238u, 0x192240u)) {
        return;
    }
    ctx->pc = 0x192240u;
label_192240:
    // 0x192240: 0x3c04006d  lui         $a0, 0x6D
    ctx->pc = 0x192240u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)109 << 16));
    // 0x192244: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x192244u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x192248: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x192248u;
    SET_GPR_U32(ctx, 31, 0x192250u);
    ctx->pc = 0x19224Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192248u;
    // 0x19224c: 0x2484bde0  addiu       $a0, $a0, -0x4220 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x192248u, 0x192250u)) {
        return;
    }
    ctx->pc = 0x192250u;
label_192250:
    // 0x192250: 0x3c04006d  lui         $a0, 0x6D
    ctx->pc = 0x192250u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)109 << 16));
    // 0x192254: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x192254u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x192258: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x192258u;
    SET_GPR_U32(ctx, 31, 0x192260u);
    ctx->pc = 0x19225Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192258u;
    // 0x19225c: 0x2484bdd8  addiu       $a0, $a0, -0x4228 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x192258u, 0x192260u)) {
        return;
    }
    ctx->pc = 0x192260u;
label_192260:
    // 0x192260: 0x3c04006d  lui         $a0, 0x6D
    ctx->pc = 0x192260u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)109 << 16));
    // 0x192264: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x192264u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x192268: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x192268u;
    SET_GPR_U32(ctx, 31, 0x192270u);
    ctx->pc = 0x19226Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192268u;
    // 0x19226c: 0x2484bdd0  addiu       $a0, $a0, -0x4230 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x192268u, 0x192270u)) {
        return;
    }
    ctx->pc = 0x192270u;
label_192270:
    // 0x192270: 0x3c04006d  lui         $a0, 0x6D
    ctx->pc = 0x192270u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)109 << 16));
    // 0x192274: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x192274u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x192278: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x192278u;
    SET_GPR_U32(ctx, 31, 0x192280u);
    ctx->pc = 0x19227Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192278u;
    // 0x19227c: 0x2484bdc8  addiu       $a0, $a0, -0x4238 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950344));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x192278u, 0x192280u)) {
        return;
    }
    ctx->pc = 0x192280u;
label_192280:
    // 0x192280: 0x3c04006d  lui         $a0, 0x6D
    ctx->pc = 0x192280u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)109 << 16));
    // 0x192284: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x192284u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x192288: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x192288u;
    SET_GPR_U32(ctx, 31, 0x192290u);
    ctx->pc = 0x19228Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192288u;
    // 0x19228c: 0x2484bdc0  addiu       $a0, $a0, -0x4240 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x192288u, 0x192290u)) {
        return;
    }
    ctx->pc = 0x192290u;
label_192290:
    // 0x192290: 0x3c04006d  lui         $a0, 0x6D
    ctx->pc = 0x192290u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)109 << 16));
    // 0x192294: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x192294u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x192298: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x192298u;
    SET_GPR_U32(ctx, 31, 0x1922A0u);
    ctx->pc = 0x19229Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192298u;
    // 0x19229c: 0x2484bdb8  addiu       $a0, $a0, -0x4248 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950328));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x192298u, 0x1922A0u)) {
        return;
    }
    ctx->pc = 0x1922A0u;
label_1922a0:
    // 0x1922a0: 0x3c04006d  lui         $a0, 0x6D
    ctx->pc = 0x1922a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)109 << 16));
    // 0x1922a4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1922a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1922a8: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x1922A8u;
    SET_GPR_U32(ctx, 31, 0x1922B0u);
    ctx->pc = 0x1922ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1922A8u;
    // 0x1922ac: 0x2484bdb0  addiu       $a0, $a0, -0x4250 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x1922A8u, 0x1922B0u)) {
        return;
    }
    ctx->pc = 0x1922B0u;
label_1922b0:
    // 0x1922b0: 0x3c04006d  lui         $a0, 0x6D
    ctx->pc = 0x1922b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)109 << 16));
    // 0x1922b4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1922b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1922b8: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x1922B8u;
    SET_GPR_U32(ctx, 31, 0x1922C0u);
    ctx->pc = 0x1922BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1922B8u;
    // 0x1922bc: 0x2484bda8  addiu       $a0, $a0, -0x4258 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950312));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x1922B8u, 0x1922C0u)) {
        return;
    }
    ctx->pc = 0x1922C0u;
label_1922c0:
    // 0x1922c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1922c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1922c4:
    // 0x1922c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1922C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1922C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1922C4u;
        // 0x1922c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1922C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1922CCu;
    // 0x1922cc: 0x0  nop
    ctx->pc = 0x1922ccu;
    // NOP
    ctx->pc = 0x1922d0u;
}
