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

// Function: sub_002DED18
// Address: 0x2ded18 - 0x2df138
void sub_002DED18_0x2ded18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DED18_0x2ded18");
#endif

    switch (ctx->pc) {
        case 0x2ded18u: goto label_2ded18;
        case 0x2ded1cu: goto label_2ded1c;
        case 0x2ded20u: goto label_2ded20;
        case 0x2ded24u: goto label_2ded24;
        case 0x2ded28u: goto label_2ded28;
        case 0x2ded2cu: goto label_2ded2c;
        case 0x2ded30u: goto label_2ded30;
        case 0x2ded34u: goto label_2ded34;
        case 0x2ded38u: goto label_2ded38;
        case 0x2ded3cu: goto label_2ded3c;
        case 0x2ded40u: goto label_2ded40;
        case 0x2ded44u: goto label_2ded44;
        case 0x2ded48u: goto label_2ded48;
        case 0x2ded4cu: goto label_2ded4c;
        case 0x2ded50u: goto label_2ded50;
        case 0x2ded54u: goto label_2ded54;
        case 0x2ded58u: goto label_2ded58;
        case 0x2ded5cu: goto label_2ded5c;
        case 0x2ded60u: goto label_2ded60;
        case 0x2ded64u: goto label_2ded64;
        case 0x2ded68u: goto label_2ded68;
        case 0x2ded6cu: goto label_2ded6c;
        case 0x2ded70u: goto label_2ded70;
        case 0x2ded74u: goto label_2ded74;
        case 0x2ded78u: goto label_2ded78;
        case 0x2ded7cu: goto label_2ded7c;
        case 0x2ded80u: goto label_2ded80;
        case 0x2ded84u: goto label_2ded84;
        case 0x2ded88u: goto label_2ded88;
        case 0x2ded8cu: goto label_2ded8c;
        case 0x2ded90u: goto label_2ded90;
        case 0x2ded94u: goto label_2ded94;
        case 0x2ded98u: goto label_2ded98;
        case 0x2ded9cu: goto label_2ded9c;
        case 0x2deda0u: goto label_2deda0;
        case 0x2deda4u: goto label_2deda4;
        case 0x2deda8u: goto label_2deda8;
        case 0x2dedacu: goto label_2dedac;
        case 0x2dedb0u: goto label_2dedb0;
        case 0x2dedb4u: goto label_2dedb4;
        case 0x2dedb8u: goto label_2dedb8;
        case 0x2dedbcu: goto label_2dedbc;
        case 0x2dedc0u: goto label_2dedc0;
        case 0x2dedc4u: goto label_2dedc4;
        case 0x2dedc8u: goto label_2dedc8;
        case 0x2dedccu: goto label_2dedcc;
        case 0x2dedd0u: goto label_2dedd0;
        case 0x2dedd4u: goto label_2dedd4;
        case 0x2dedd8u: goto label_2dedd8;
        case 0x2deddcu: goto label_2deddc;
        case 0x2dede0u: goto label_2dede0;
        case 0x2dede4u: goto label_2dede4;
        case 0x2dede8u: goto label_2dede8;
        case 0x2dedecu: goto label_2dedec;
        case 0x2dedf0u: goto label_2dedf0;
        case 0x2dedf4u: goto label_2dedf4;
        case 0x2dedf8u: goto label_2dedf8;
        case 0x2dedfcu: goto label_2dedfc;
        case 0x2dee00u: goto label_2dee00;
        case 0x2dee04u: goto label_2dee04;
        case 0x2dee08u: goto label_2dee08;
        case 0x2dee0cu: goto label_2dee0c;
        case 0x2dee10u: goto label_2dee10;
        case 0x2dee14u: goto label_2dee14;
        case 0x2dee18u: goto label_2dee18;
        case 0x2dee1cu: goto label_2dee1c;
        case 0x2dee20u: goto label_2dee20;
        case 0x2dee24u: goto label_2dee24;
        case 0x2dee28u: goto label_2dee28;
        case 0x2dee2cu: goto label_2dee2c;
        case 0x2dee30u: goto label_2dee30;
        case 0x2dee34u: goto label_2dee34;
        case 0x2dee38u: goto label_2dee38;
        case 0x2dee3cu: goto label_2dee3c;
        case 0x2dee40u: goto label_2dee40;
        case 0x2dee44u: goto label_2dee44;
        case 0x2dee48u: goto label_2dee48;
        case 0x2dee4cu: goto label_2dee4c;
        case 0x2dee50u: goto label_2dee50;
        case 0x2dee54u: goto label_2dee54;
        case 0x2dee58u: goto label_2dee58;
        case 0x2dee5cu: goto label_2dee5c;
        case 0x2dee60u: goto label_2dee60;
        case 0x2dee64u: goto label_2dee64;
        case 0x2dee68u: goto label_2dee68;
        case 0x2dee6cu: goto label_2dee6c;
        case 0x2dee70u: goto label_2dee70;
        case 0x2dee74u: goto label_2dee74;
        case 0x2dee78u: goto label_2dee78;
        case 0x2dee7cu: goto label_2dee7c;
        case 0x2dee80u: goto label_2dee80;
        case 0x2dee84u: goto label_2dee84;
        case 0x2dee88u: goto label_2dee88;
        case 0x2dee8cu: goto label_2dee8c;
        case 0x2dee90u: goto label_2dee90;
        case 0x2dee94u: goto label_2dee94;
        case 0x2dee98u: goto label_2dee98;
        case 0x2dee9cu: goto label_2dee9c;
        case 0x2deea0u: goto label_2deea0;
        case 0x2deea4u: goto label_2deea4;
        case 0x2deea8u: goto label_2deea8;
        case 0x2deeacu: goto label_2deeac;
        case 0x2deeb0u: goto label_2deeb0;
        case 0x2deeb4u: goto label_2deeb4;
        case 0x2deeb8u: goto label_2deeb8;
        case 0x2deebcu: goto label_2deebc;
        case 0x2deec0u: goto label_2deec0;
        case 0x2deec4u: goto label_2deec4;
        case 0x2deec8u: goto label_2deec8;
        case 0x2deeccu: goto label_2deecc;
        case 0x2deed0u: goto label_2deed0;
        case 0x2deed4u: goto label_2deed4;
        case 0x2deed8u: goto label_2deed8;
        case 0x2deedcu: goto label_2deedc;
        case 0x2deee0u: goto label_2deee0;
        case 0x2deee4u: goto label_2deee4;
        case 0x2deee8u: goto label_2deee8;
        case 0x2deeecu: goto label_2deeec;
        case 0x2deef0u: goto label_2deef0;
        case 0x2deef4u: goto label_2deef4;
        case 0x2deef8u: goto label_2deef8;
        case 0x2deefcu: goto label_2deefc;
        case 0x2def00u: goto label_2def00;
        case 0x2def04u: goto label_2def04;
        case 0x2def08u: goto label_2def08;
        case 0x2def0cu: goto label_2def0c;
        case 0x2def10u: goto label_2def10;
        case 0x2def14u: goto label_2def14;
        case 0x2def18u: goto label_2def18;
        case 0x2def1cu: goto label_2def1c;
        case 0x2def20u: goto label_2def20;
        case 0x2def24u: goto label_2def24;
        case 0x2def28u: goto label_2def28;
        case 0x2def2cu: goto label_2def2c;
        case 0x2def30u: goto label_2def30;
        case 0x2def34u: goto label_2def34;
        case 0x2def38u: goto label_2def38;
        case 0x2def3cu: goto label_2def3c;
        case 0x2def40u: goto label_2def40;
        case 0x2def44u: goto label_2def44;
        case 0x2def48u: goto label_2def48;
        case 0x2def4cu: goto label_2def4c;
        case 0x2def50u: goto label_2def50;
        case 0x2def54u: goto label_2def54;
        case 0x2def58u: goto label_2def58;
        case 0x2def5cu: goto label_2def5c;
        case 0x2def60u: goto label_2def60;
        case 0x2def64u: goto label_2def64;
        case 0x2def68u: goto label_2def68;
        case 0x2def6cu: goto label_2def6c;
        case 0x2def70u: goto label_2def70;
        case 0x2def74u: goto label_2def74;
        case 0x2def78u: goto label_2def78;
        case 0x2def7cu: goto label_2def7c;
        case 0x2def80u: goto label_2def80;
        case 0x2def84u: goto label_2def84;
        case 0x2def88u: goto label_2def88;
        case 0x2def8cu: goto label_2def8c;
        case 0x2def90u: goto label_2def90;
        case 0x2def94u: goto label_2def94;
        case 0x2def98u: goto label_2def98;
        case 0x2def9cu: goto label_2def9c;
        case 0x2defa0u: goto label_2defa0;
        case 0x2defa4u: goto label_2defa4;
        case 0x2defa8u: goto label_2defa8;
        case 0x2defacu: goto label_2defac;
        case 0x2defb0u: goto label_2defb0;
        case 0x2defb4u: goto label_2defb4;
        case 0x2defb8u: goto label_2defb8;
        case 0x2defbcu: goto label_2defbc;
        case 0x2defc0u: goto label_2defc0;
        case 0x2defc4u: goto label_2defc4;
        case 0x2defc8u: goto label_2defc8;
        case 0x2defccu: goto label_2defcc;
        case 0x2defd0u: goto label_2defd0;
        case 0x2defd4u: goto label_2defd4;
        case 0x2defd8u: goto label_2defd8;
        case 0x2defdcu: goto label_2defdc;
        case 0x2defe0u: goto label_2defe0;
        case 0x2defe4u: goto label_2defe4;
        case 0x2defe8u: goto label_2defe8;
        case 0x2defecu: goto label_2defec;
        case 0x2deff0u: goto label_2deff0;
        case 0x2deff4u: goto label_2deff4;
        case 0x2deff8u: goto label_2deff8;
        case 0x2deffcu: goto label_2deffc;
        case 0x2df000u: goto label_2df000;
        case 0x2df004u: goto label_2df004;
        case 0x2df008u: goto label_2df008;
        case 0x2df00cu: goto label_2df00c;
        case 0x2df010u: goto label_2df010;
        case 0x2df014u: goto label_2df014;
        case 0x2df018u: goto label_2df018;
        case 0x2df01cu: goto label_2df01c;
        case 0x2df020u: goto label_2df020;
        case 0x2df024u: goto label_2df024;
        case 0x2df028u: goto label_2df028;
        case 0x2df02cu: goto label_2df02c;
        case 0x2df030u: goto label_2df030;
        case 0x2df034u: goto label_2df034;
        case 0x2df038u: goto label_2df038;
        case 0x2df03cu: goto label_2df03c;
        case 0x2df040u: goto label_2df040;
        case 0x2df044u: goto label_2df044;
        case 0x2df048u: goto label_2df048;
        case 0x2df04cu: goto label_2df04c;
        case 0x2df050u: goto label_2df050;
        case 0x2df054u: goto label_2df054;
        case 0x2df058u: goto label_2df058;
        case 0x2df05cu: goto label_2df05c;
        case 0x2df060u: goto label_2df060;
        case 0x2df064u: goto label_2df064;
        case 0x2df068u: goto label_2df068;
        case 0x2df06cu: goto label_2df06c;
        case 0x2df070u: goto label_2df070;
        case 0x2df074u: goto label_2df074;
        case 0x2df078u: goto label_2df078;
        case 0x2df07cu: goto label_2df07c;
        case 0x2df080u: goto label_2df080;
        case 0x2df084u: goto label_2df084;
        case 0x2df088u: goto label_2df088;
        case 0x2df08cu: goto label_2df08c;
        case 0x2df090u: goto label_2df090;
        case 0x2df094u: goto label_2df094;
        case 0x2df098u: goto label_2df098;
        case 0x2df09cu: goto label_2df09c;
        case 0x2df0a0u: goto label_2df0a0;
        case 0x2df0a4u: goto label_2df0a4;
        case 0x2df0a8u: goto label_2df0a8;
        case 0x2df0acu: goto label_2df0ac;
        case 0x2df0b0u: goto label_2df0b0;
        case 0x2df0b4u: goto label_2df0b4;
        case 0x2df0b8u: goto label_2df0b8;
        case 0x2df0bcu: goto label_2df0bc;
        case 0x2df0c0u: goto label_2df0c0;
        case 0x2df0c4u: goto label_2df0c4;
        case 0x2df0c8u: goto label_2df0c8;
        case 0x2df0ccu: goto label_2df0cc;
        case 0x2df0d0u: goto label_2df0d0;
        case 0x2df0d4u: goto label_2df0d4;
        case 0x2df0d8u: goto label_2df0d8;
        case 0x2df0dcu: goto label_2df0dc;
        case 0x2df0e0u: goto label_2df0e0;
        case 0x2df0e4u: goto label_2df0e4;
        case 0x2df0e8u: goto label_2df0e8;
        case 0x2df0ecu: goto label_2df0ec;
        case 0x2df0f0u: goto label_2df0f0;
        case 0x2df0f4u: goto label_2df0f4;
        case 0x2df0f8u: goto label_2df0f8;
        case 0x2df0fcu: goto label_2df0fc;
        case 0x2df100u: goto label_2df100;
        case 0x2df104u: goto label_2df104;
        case 0x2df108u: goto label_2df108;
        case 0x2df10cu: goto label_2df10c;
        case 0x2df110u: goto label_2df110;
        case 0x2df114u: goto label_2df114;
        case 0x2df118u: goto label_2df118;
        case 0x2df11cu: goto label_2df11c;
        case 0x2df120u: goto label_2df120;
        case 0x2df124u: goto label_2df124;
        case 0x2df128u: goto label_2df128;
        case 0x2df12cu: goto label_2df12c;
        case 0x2df130u: goto label_2df130;
        case 0x2df134u: goto label_2df134;
        default: break;
    }

    ctx->pc = 0x2ded18u;

label_2ded18:
    // 0x2ded18: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x2ded18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
label_2ded1c:
    // 0x2ded1c: 0x7fb100e0  sq          $s1, 0xE0($sp)
    ctx->pc = 0x2ded1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 17));
label_2ded20:
    // 0x2ded20: 0x7fb200d0  sq          $s2, 0xD0($sp)
    ctx->pc = 0x2ded20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 18));
label_2ded24:
    // 0x2ded24: 0x24910004  addiu       $s1, $a0, 0x4
    ctx->pc = 0x2ded24u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_2ded28:
    // 0x2ded28: 0x7fb300c0  sq          $s3, 0xC0($sp)
    ctx->pc = 0x2ded28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 19));
label_2ded2c:
    // 0x2ded2c: 0x7fb400b0  sq          $s4, 0xB0($sp)
    ctx->pc = 0x2ded2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 20));
label_2ded30:
    // 0x2ded30: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2ded30u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2ded34:
    // 0x2ded34: 0x7fb500a0  sq          $s5, 0xA0($sp)
    ctx->pc = 0x2ded34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 21));
label_2ded38:
    // 0x2ded38: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x2ded38u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_2ded3c:
    // 0x2ded3c: 0x7fb60090  sq          $s6, 0x90($sp)
    ctx->pc = 0x2ded3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 22));
label_2ded40:
    // 0x2ded40: 0x149103  sra         $s2, $s4, 4
    ctx->pc = 0x2ded40u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 20), 4));
label_2ded44:
    // 0x2ded44: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x2ded44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_2ded48:
    // 0x2ded48: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x2ded48u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2ded4c:
    // 0x2ded4c: 0x7fbe0070  sq          $fp, 0x70($sp)
    ctx->pc = 0x2ded4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 30));
label_2ded50:
    // 0x2ded50: 0xe0b82d  daddu       $s7, $a3, $zero
    ctx->pc = 0x2ded50u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2ded54:
    // 0x2ded54: 0x7fb000f0  sq          $s0, 0xF0($sp)
    ctx->pc = 0x2ded54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 16));
label_2ded58:
    // 0x2ded58: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x2ded58u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ded5c:
    // 0x2ded5c: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2ded5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_2ded60:
    // 0x2ded60: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x2ded60u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ded64:
    // 0x2ded64: 0x32520001  andi        $s2, $s2, 0x1
    ctx->pc = 0x2ded64u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
label_2ded68:
    // 0x2ded68: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2ded68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2ded6c:
    // 0x2ded6c: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x2ded6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
label_2ded70:
    // 0x2ded70: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
label_2ded74:
    if (ctx->pc == 0x2DED74u) {
        ctx->pc = 0x2DED74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DED70u;
        // 0x2ded74: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DED78u;
        goto label_2ded78;
    }
    ctx->pc = 0x2DED70u;
    {
        const bool branch_taken_0x2ded70 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DED74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DED70u;
        // 0x2ded74: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ded70) {
            ctx->pc = 0x2DED84u;
            goto label_2ded84;
        }
    }
    ctx->pc = 0x2DED78u;
label_2ded78:
    // 0x2ded78: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x2ded78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_2ded7c:
    // 0x2ded7c: 0xc0b83da  jal         func_2E0F68
label_2ded80:
    if (ctx->pc == 0x2DED80u) {
        ctx->pc = 0x2DED80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DED7Cu;
        // 0x2ded80: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DED84u;
        goto label_2ded84;
    }
    ctx->pc = 0x2DED7Cu;
    SET_GPR_U32(ctx, 31, 0x2DED84u);
    ctx->pc = 0x2DED80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DED7Cu;
    // 0x2ded80: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0F68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E0F68u, 0x2DED7Cu, 0x2DED84u)) {
        return;
    }
    ctx->pc = 0x2DED84u;
label_2ded84:
    // 0x2ded84: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2ded84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2ded88:
    // 0x2ded88: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2ded88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2ded8c:
    // 0x2ded8c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ded8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ded90:
    // 0x2ded90: 0xc0b756a  jal         func_2DD5A8
label_2ded94:
    if (ctx->pc == 0x2DED94u) {
        ctx->pc = 0x2DED94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DED90u;
        // 0x2ded94: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DED98u;
        goto label_2ded98;
    }
    ctx->pc = 0x2DED90u;
    SET_GPR_U32(ctx, 31, 0x2DED98u);
    ctx->pc = 0x2DED94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DED90u;
    // 0x2ded94: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DD5A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DD5A8u, 0x2DED90u, 0x2DED98u)) {
        return;
    }
    ctx->pc = 0x2DED98u;
label_2ded98:
    // 0x2ded98: 0xc0b777e  jal         func_2DDDF8
label_2ded9c:
    if (ctx->pc == 0x2DED9Cu) {
        ctx->pc = 0x2DED9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DED98u;
        // 0x2ded9c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DEDA0u;
        goto label_2deda0;
    }
    ctx->pc = 0x2DED98u;
    SET_GPR_U32(ctx, 31, 0x2DEDA0u);
    ctx->pc = 0x2DED9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DED98u;
    // 0x2ded9c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DDDF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DDDF8u, 0x2DED98u, 0x2DEDA0u)) {
        return;
    }
    ctx->pc = 0x2DEDA0u;
label_2deda0:
    // 0x2deda0: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x2deda0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2deda4:
    // 0x2deda4: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x2deda4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_2deda8:
    // 0x2deda8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2deda8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2dedac:
    // 0x2dedac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2dedacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2dedb0:
    // 0x2dedb0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2dedb0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2dedb4:
    // 0x2dedb4: 0xc0b756a  jal         func_2DD5A8
label_2dedb8:
    if (ctx->pc == 0x2DEDB8u) {
        ctx->pc = 0x2DEDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEDB4u;
        // 0x2dedb8: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DEDBCu;
        goto label_2dedbc;
    }
    ctx->pc = 0x2DEDB4u;
    SET_GPR_U32(ctx, 31, 0x2DEDBCu);
    ctx->pc = 0x2DEDB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DEDB4u;
    // 0x2dedb8: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DD5A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DD5A8u, 0x2DEDB4u, 0x2DEDBCu)) {
        return;
    }
    ctx->pc = 0x2DEDBCu;
label_2dedbc:
    // 0x2dedbc: 0xc0b777e  jal         func_2DDDF8
label_2dedc0:
    if (ctx->pc == 0x2DEDC0u) {
        ctx->pc = 0x2DEDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEDBCu;
        // 0x2dedc0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DEDC4u;
        goto label_2dedc4;
    }
    ctx->pc = 0x2DEDBCu;
    SET_GPR_U32(ctx, 31, 0x2DEDC4u);
    ctx->pc = 0x2DEDC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DEDBCu;
    // 0x2dedc0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DDDF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DDDF8u, 0x2DEDBCu, 0x2DEDC4u)) {
        return;
    }
    ctx->pc = 0x2DEDC4u;
label_2dedc4:
    // 0x2dedc4: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x2dedc4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_2dedc8:
    // 0x2dedc8: 0x32820001  andi        $v0, $s4, 0x1
    ctx->pc = 0x2dedc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)1);
label_2dedcc:
    // 0x2dedcc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2dedd0:
    if (ctx->pc == 0x2DEDD0u) {
        ctx->pc = 0x2DEDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEDCCu;
        // 0x2dedd0: 0x141043  sra         $v0, $s4, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DEDD4u;
        goto label_2dedd4;
    }
    ctx->pc = 0x2DEDCCu;
    {
        const bool branch_taken_0x2dedcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DEDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEDCCu;
        // 0x2dedd0: 0x141043  sra         $v0, $s4, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dedcc) {
            ctx->pc = 0x2DEDE0u;
            goto label_2dede0;
        }
    }
    ctx->pc = 0x2DEDD4u;
label_2dedd4:
    // 0x2dedd4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2dedd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2dedd8:
    // 0x2dedd8: 0x10000007  b           . + 4 + (0x7 << 2)
label_2deddc:
    if (ctx->pc == 0x2DEDDCu) {
        ctx->pc = 0x2DEDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEDD8u;
        // 0x2deddc: 0xafa20058  sw          $v0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DEDE0u;
        goto label_2dede0;
    }
    ctx->pc = 0x2DEDD8u;
    {
        const bool branch_taken_0x2dedd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DEDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEDD8u;
        // 0x2deddc: 0xafa20058  sw          $v0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dedd8) {
            ctx->pc = 0x2DEDF8u;
            goto label_2dedf8;
        }
    }
    ctx->pc = 0x2DEDE0u;
label_2dede0:
    // 0x2dede0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2dede0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2dede4:
    // 0x2dede4: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
label_2dede8:
    if (ctx->pc == 0x2DEDE8u) {
        ctx->pc = 0x2DEDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEDE4u;
        // 0x2dede8: 0xafa30058  sw          $v1, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DEDECu;
        goto label_2dedec;
    }
    ctx->pc = 0x2DEDE4u;
    {
        const bool branch_taken_0x2dede4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DEDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEDE4u;
        // 0x2dede8: 0xafa30058  sw          $v1, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dede4) {
            ctx->pc = 0x2DEDF8u;
            goto label_2dedf8;
        }
    }
    ctx->pc = 0x2DEDECu;
label_2dedec:
    // 0x2dedec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2dedecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2dedf0:
    // 0x2dedf0: 0xc0b83da  jal         func_2E0F68
label_2dedf4:
    if (ctx->pc == 0x2DEDF4u) {
        ctx->pc = 0x2DEDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEDF0u;
        // 0x2dedf4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DEDF8u;
        goto label_2dedf8;
    }
    ctx->pc = 0x2DEDF0u;
    SET_GPR_U32(ctx, 31, 0x2DEDF8u);
    ctx->pc = 0x2DEDF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DEDF0u;
    // 0x2dedf4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0F68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E0F68u, 0x2DEDF0u, 0x2DEDF8u)) {
        return;
    }
    ctx->pc = 0x2DEDF8u;
label_2dedf8:
    // 0x2dedf8: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2dedf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_2dedfc:
    // 0x2dedfc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2dedfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2dee00:
    // 0x2dee00: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_2dee04:
    if (ctx->pc == 0x2DEE04u) {
        ctx->pc = 0x2DEE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEE00u;
        // 0x2dee04: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DEE08u;
        goto label_2dee08;
    }
    ctx->pc = 0x2DEE00u;
    {
        const bool branch_taken_0x2dee00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DEE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEE00u;
        // 0x2dee04: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dee00) {
            ctx->pc = 0x2DEE2Cu;
            goto label_2dee2c;
        }
    }
    ctx->pc = 0x2DEE08u;
label_2dee08:
    // 0x2dee08: 0x32820008  andi        $v0, $s4, 0x8
    ctx->pc = 0x2dee08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)8);
label_2dee0c:
    // 0x2dee0c: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_2dee10:
    if (ctx->pc == 0x2DEE10u) {
        ctx->pc = 0x2DEE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEE0Cu;
        // 0x2dee10: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DEE14u;
        goto label_2dee14;
    }
    ctx->pc = 0x2DEE0Cu;
    {
        const bool branch_taken_0x2dee0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dee0c) {
            ctx->pc = 0x2DEE10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DEE0Cu;
            // 0x2dee10: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DEE2Cu;
            goto label_2dee2c;
        }
    }
    ctx->pc = 0x2DEE14u;
label_2dee14:
    // 0x2dee14: 0x220f02d  daddu       $fp, $s1, $zero
    ctx->pc = 0x2dee14u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2dee18:
    // 0x2dee18: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2dee18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2dee1c:
    // 0x2dee1c: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2dee1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_2dee20:
    // 0x2dee20: 0xc0b7db8  jal         func_2DF6E0
label_2dee24:
    if (ctx->pc == 0x2DEE24u) {
        ctx->pc = 0x2DEE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEE20u;
        // 0x2dee24: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DEE28u;
        goto label_2dee28;
    }
    ctx->pc = 0x2DEE20u;
    SET_GPR_U32(ctx, 31, 0x2DEE28u);
    ctx->pc = 0x2DEE24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DEE20u;
    // 0x2dee24: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF6E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DF6E0u, 0x2DEE20u, 0x2DEE28u)) {
        return;
    }
    ctx->pc = 0x2DEE28u;
label_2dee28:
    // 0x2dee28: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x2dee28u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_2dee2c:
    // 0x2dee2c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2dee2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_2dee30:
    // 0x2dee30: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2dee30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_2dee34:
    // 0x2dee34: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_2dee38:
    if (ctx->pc == 0x2DEE38u) {
        ctx->pc = 0x2DEE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEE34u;
        // 0x2dee38: 0x32830004  andi        $v1, $s4, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DEE3Cu;
        goto label_2dee3c;
    }
    ctx->pc = 0x2DEE34u;
    {
        const bool branch_taken_0x2dee34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DEE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEE34u;
        // 0x2dee38: 0x32830004  andi        $v1, $s4, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dee34) {
            ctx->pc = 0x2DEE68u;
            goto label_2dee68;
        }
    }
    ctx->pc = 0x2DEE3Cu;
label_2dee3c:
    // 0x2dee3c: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x2dee3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
label_2dee40:
    // 0x2dee40: 0x220b02d  daddu       $s6, $s1, $zero
    ctx->pc = 0x2dee40u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2dee44:
    // 0x2dee44: 0x8c8210bc  lw          $v0, 0x10BC($a0)
    ctx->pc = 0x2dee44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4284)));
label_2dee48:
    // 0x2dee48: 0x3b00b  movn        $s6, $zero, $v1
    ctx->pc = 0x2dee48u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_U64(ctx, 22, GPR_U64(ctx, 0));
label_2dee4c:
    // 0x2dee4c: 0x40f809  jalr        $v0
label_2dee50:
    if (ctx->pc == 0x2DEE50u) {
        ctx->pc = 0x2DEE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEE4Cu;
        // 0x2dee50: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DEE54u;
        goto label_2dee54;
    }
    ctx->pc = 0x2DEE4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2DEE54u);
        ctx->pc = 0x2DEE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEE4Cu;
        // 0x2dee50: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DEE4Cu, 0x2DEE54u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2DEE54u;
label_2dee54:
    // 0x2dee54: 0x8f839018  lw          $v1, -0x6FE8($gp)
    ctx->pc = 0x2dee54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938648)));
label_2dee58:
    // 0x2dee58: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2dee58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2dee5c:
    // 0x2dee5c: 0x31823  negu        $v1, $v1
    ctx->pc = 0x2dee5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
label_2dee60:
    // 0x2dee60: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2dee60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2dee64:
    // 0x2dee64: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x2dee64u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_2dee68:
    // 0x2dee68: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2dee68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_2dee6c:
    // 0x2dee6c: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x2dee6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_2dee70:
    // 0x2dee70: 0x50400035  beql        $v0, $zero, . + 4 + (0x35 << 2)
label_2dee74:
    if (ctx->pc == 0x2DEE74u) {
        ctx->pc = 0x2DEE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEE70u;
        // 0x2dee74: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DEE78u;
        goto label_2dee78;
    }
    ctx->pc = 0x2DEE70u;
    {
        const bool branch_taken_0x2dee70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dee70) {
            ctx->pc = 0x2DEE74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DEE70u;
            // 0x2dee74: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DEF48u;
            goto label_2def48;
        }
    }
    ctx->pc = 0x2DEE78u;
label_2dee78:
    // 0x2dee78: 0x56600032  bnel        $s3, $zero, . + 4 + (0x32 << 2)
label_2dee7c:
    if (ctx->pc == 0x2DEE7Cu) {
        ctx->pc = 0x2DEE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEE78u;
        // 0x2dee7c: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DEE80u;
        goto label_2dee80;
    }
    ctx->pc = 0x2DEE78u;
    {
        const bool branch_taken_0x2dee78 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dee78) {
            ctx->pc = 0x2DEE7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DEE78u;
            // 0x2dee7c: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DEF44u;
            goto label_2def44;
        }
    }
    ctx->pc = 0x2DEE80u;
label_2dee80:
    // 0x2dee80: 0x12a0000e  beqz        $s5, . + 4 + (0xE << 2)
label_2dee84:
    if (ctx->pc == 0x2DEE84u) {
        ctx->pc = 0x2DEE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEE80u;
        // 0x2dee84: 0x3c06002e  lui         $a2, 0x2E (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)46 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DEE88u;
        goto label_2dee88;
    }
    ctx->pc = 0x2DEE80u;
    {
        const bool branch_taken_0x2dee80 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DEE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEE80u;
        // 0x2dee84: 0x3c06002e  lui         $a2, 0x2E (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)46 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dee80) {
            ctx->pc = 0x2DEEBCu;
            goto label_2deebc;
        }
    }
    ctx->pc = 0x2DEE88u;
label_2dee88:
    // 0x2dee88: 0xafb50040  sw          $s5, 0x40($sp)
    ctx->pc = 0x2dee88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 21));
label_2dee8c:
    // 0x2dee8c: 0x24c6e358  addiu       $a2, $a2, -0x1CA8
    ctx->pc = 0x2dee8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294959960));
label_2dee90:
    // 0x2dee90: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x2dee90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
label_2dee94:
    // 0x2dee94: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2dee94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2dee98:
    // 0x2dee98: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2dee98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2dee9c:
    // 0x2dee9c: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x2dee9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_2deea0:
    // 0x2deea0: 0xc0b9006  jal         func_2E4018
label_2deea4:
    if (ctx->pc == 0x2DEEA4u) {
        ctx->pc = 0x2DEEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEEA0u;
        // 0x2deea4: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DEEA8u;
        goto label_2deea8;
    }
    ctx->pc = 0x2DEEA0u;
    SET_GPR_U32(ctx, 31, 0x2DEEA8u);
    ctx->pc = 0x2DEEA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DEEA0u;
    // 0x2deea4: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4018u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E4018u, 0x2DEEA0u, 0x2DEEA8u)) {
        return;
    }
    ctx->pc = 0x2DEEA8u;
label_2deea8:
    // 0x2deea8: 0x8fa20044  lw          $v0, 0x44($sp)
    ctx->pc = 0x2deea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_2deeac:
    // 0x2deeac: 0x10400091  beqz        $v0, . + 4 + (0x91 << 2)
label_2deeb0:
    if (ctx->pc == 0x2DEEB0u) {
        ctx->pc = 0x2DEEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEEACu;
        // 0x2deeb0: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DEEB4u;
        goto label_2deeb4;
    }
    ctx->pc = 0x2DEEACu;
    {
        const bool branch_taken_0x2deeac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DEEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEEACu;
        // 0x2deeb0: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2deeac) {
            ctx->pc = 0x2DF0F4u;
            goto label_2df0f4;
        }
    }
    ctx->pc = 0x2DEEB4u;
label_2deeb4:
    // 0x2deeb4: 0x10000023  b           . + 4 + (0x23 << 2)
label_2deeb8:
    if (ctx->pc == 0x2DEEB8u) {
        ctx->pc = 0x2DEEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEEB4u;
        // 0x2deeb8: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DEEBCu;
        goto label_2deebc;
    }
    ctx->pc = 0x2DEEB4u;
    {
        const bool branch_taken_0x2deeb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DEEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEEB4u;
        // 0x2deeb8: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2deeb4) {
            ctx->pc = 0x2DEF44u;
            goto label_2def44;
        }
    }
    ctx->pc = 0x2DEEBCu;
label_2deebc:
    // 0x2deebc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2deebcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2deec0:
    // 0x2deec0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2deec0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2deec4:
    // 0x2deec4: 0xc0b7db8  jal         func_2DF6E0
label_2deec8:
    if (ctx->pc == 0x2DEEC8u) {
        ctx->pc = 0x2DEEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEEC4u;
        // 0x2deec8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DEECCu;
        goto label_2deecc;
    }
    ctx->pc = 0x2DEEC4u;
    SET_GPR_U32(ctx, 31, 0x2DEECCu);
    ctx->pc = 0x2DEEC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DEEC4u;
    // 0x2deec8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF6E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DF6E0u, 0x2DEEC4u, 0x2DEECCu)) {
        return;
    }
    ctx->pc = 0x2DEECCu;
label_2deecc:
    // 0x2deecc: 0xc0b7820  jal         func_2DE080
label_2deed0:
    if (ctx->pc == 0x2DEED0u) {
        ctx->pc = 0x2DEED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEECCu;
        // 0x2deed0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DEED4u;
        goto label_2deed4;
    }
    ctx->pc = 0x2DEECCu;
    SET_GPR_U32(ctx, 31, 0x2DEED4u);
    ctx->pc = 0x2DEED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DEECCu;
    // 0x2deed0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE080u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DE080u, 0x2DEECCu, 0x2DEED4u)) {
        return;
    }
    ctx->pc = 0x2DEED4u;
label_2deed4:
    // 0x2deed4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2deed4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2deed8:
    // 0x2deed8: 0x12600086  beqz        $s3, . + 4 + (0x86 << 2)
label_2deedc:
    if (ctx->pc == 0x2DEEDCu) {
        ctx->pc = 0x2DEEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEED8u;
        // 0x2deedc: 0x3c05006b  lui         $a1, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DEEE0u;
        goto label_2deee0;
    }
    ctx->pc = 0x2DEED8u;
    {
        const bool branch_taken_0x2deed8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DEEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEED8u;
        // 0x2deedc: 0x3c05006b  lui         $a1, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2deed8) {
            ctx->pc = 0x2DF0F4u;
            goto label_2df0f4;
        }
    }
    ctx->pc = 0x2DEEE0u;
label_2deee0:
    // 0x2deee0: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x2deee0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2deee4:
    // 0x2deee4: 0xc0b7d14  jal         func_2DF450
label_2deee8:
    if (ctx->pc == 0x2DEEE8u) {
        ctx->pc = 0x2DEEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEEE4u;
        // 0x2deee8: 0x24a5f5c8  addiu       $a1, $a1, -0xA38 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964680));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DEEECu;
        goto label_2deeec;
    }
    ctx->pc = 0x2DEEE4u;
    SET_GPR_U32(ctx, 31, 0x2DEEECu);
    ctx->pc = 0x2DEEE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DEEE4u;
    // 0x2deee8: 0x24a5f5c8  addiu       $a1, $a1, -0xA38 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF450u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DF450u, 0x2DEEE4u, 0x2DEEECu)) {
        return;
    }
    ctx->pc = 0x2DEEECu;
label_2deeec:
    // 0x2deeec: 0x54400015  bnel        $v0, $zero, . + 4 + (0x15 << 2)
label_2deef0:
    if (ctx->pc == 0x2DEEF0u) {
        ctx->pc = 0x2DEEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEEECu;
        // 0x2deef0: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DEEF4u;
        goto label_2deef4;
    }
    ctx->pc = 0x2DEEECu;
    {
        const bool branch_taken_0x2deeec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2deeec) {
            ctx->pc = 0x2DEEF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DEEECu;
            // 0x2deef0: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DEF44u;
            goto label_2def44;
        }
    }
    ctx->pc = 0x2DEEF4u;
label_2deef4:
    // 0x2deef4: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x2deef4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
label_2deef8:
    // 0x2deef8: 0xc0b7820  jal         func_2DE080
label_2deefc:
    if (ctx->pc == 0x2DEEFCu) {
        ctx->pc = 0x2DEEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEEF8u;
        // 0x2deefc: 0x2484ffa8  addiu       $a0, $a0, -0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DEF00u;
        goto label_2def00;
    }
    ctx->pc = 0x2DEEF8u;
    SET_GPR_U32(ctx, 31, 0x2DEF00u);
    ctx->pc = 0x2DEEFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DEEF8u;
    // 0x2deefc: 0x2484ffa8  addiu       $a0, $a0, -0x58 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE080u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DE080u, 0x2DEEF8u, 0x2DEF00u)) {
        return;
    }
    ctx->pc = 0x2DEF00u;
label_2def00:
    // 0x2def00: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2def00u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2def04:
    // 0x2def04: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x2def04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2def08:
    // 0x2def08: 0xc0b7850  jal         func_2DE140
label_2def0c:
    if (ctx->pc == 0x2DEF0Cu) {
        ctx->pc = 0x2DEF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEF08u;
        // 0x2def0c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DEF10u;
        goto label_2def10;
    }
    ctx->pc = 0x2DEF08u;
    SET_GPR_U32(ctx, 31, 0x2DEF10u);
    ctx->pc = 0x2DEF0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DEF08u;
    // 0x2def0c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE140u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DE140u, 0x2DEF08u, 0x2DEF10u)) {
        return;
    }
    ctx->pc = 0x2DEF10u;
label_2def10:
    // 0x2def10: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
label_2def14:
    if (ctx->pc == 0x2DEF14u) {
        ctx->pc = 0x2DEF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEF10u;
        // 0x2def14: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DEF18u;
        goto label_2def18;
    }
    ctx->pc = 0x2DEF10u;
    {
        const bool branch_taken_0x2def10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2def10) {
            ctx->pc = 0x2DEF14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DEF10u;
            // 0x2def14: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DEF44u;
            goto label_2def44;
        }
    }
    ctx->pc = 0x2DEF18u;
label_2def18:
    // 0x2def18: 0x8e630028  lw          $v1, 0x28($s3)
    ctx->pc = 0x2def18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
label_2def1c:
    // 0x2def1c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_2def20:
    if (ctx->pc == 0x2DEF20u) {
        ctx->pc = 0x2DEF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEF1Cu;
        // 0x2def20: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DEF24u;
        goto label_2def24;
    }
    ctx->pc = 0x2DEF1Cu;
    {
        const bool branch_taken_0x2def1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DEF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEF1Cu;
        // 0x2def20: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2def1c) {
            ctx->pc = 0x2DEF34u;
            goto label_2def34;
        }
    }
    ctx->pc = 0x2DEF24u;
label_2def24:
    // 0x2def24: 0x8e62002c  lw          $v0, 0x2C($s3)
    ctx->pc = 0x2def24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
label_2def28:
    // 0x2def28: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2def28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2def2c:
    // 0x2def2c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2def2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2def30:
    // 0x2def30: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2def30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2def34:
    // 0x2def34: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x2def34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2def38:
    // 0x2def38: 0xc0b7720  jal         func_2DDC80
label_2def3c:
    if (ctx->pc == 0x2DEF3Cu) {
        ctx->pc = 0x2DEF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEF38u;
        // 0x2def3c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DEF40u;
        goto label_2def40;
    }
    ctx->pc = 0x2DEF38u;
    SET_GPR_U32(ctx, 31, 0x2DEF40u);
    ctx->pc = 0x2DEF3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DEF38u;
    // 0x2def3c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DDC80u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DDC80u, 0x2DEF38u, 0x2DEF40u)) {
        return;
    }
    ctx->pc = 0x2DEF40u;
label_2def40:
    // 0x2def40: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x2def40u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_2def44:
    // 0x2def44: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2def44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2def48:
    // 0x2def48: 0x97b80a  movz        $s7, $a0, $s7
    ctx->pc = 0x2def48u;
    if (GPR_U64(ctx, 23) == 0) SET_GPR_U64(ctx, 23, GPR_U64(ctx, 4));
label_2def4c:
    // 0x2def4c: 0x8ee20000  lw          $v0, 0x0($s7)
    ctx->pc = 0x2def4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_2def50:
    // 0x2def50: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2def54:
    if (ctx->pc == 0x2DEF54u) {
        ctx->pc = 0x2DEF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEF50u;
        // 0x2def54: 0x32820020  andi        $v0, $s4, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DEF58u;
        goto label_2def58;
    }
    ctx->pc = 0x2DEF50u;
    {
        const bool branch_taken_0x2def50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DEF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEF50u;
        // 0x2def54: 0x32820020  andi        $v0, $s4, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2def50) {
            ctx->pc = 0x2DEF60u;
            goto label_2def60;
        }
    }
    ctx->pc = 0x2DEF58u;
label_2def58:
    // 0x2def58: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2def5c:
    if (ctx->pc == 0x2DEF5Cu) {
        ctx->pc = 0x2DEF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEF58u;
        // 0x2def5c: 0x8fa20050  lw          $v0, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DEF60u;
        goto label_2def60;
    }
    ctx->pc = 0x2DEF58u;
    {
        const bool branch_taken_0x2def58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DEF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEF58u;
        // 0x2def5c: 0x8fa20050  lw          $v0, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2def58) {
            ctx->pc = 0x2DEF6Cu;
            goto label_2def6c;
        }
    }
    ctx->pc = 0x2DEF60u;
label_2def60:
    // 0x2def60: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2def60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_2def64:
    // 0x2def64: 0xaee20000  sw          $v0, 0x0($s7)
    ctx->pc = 0x2def64u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
label_2def68:
    // 0x2def68: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2def68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_2def6c:
    // 0x2def6c: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x2def6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_2def70:
    // 0x2def70: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_2def74:
    if (ctx->pc == 0x2DEF74u) {
        ctx->pc = 0x2DEF78u;
        goto label_2def78;
    }
    ctx->pc = 0x2DEF70u;
    {
        const bool branch_taken_0x2def70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2def70) {
            ctx->pc = 0x2DEFBCu;
            goto label_2defbc;
        }
    }
    ctx->pc = 0x2DEF78u;
label_2def78:
    // 0x2def78: 0x56a0001b  bnel        $s5, $zero, . + 4 + (0x1B << 2)
label_2def7c:
    if (ctx->pc == 0x2DEF7Cu) {
        ctx->pc = 0x2DEF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEF78u;
        // 0x2def7c: 0x8e620034  lw          $v0, 0x34($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DEF80u;
        goto label_2def80;
    }
    ctx->pc = 0x2DEF78u;
    {
        const bool branch_taken_0x2def78 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x2def78) {
            ctx->pc = 0x2DEF7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DEF78u;
            // 0x2def7c: 0x8e620034  lw          $v0, 0x34($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DEFE8u;
            goto label_2defe8;
        }
    }
    ctx->pc = 0x2DEF80u;
label_2def80:
    // 0x2def80: 0x5660000d  bnel        $s3, $zero, . + 4 + (0xD << 2)
label_2def84:
    if (ctx->pc == 0x2DEF84u) {
        ctx->pc = 0x2DEF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEF80u;
        // 0x2def84: 0x8e650030  lw          $a1, 0x30($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DEF88u;
        goto label_2def88;
    }
    ctx->pc = 0x2DEF80u;
    {
        const bool branch_taken_0x2def80 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x2def80) {
            ctx->pc = 0x2DEF84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DEF80u;
            // 0x2def84: 0x8e650030  lw          $a1, 0x30($s3) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DEFB8u;
            goto label_2defb8;
        }
    }
    ctx->pc = 0x2DEF88u;
label_2def88:
    // 0x2def88: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2def88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2def8c:
    // 0x2def8c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2def8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2def90:
    // 0x2def90: 0xc0b7db8  jal         func_2DF6E0
label_2def94:
    if (ctx->pc == 0x2DEF94u) {
        ctx->pc = 0x2DEF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEF90u;
        // 0x2def94: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DEF98u;
        goto label_2def98;
    }
    ctx->pc = 0x2DEF90u;
    SET_GPR_U32(ctx, 31, 0x2DEF98u);
    ctx->pc = 0x2DEF94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DEF90u;
    // 0x2def94: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF6E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DF6E0u, 0x2DEF90u, 0x2DEF98u)) {
        return;
    }
    ctx->pc = 0x2DEF98u;
label_2def98:
    // 0x2def98: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2def98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2def9c:
    // 0x2def9c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2def9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2defa0:
    // 0x2defa0: 0xc0b8fa4  jal         func_2E3E90
label_2defa4:
    if (ctx->pc == 0x2DEFA4u) {
        ctx->pc = 0x2DEFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEFA0u;
        // 0x2defa4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DEFA8u;
        goto label_2defa8;
    }
    ctx->pc = 0x2DEFA0u;
    SET_GPR_U32(ctx, 31, 0x2DEFA8u);
    ctx->pc = 0x2DEFA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DEFA0u;
    // 0x2defa4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3E90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E3E90u, 0x2DEFA0u, 0x2DEFA8u)) {
        return;
    }
    ctx->pc = 0x2DEFA8u;
label_2defa8:
    // 0x2defa8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_2defac:
    if (ctx->pc == 0x2DEFACu) {
        ctx->pc = 0x2DEFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEFA8u;
        // 0x2defac: 0xafa20054  sw          $v0, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DEFB0u;
        goto label_2defb0;
    }
    ctx->pc = 0x2DEFA8u;
    {
        const bool branch_taken_0x2defa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DEFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEFA8u;
        // 0x2defac: 0xafa20054  sw          $v0, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2defa8) {
            ctx->pc = 0x2DEFBCu;
            goto label_2defbc;
        }
    }
    ctx->pc = 0x2DEFB0u;
label_2defb0:
    // 0x2defb0: 0x10000051  b           . + 4 + (0x51 << 2)
label_2defb4:
    if (ctx->pc == 0x2DEFB4u) {
        ctx->pc = 0x2DEFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEFB0u;
        // 0x2defb4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DEFB8u;
        goto label_2defb8;
    }
    ctx->pc = 0x2DEFB0u;
    {
        const bool branch_taken_0x2defb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DEFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEFB0u;
        // 0x2defb4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2defb0) {
            ctx->pc = 0x2DF0F8u;
            goto label_2df0f8;
        }
    }
    ctx->pc = 0x2DEFB8u;
label_2defb8:
    // 0x2defb8: 0xafa50054  sw          $a1, 0x54($sp)
    ctx->pc = 0x2defb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 5));
label_2defbc:
    // 0x2defbc: 0x56a0000a  bnel        $s5, $zero, . + 4 + (0xA << 2)
label_2defc0:
    if (ctx->pc == 0x2DEFC0u) {
        ctx->pc = 0x2DEFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEFBCu;
        // 0x2defc0: 0x8e620034  lw          $v0, 0x34($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DEFC4u;
        goto label_2defc4;
    }
    ctx->pc = 0x2DEFBCu;
    {
        const bool branch_taken_0x2defbc = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x2defbc) {
            ctx->pc = 0x2DEFC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DEFBCu;
            // 0x2defc0: 0x8e620034  lw          $v0, 0x34($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DEFE8u;
            goto label_2defe8;
        }
    }
    ctx->pc = 0x2DEFC4u;
label_2defc4:
    // 0x2defc4: 0x8fa60054  lw          $a2, 0x54($sp)
    ctx->pc = 0x2defc4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_2defc8:
    // 0x2defc8: 0x3c04002e  lui         $a0, 0x2E
    ctx->pc = 0x2defc8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)46 << 16));
label_2defcc:
    // 0x2defcc: 0x2484a908  addiu       $a0, $a0, -0x56F8
    ctx->pc = 0x2defccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945032));
label_2defd0:
    // 0x2defd0: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x2defd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
label_2defd4:
    // 0x2defd4: 0xafa60044  sw          $a2, 0x44($sp)
    ctx->pc = 0x2defd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 6));
label_2defd8:
    // 0x2defd8: 0xc0b6a28  jal         func_2DA8A0
label_2defdc:
    if (ctx->pc == 0x2DEFDCu) {
        ctx->pc = 0x2DEFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEFD8u;
        // 0x2defdc: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DEFE0u;
        goto label_2defe0;
    }
    ctx->pc = 0x2DEFD8u;
    SET_GPR_U32(ctx, 31, 0x2DEFE0u);
    ctx->pc = 0x2DEFDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DEFD8u;
    // 0x2defdc: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA8A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DA8A0u, 0x2DEFD8u, 0x2DEFE0u)) {
        return;
    }
    ctx->pc = 0x2DEFE0u;
label_2defe0:
    // 0x2defe0: 0x8fb50040  lw          $s5, 0x40($sp)
    ctx->pc = 0x2defe0u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_2defe4:
    // 0x2defe4: 0x8e620034  lw          $v0, 0x34($s3)
    ctx->pc = 0x2defe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
label_2defe8:
    // 0x2defe8: 0x2451005c  addiu       $s1, $v0, 0x5C
    ctx->pc = 0x2defe8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 92));
label_2defec:
    // 0x2defec: 0x2454006c  addiu       $s4, $v0, 0x6C
    ctx->pc = 0x2defecu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 108));
label_2deff0:
    // 0x2deff0: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x2deff0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2deff4:
    // 0x2deff4: 0x12c00007  beqz        $s6, . + 4 + (0x7 << 2)
label_2deff8:
    if (ctx->pc == 0x2DEFF8u) {
        ctx->pc = 0x2DEFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEFF4u;
        // 0x2deff8: 0x29e880b  movn        $s1, $s4, $fp (Delay Slot)
        if (GPR_U64(ctx, 30) != 0) SET_GPR_U64(ctx, 17, GPR_U64(ctx, 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DEFFCu;
        goto label_2deffc;
    }
    ctx->pc = 0x2DEFF4u;
    {
        const bool branch_taken_0x2deff4 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DEFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEFF4u;
        // 0x2deff8: 0x29e880b  movn        $s1, $s4, $fp (Delay Slot)
        if (GPR_U64(ctx, 30) != 0) SET_GPR_U64(ctx, 17, GPR_U64(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2deff4) {
            ctx->pc = 0x2DF014u;
            goto label_2df014;
        }
    }
    ctx->pc = 0x2DEFFCu;
label_2deffc:
    // 0x2deffc: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x2deffcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_2df000:
    // 0x2df000: 0x8c6210bc  lw          $v0, 0x10BC($v1)
    ctx->pc = 0x2df000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4284)));
label_2df004:
    // 0x2df004: 0x40f809  jalr        $v0
label_2df008:
    if (ctx->pc == 0x2DF008u) {
        ctx->pc = 0x2DF008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF004u;
        // 0x2df008: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DF00Cu;
        goto label_2df00c;
    }
    ctx->pc = 0x2DF004u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2DF00Cu);
        ctx->pc = 0x2DF008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF004u;
        // 0x2df008: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DF004u, 0x2DF00Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2DF00Cu;
label_2df00c:
    // 0x2df00c: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x2df00cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2df010:
    // 0x2df010: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x2df010u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2df014:
    // 0x2df014: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x2df014u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_2df018:
    // 0x2df018: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2df018u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2df01c:
    // 0x2df01c: 0xc0b7076  jal         func_2DC1D8
label_2df020:
    if (ctx->pc == 0x2DF020u) {
        ctx->pc = 0x2DF020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF01Cu;
        // 0x2df020: 0x34a50806  ori         $a1, $a1, 0x806 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2054);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DF024u;
        goto label_2df024;
    }
    ctx->pc = 0x2DF01Cu;
    SET_GPR_U32(ctx, 31, 0x2DF024u);
    ctx->pc = 0x2DF020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DF01Cu;
    // 0x2df020: 0x34a50806  ori         $a1, $a1, 0x806 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2054);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC1D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DC1D8u, 0x2DF01Cu, 0x2DF024u)) {
        return;
    }
    ctx->pc = 0x2DF024u;
label_2df024:
    // 0x2df024: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2df024u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2df028:
    // 0x2df028: 0x12000033  beqz        $s0, . + 4 + (0x33 << 2)
label_2df02c:
    if (ctx->pc == 0x2DF02Cu) {
        ctx->pc = 0x2DF02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF028u;
        // 0x2df02c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DF030u;
        goto label_2df030;
    }
    ctx->pc = 0x2DF028u;
    {
        const bool branch_taken_0x2df028 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DF02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF028u;
        // 0x2df02c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df028) {
            ctx->pc = 0x2DF0F8u;
            goto label_2df0f8;
        }
    }
    ctx->pc = 0x2DF030u;
label_2df030:
    // 0x2df030: 0x13c0000b  beqz        $fp, . + 4 + (0xB << 2)
label_2df034:
    if (ctx->pc == 0x2DF034u) {
        ctx->pc = 0x2DF034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF030u;
        // 0x2df034: 0x2121021  addu        $v0, $s0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DF038u;
        goto label_2df038;
    }
    ctx->pc = 0x2DF030u;
    {
        const bool branch_taken_0x2df030 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DF034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF030u;
        // 0x2df034: 0x2121021  addu        $v0, $s0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df030) {
            ctx->pc = 0x2DF060u;
            goto label_2df060;
        }
    }
    ctx->pc = 0x2DF038u;
label_2df038:
    // 0x2df038: 0x6bc30007  ldl         $v1, 0x7($fp)
    ctx->pc = 0x2df038u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 30), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_2df03c:
    // 0x2df03c: 0x6fc30000  ldr         $v1, 0x0($fp)
    ctx->pc = 0x2df03cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 30), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_2df040:
    // 0x2df040: 0x6bc4000f  ldl         $a0, 0xF($fp)
    ctx->pc = 0x2df040u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 30), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_2df044:
    // 0x2df044: 0x6fc40008  ldr         $a0, 0x8($fp)
    ctx->pc = 0x2df044u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 30), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_2df048:
    // 0x2df048: 0xb0430007  sdl         $v1, 0x7($v0)
    ctx->pc = 0x2df048u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2df04c:
    // 0x2df04c: 0xb4430000  sdr         $v1, 0x0($v0)
    ctx->pc = 0x2df04cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2df050:
    // 0x2df050: 0xb044000f  sdl         $a0, 0xF($v0)
    ctx->pc = 0x2df050u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2df054:
    // 0x2df054: 0x280902d  daddu       $s2, $s4, $zero
    ctx->pc = 0x2df054u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2df058:
    // 0x2df058: 0xb4440008  sdr         $a0, 0x8($v0)
    ctx->pc = 0x2df058u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2df05c:
    // 0x2df05c: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x2df05cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2df060:
    // 0x2df060: 0x12c00007  beqz        $s6, . + 4 + (0x7 << 2)
label_2df064:
    if (ctx->pc == 0x2DF064u) {
        ctx->pc = 0x2DF064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF060u;
        // 0x2df064: 0x3c030073  lui         $v1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DF068u;
        goto label_2df068;
    }
    ctx->pc = 0x2DF060u;
    {
        const bool branch_taken_0x2df060 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DF064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF060u;
        // 0x2df064: 0x3c030073  lui         $v1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df060) {
            ctx->pc = 0x2DF080u;
            goto label_2df080;
        }
    }
    ctx->pc = 0x2DF068u;
label_2df068:
    // 0x2df068: 0x2123021  addu        $a2, $s0, $s2
    ctx->pc = 0x2df068u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
label_2df06c:
    // 0x2df06c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2df06cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2df070:
    // 0x2df070: 0x8c621094  lw          $v0, 0x1094($v1)
    ctx->pc = 0x2df070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4244)));
label_2df074:
    // 0x2df074: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x2df074u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2df078:
    // 0x2df078: 0x40f809  jalr        $v0
label_2df07c:
    if (ctx->pc == 0x2DF07Cu) {
        ctx->pc = 0x2DF07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF078u;
        // 0x2df07c: 0xc0b02d  daddu       $s6, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DF080u;
        goto label_2df080;
    }
    ctx->pc = 0x2DF078u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2DF080u);
        ctx->pc = 0x2DF07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF078u;
        // 0x2df07c: 0xc0b02d  daddu       $s6, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DF078u, 0x2DF080u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2DF080u;
label_2df080:
    // 0x2df080: 0x8fa80058  lw          $t0, 0x58($sp)
    ctx->pc = 0x2df080u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2df084:
    // 0x2df084: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x2df084u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2df088:
    // 0x2df088: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2df088u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2df08c:
    // 0x2df08c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2df08cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2df090:
    // 0x2df090: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x2df090u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2df094:
    // 0x2df094: 0xc0b791a  jal         func_2DE468
label_2df098:
    if (ctx->pc == 0x2DF098u) {
        ctx->pc = 0x2DF098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF094u;
        // 0x2df098: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DF09Cu;
        goto label_2df09c;
    }
    ctx->pc = 0x2DF094u;
    SET_GPR_U32(ctx, 31, 0x2DF09Cu);
    ctx->pc = 0x2DF098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DF094u;
    // 0x2df098: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE468u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DE468u, 0x2DF094u, 0x2DF09Cu)) {
        return;
    }
    ctx->pc = 0x2DF09Cu;
label_2df09c:
    // 0x2df09c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2df09cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2df0a0:
    // 0x2df0a0: 0x12000015  beqz        $s0, . + 4 + (0x15 << 2)
label_2df0a4:
    if (ctx->pc == 0x2DF0A4u) {
        ctx->pc = 0x2DF0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF0A0u;
        // 0x2df0a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DF0A8u;
        goto label_2df0a8;
    }
    ctx->pc = 0x2DF0A0u;
    {
        const bool branch_taken_0x2df0a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DF0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF0A0u;
        // 0x2df0a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df0a0) {
            ctx->pc = 0x2DF0F8u;
            goto label_2df0f8;
        }
    }
    ctx->pc = 0x2DF0A8u;
label_2df0a8:
    // 0x2df0a8: 0x12200013  beqz        $s1, . + 4 + (0x13 << 2)
label_2df0ac:
    if (ctx->pc == 0x2DF0ACu) {
        ctx->pc = 0x2DF0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF0A8u;
        // 0x2df0ac: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DF0B0u;
        goto label_2df0b0;
    }
    ctx->pc = 0x2DF0A8u;
    {
        const bool branch_taken_0x2df0a8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DF0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF0A8u;
        // 0x2df0ac: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df0a8) {
            ctx->pc = 0x2DF0F8u;
            goto label_2df0f8;
        }
    }
    ctx->pc = 0x2DF0B0u;
label_2df0b0:
    // 0x2df0b0: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x2df0b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_2df0b4:
    // 0x2df0b4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2df0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_2df0b8:
    // 0x2df0b8: 0x3442fffb  ori         $v0, $v0, 0xFFFB
    ctx->pc = 0x2df0b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65531);
label_2df0bc:
    // 0x2df0bc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2df0bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_2df0c0:
    // 0x2df0c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2df0c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2df0c4:
    // 0x2df0c4: 0xc0b7d62  jal         func_2DF588
label_2df0c8:
    if (ctx->pc == 0x2DF0C8u) {
        ctx->pc = 0x2DF0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF0C4u;
        // 0x2df0c8: 0xae030054  sw          $v1, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DF0CCu;
        goto label_2df0cc;
    }
    ctx->pc = 0x2DF0C4u;
    SET_GPR_U32(ctx, 31, 0x2DF0CCu);
    ctx->pc = 0x2DF0C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DF0C4u;
    // 0x2df0c8: 0xae030054  sw          $v1, 0x54($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF588u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DF588u, 0x2DF0C4u, 0x2DF0CCu)) {
        return;
    }
    ctx->pc = 0x2DF0CCu;
label_2df0cc:
    // 0x2df0cc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2df0d0:
    if (ctx->pc == 0x2DF0D0u) {
        ctx->pc = 0x2DF0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF0CCu;
        // 0x2df0d0: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DF0D4u;
        goto label_2df0d4;
    }
    ctx->pc = 0x2DF0CCu;
    {
        const bool branch_taken_0x2df0cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DF0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF0CCu;
        // 0x2df0d0: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df0cc) {
            ctx->pc = 0x2DF0DCu;
            goto label_2df0dc;
        }
    }
    ctx->pc = 0x2DF0D4u;
label_2df0d4:
    // 0x2df0d4: 0x10000005  b           . + 4 + (0x5 << 2)
label_2df0d8:
    if (ctx->pc == 0x2DF0D8u) {
        ctx->pc = 0x2DF0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF0D4u;
        // 0x2df0d8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DF0DCu;
        goto label_2df0dc;
    }
    ctx->pc = 0x2DF0D4u;
    {
        const bool branch_taken_0x2df0d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DF0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF0D4u;
        // 0x2df0d8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df0d4) {
            ctx->pc = 0x2DF0ECu;
            goto label_2df0ec;
        }
    }
    ctx->pc = 0x2DF0DCu;
label_2df0dc:
    // 0x2df0dc: 0xc0b7d4e  jal         func_2DF538
label_2df0e0:
    if (ctx->pc == 0x2DF0E0u) {
        ctx->pc = 0x2DF0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF0DCu;
        // 0x2df0e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DF0E4u;
        goto label_2df0e4;
    }
    ctx->pc = 0x2DF0DCu;
    SET_GPR_U32(ctx, 31, 0x2DF0E4u);
    ctx->pc = 0x2DF0E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DF0DCu;
    // 0x2df0e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF538u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DF538u, 0x2DF0DCu, 0x2DF0E4u)) {
        return;
    }
    ctx->pc = 0x2DF0E4u;
label_2df0e4:
    // 0x2df0e4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2df0e4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2df0e8:
    // 0x2df0e8: 0x202180b  movn        $v1, $s0, $v0
    ctx->pc = 0x2df0e8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16));
label_2df0ec:
    // 0x2df0ec: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
label_2df0f0:
    if (ctx->pc == 0x2DF0F0u) {
        ctx->pc = 0x2DF0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF0ECu;
        // 0x2df0f0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DF0F4u;
        goto label_2df0f4;
    }
    ctx->pc = 0x2DF0ECu;
    {
        const bool branch_taken_0x2df0ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DF0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF0ECu;
        // 0x2df0f0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df0ec) {
            ctx->pc = 0x2DF0F8u;
            goto label_2df0f8;
        }
    }
    ctx->pc = 0x2DF0F4u;
label_2df0f4:
    // 0x2df0f4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2df0f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2df0f8:
    // 0x2df0f8: 0x7bb000f0  lq          $s0, 0xF0($sp)
    ctx->pc = 0x2df0f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_2df0fc:
    // 0x2df0fc: 0x7bb100e0  lq          $s1, 0xE0($sp)
    ctx->pc = 0x2df0fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_2df100:
    // 0x2df100: 0x7bb200d0  lq          $s2, 0xD0($sp)
    ctx->pc = 0x2df100u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_2df104:
    // 0x2df104: 0x7bb300c0  lq          $s3, 0xC0($sp)
    ctx->pc = 0x2df104u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_2df108:
    // 0x2df108: 0x7bb400b0  lq          $s4, 0xB0($sp)
    ctx->pc = 0x2df108u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_2df10c:
    // 0x2df10c: 0x7bb500a0  lq          $s5, 0xA0($sp)
    ctx->pc = 0x2df10cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_2df110:
    // 0x2df110: 0x7bb60090  lq          $s6, 0x90($sp)
    ctx->pc = 0x2df110u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_2df114:
    // 0x2df114: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x2df114u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2df118:
    // 0x2df118: 0x7bbe0070  lq          $fp, 0x70($sp)
    ctx->pc = 0x2df118u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2df11c:
    // 0x2df11c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2df11cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2df120:
    // 0x2df120: 0x3e00008  jr          $ra
label_2df124:
    if (ctx->pc == 0x2DF124u) {
        ctx->pc = 0x2DF124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF120u;
        // 0x2df124: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DF128u;
        goto label_2df128;
    }
    ctx->pc = 0x2DF120u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DF124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF120u;
        // 0x2df124: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DF120u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DF128u;
label_2df128:
    // 0x2df128: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2df128u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_2df12c:
    // 0x2df12c: 0x0  nop
    ctx->pc = 0x2df12cu;
    // NOP
label_2df130:
    // 0x2df130: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2df130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_2df134:
    // 0x2df134: 0x0  nop
    ctx->pc = 0x2df134u;
    // NOP
    ctx->pc = 0x2df138u;
}
